#include "../../headers/tests_main_header.h"

sqlite3 * db = nullptr;


int db_open()
{
    if(sqlite3_open("test.sqlite", &db) != SQLITE_OK)
        return -1;
    return 0;
}

int db_open(const char * name)
{
    if(sqlite3_open(name, &db) != SQLITE_OK)
        return -1;
    return 0;
}

void db_close()
{
    sqlite3_close(db);
}

int db_delete_question(int id)
{
    int rc;
    sqlite3_stmt * st = nullptr;

    rc = sqlite3_prepare_v2(db, "DELETE FROM `questions` WHERE id = ?", -1, &st, nullptr);
    sqlite3_bind_int( st, 1, id );

    if (rc != SQLITE_OK)
        return -1;

    rc= sqlite3_step(st);
    if (rc != SQLITE_DONE || sqlite3_changes(db) != 1)
        return -1;

    return SQLITE_OK;
}

int db_delete_user(int id)
{
    int rc;
    sqlite3_stmt * st = nullptr;

    rc = sqlite3_prepare_v2(db, "DELETE FROM `users` WHERE id = ?", -1, &st, nullptr);
    sqlite3_bind_int( st, 1, id );

    if (rc != SQLITE_OK)
        return -1;

    rc= sqlite3_step(st);
    if (rc != SQLITE_DONE || sqlite3_changes(db) != 1)
        return -1;

    rc = sqlite3_prepare_v2(db, "DELETE FROM `marks` WHERE user_id = ?", -1, &st, nullptr);
    sqlite3_bind_int( st, 1, id );

    if (rc != SQLITE_OK)
        return -1;

    rc= sqlite3_step(st);
    if (rc != SQLITE_DONE || sqlite3_changes(db) != 1)
        return -1;

    return SQLITE_OK;
}

User db_get_user(int id)
{
    sqlite3_stmt * st = nullptr;

    User user = {0};

    int rc = sqlite3_prepare_v2(db, "SELECT * FROM `users` WHERE id=?;", -1, &st, nullptr);
    if (rc != SQLITE_OK)
        return user;

    rc = sqlite3_bind_int(st, 1, id);
    if (rc != SQLITE_OK)
        return user;

    rc = sqlite3_step(st);
    if (rc != SQLITE_DONE && rc != SQLITE_OK && rc != SQLITE_ROW)
        return user;

    int num = sqlite3_column_int(st, 0);
    user.id = num;

    auto text = (char *) sqlite3_column_text(st, 1);
    strcpy(user.login, text);
    // skip password column
    text = (char *) sqlite3_column_text(st, 3);
    strcpy( user.first_name, text );
    text = (char *) sqlite3_column_text(st, 4);
    strcpy( user.last_name, text );

    num = sqlite3_column_int(st, 5);
    user.admin = num != 0;

    delete(text);

    return user;
}

Marks db_get_user_marks(int user_id)
{
    sqlite3_stmt * st = nullptr;

    Marks marks = {0};

    int rc = sqlite3_prepare_v2(db, "SELECT * FROM `marks` WHERE user_id=?;", -1, &st, nullptr);
    if (rc != SQLITE_OK)
        return marks;

    rc = sqlite3_bind_int(st, 1, user_id);
    if (rc != SQLITE_OK)
        return marks;

    rc = sqlite3_step(st);

    if (rc != SQLITE_DONE && rc != SQLITE_OK && rc != SQLITE_ROW)
        return marks;

    marks.user_id = sqlite3_column_int(st, 0);

    for (int i = 0; i < 10; i++)
        marks.values[i] = sqlite3_column_int(st, i+1);

    return marks;
}

User db_login(char * login, char * password)
{
    int rc;
    User user = {};

    sqlite3_stmt * st = nullptr;
    rc = sqlite3_prepare_v2(db, "SELECT COUNT(*) FROM `users` WHERE login = ? AND pass = ?", -1, &st, nullptr);
    if (rc != SQLITE_OK)
        return user;

    rc = sqlite3_bind_text(st, 1, login, -1, SQLITE_STATIC); // wow, it`s working! (idk why)
    rc = sqlite3_bind_text(st, 2, password, -1, SQLITE_STATIC);

    if (rc != SQLITE_OK)
        return user;

    rc = sqlite3_step(st);

    int res = sqlite3_column_int(st, 0);

    if(res != 1)
        // user not found
        return user;

    rc = sqlite3_prepare_v2(db, "SELECT * FROM `users` WHERE login = ?", -1, &st, nullptr);
    rc = sqlite3_bind_text(st, 1, login, -1, SQLITE_STATIC);

    if (rc != SQLITE_OK)
        // Oops, something went wrong
        return user;

    sqlite3_step(st);

    // write user data to object
    res = sqlite3_column_int(st, 0);
    user.id = res;
    auto name = sqlite3_column_text(st, 1);
    strcpy(user.login, (char *)name);
    // skip password column
    name = sqlite3_column_text(st, 3);
    strcpy(user.first_name, (char *)name);
    name = sqlite3_column_text(st, 4);
    strcpy(user.last_name, (char *)name);
    res = sqlite3_column_int(st, 5);
    user.admin = res != 0;

    return user;
}

Question * db_get_test(int theme)
{
    int rc;
    auto * questions = new Question[10];

    sqlite3_stmt * st = nullptr;
    rc = sqlite3_prepare_v2(db, "SELECT * FROM `questions` WHERE `theme`=? ORDER BY random() LIMIT 10", -1, &st, nullptr);
    if (rc != SQLITE_OK)
        return nullptr;

    rc = sqlite3_bind_int(st, 1, theme);
    if (rc != SQLITE_OK)
        return nullptr;

    int i = 0, num;
    rc = sqlite3_step(st);

    while (rc != SQLITE_DONE && rc != SQLITE_OK && i < 10)
    {
        num = sqlite3_column_int(st, 0);
        questions[i].id = num;
        num = sqlite3_column_int(st, 1);
        questions[i].theme = num;

        auto text = (char *) sqlite3_column_text(st, 2);
        strcpy( questions[i].value, text );
        delete(text);

        for (int j = 3; j < 7; j++) {
            text = (char *) sqlite3_column_text(st, j);
            strcpy( questions[i].ans[j-3], text );
        }

        num = sqlite3_column_int(st, 7);
        questions[i].correct = num;

        rc = sqlite3_step(st);
        i++;
    }

    return questions;
}

Question * db_get_questions(int * size)
{
    sqlite3_stmt * st = nullptr;
    *size = 0; // by default

    // get number of questions
    int rc = sqlite3_prepare_v2(db, "SELECT count(*) FROM `questions`;", -1, &st, nullptr);

    if (rc != SQLITE_OK)
        return nullptr;
    rc = sqlite3_step(st);
    if (rc != SQLITE_DONE && rc != SQLITE_ROW)
        return nullptr;

    int n = sqlite3_column_int(st, 0);

    if (n <= 0)
        return nullptr;

    *size = n;
    auto questions = new Question[n];

    rc = sqlite3_prepare_v2(db, "SELECT * FROM `questions`;", -1, &st, nullptr);
    if (rc != SQLITE_OK)
        return nullptr;

    int i = 0, num;
    rc = sqlite3_step(st);

    while (rc != SQLITE_DONE && rc != SQLITE_OK)
    {
        num = sqlite3_column_int(st, 0);
        questions[i].id = num;
        num = sqlite3_column_int(st, 1);
        questions[i].theme = num;

        auto text = (char *) sqlite3_column_text(st, 2);
        strcpy( questions[i].value, text );
        delete(text);

        for (int j = 3; j < 7; j++) {
            text = (char *) sqlite3_column_text(st, j);
            strcpy( questions[i].ans[j-3], text );
        }

        num = sqlite3_column_int(st, 7);
        questions[i].correct = num;

        rc = sqlite3_step(st);
        i++;
    }

    return questions;
}

Question db_get_question_by_id(int id)
{
    sqlite3_stmt * st = nullptr;

    Question q = {0};

    int rc = sqlite3_prepare_v2(db, "SELECT * FROM `questions` WHERE id = ?;", -1, &st, nullptr);
    if (rc != SQLITE_OK)
        return q;

    rc = sqlite3_bind_int(st, 1, id);
    if (rc != SQLITE_OK)
        return q;

    rc = sqlite3_step(st);
    if (rc != SQLITE_DONE && rc != SQLITE_OK && rc != SQLITE_ROW)
        return q;

    int num = sqlite3_column_int(st, 0);
    q.id = num;
    num = sqlite3_column_int(st, 1);
    q.theme = num;

    auto text = (char *) sqlite3_column_text(st, 2);
    strcpy( q.value, text );
    delete(text);

    for (int j = 3; j < 7; j++) {
        text = (char *) sqlite3_column_text(st, j);
        strcpy( q.ans[j-3], text );
    }

    num = sqlite3_column_int(st, 7);
    q.correct = num;

    return q;
}

int db_add_user(User user, char * password)
{
    int rc;
    sqlite3_stmt * st = nullptr;

    rc = sqlite3_prepare_v2(db, "INSERT INTO `users` VALUES (NULL, ?, ?, ?, ?, 0)", -1, &st, nullptr);
    sqlite3_bind_text( st, 1, user.login, -1, SQLITE_STATIC);
    sqlite3_bind_text( st, 2, password, -1, SQLITE_STATIC);
    sqlite3_bind_text( st, 3, user.first_name, -1, SQLITE_STATIC);
    sqlite3_bind_text( st, 4, user.last_name, -1, SQLITE_STATIC);

    if (rc != SQLITE_OK)
        return -1;

    rc = sqlite3_step(st);
    if (rc != SQLITE_DONE)
        return -1;


    return (int) sqlite3_last_insert_rowid(db);
}

int db_add_admin(User user, char * password)
{
    int rc;
    sqlite3_stmt * st = nullptr;

    int id = db_add_user(user, password);
    if (id == -1)
        return -1;

    rc = db_grant_admin(id);
    if (rc == SQLITE_OK)
        return id;
    else
        return -1;
}

int db_add_question(Question question)
{
    int rc;
    sqlite3_stmt * st = nullptr;

    rc = sqlite3_prepare_v2(db, "INSERT INTO `questions` VALUES (NULL, ?, ?, ?, ?, ?, ?, ?)", -1, &st, nullptr);
    sqlite3_bind_int( st, 1, question.theme);
    sqlite3_bind_text( st, 2, question.value, -1, SQLITE_STATIC);
    sqlite3_bind_text( st, 3, question.ans[0], -1, SQLITE_STATIC);
    sqlite3_bind_text( st, 4, question.ans[1], -1, SQLITE_STATIC);
    sqlite3_bind_text( st, 5, question.ans[2], -1, SQLITE_STATIC);
    sqlite3_bind_text( st, 6, question.ans[3], -1, SQLITE_STATIC);
    sqlite3_bind_int( st, 7, question.correct);

    if (rc != SQLITE_OK)
        return -1;

    rc = sqlite3_step(st);
    if (rc != SQLITE_DONE && rc != SQLITE_OK)
        return -1;

    rc = sqlite3_prepare_v2(db, "SELECT last_insert_rowid()", -1, &st, nullptr);

    if (rc != SQLITE_OK)
        return -1;

    rc= sqlite3_step(st);
    if (rc != SQLITE_DONE && rc != SQLITE_OK)
        return -1;

    int res = sqlite3_column_int(st, 0);

    return res;
}

Question * db_get_final_test()
{
    int rc;
    auto * questions = new Question[40];

    sqlite3_stmt * st = nullptr;
    rc = sqlite3_prepare_v2(db, "SELECT * FROM `questions` ORDER BY random() LIMIT 40", -1, &st, nullptr);
    if (rc != SQLITE_OK)
        return nullptr;

    int i = 0, num;
    rc = sqlite3_step(st);

    while (rc != SQLITE_DONE && rc != SQLITE_OK && i < 40)
    {
        num = sqlite3_column_int(st, 0);
        questions[i].id = num;
        num = sqlite3_column_int(st, 1);
        questions[i].theme = num;

        auto text = (char *) sqlite3_column_text(st, 2);
        strcpy( questions[i].value, text );
        delete(text);

        for (int j = 3; j < 7; j++) {
            text = (char *) sqlite3_column_text(st, j);
            strcpy( questions[i].ans[j-3], text );
        }

        num = sqlite3_column_int(st, 7);
        questions[i].correct = num;

        rc = sqlite3_step(st);
        i++;
    }

    return questions;
}

int db_set_mark(int user_id, int theme, int mark)
{
    int rc;
    char * value = nullptr;
    sqlite3_stmt * st = nullptr;

    value = db_get_theme_by_id(theme);

    rc = sqlite3_prepare_v2(db, "UPDATE `marks` SET ? = ? WHERE user_id = ?", -1, &st, nullptr);
    sqlite3_bind_text( st, 1, value, -1, SQLITE_STATIC);
    sqlite3_bind_int( st, 2, mark );
    sqlite3_bind_int( st, 3, user_id );

    free(value);

    if (rc != SQLITE_OK)
        return -1;

    rc= sqlite3_step(st);
    if (rc != SQLITE_DONE && rc != SQLITE_OK)
        return -1;

    // only 1 row must be affected
    if (sqlite3_changes(db) != 1)
        return -1;

    return SQLITE_OK;

}

char * db_get_theme_by_id(int index)
{
    switch(index)
    {
        // case 0:  return (char *)"loops";
        case 0:
            return strdup("loops");
        // case 1:  return (char *)"arrays";
        case 1:
            return strdup("arrays");
        // case 2:  return (char *)"strings";
        case  2:
            return strdup("strings");
        // case 3:  return (char *)"recursion";
        case 3:
            return strdup("recursion");
        // case 4:  return (char *)"structs";
        case 4:
            return strdup("structs");
        // case 5:  return (char *)"files";
        case 5:
            return strdup("files");
        // case 6:  return (char *)"pointers";
        case 6:
            return strdup("pointers");
        // case 7:  return (char *)"dynamic";
        case 7:
            return strdup("dynamic");
        // case 8:  return (char *)"average";
        case 8:
            return strdup("average");
        // case 9:  return (char *)"final";
        case 9:
            return strdup("final");
        // default: return (char *)"loops";
        default:
            return strdup("loops");
    }
}

int db_update_question(Question question)
{

    int rc;
    sqlite3_stmt * st = nullptr;
    
    rc = sqlite3_prepare_v2(db, "UPDATE `questions` SET theme = ?, value = ?, ans1 = ?, ans2 = ?, ans3 = ?, ans4 = ?, correct = ? WHERE id = ?", -1, &st, nullptr);
    sqlite3_bind_int( st, 1, question.theme);
    sqlite3_bind_text( st, 2, question.value, -1, SQLITE_STATIC);
    sqlite3_bind_text( st, 3, question.ans[0], -1, SQLITE_STATIC);
    sqlite3_bind_text( st, 4, question.ans[1], -1, SQLITE_STATIC);
    sqlite3_bind_text( st, 5, question.ans[2], -1, SQLITE_STATIC);
    sqlite3_bind_text( st, 6, question.ans[3], -1, SQLITE_STATIC);
    sqlite3_bind_int( st, 7, question.correct );
    sqlite3_bind_int( st, 8, question.id );

    if (rc != SQLITE_OK)
        return -1;

    rc= sqlite3_step(st);
    if (rc != SQLITE_DONE && rc != SQLITE_OK)
        return -1;

    // only 1 row must be affected
    if (sqlite3_changes(db) != 1)
        return -1;

    return SQLITE_OK;
}

User * db_get_users(int * size)
{
    sqlite3_stmt * st = nullptr;
    *size = 0; // by default
    
    // get number of users
    int rc = sqlite3_prepare_v2(db, "SELECT count(*) FROM `users` WHERE `admin` = 0;", -1, &st, nullptr);

    if (rc != SQLITE_OK)
        return nullptr;
    rc = sqlite3_step(st);
    if (rc != SQLITE_DONE && rc != SQLITE_ROW)
        return nullptr;

    int n = sqlite3_column_int(st, 0);

    if (n <= 0)
        return nullptr;

    *size = n;
    auto users = new User[n];

    rc = sqlite3_prepare_v2(db, "SELECT * FROM `users` WHERE `admin` = 0;", -1, &st, nullptr);
    if (rc != SQLITE_OK)
        return nullptr;

    int i = 0, num;
    rc = sqlite3_step(st);

    while (rc != SQLITE_DONE && rc != SQLITE_OK)
    {
        num = sqlite3_column_int(st, 0);
        users[i].id = num;

        auto text = (char *) sqlite3_column_text(st, 1);
        strcpy(users[i].login, text);
        // skip password column
        text = (char *) sqlite3_column_text(st, 3);
        strcpy( users[i].first_name, text );
        text = (char *) sqlite3_column_text(st, 4);
        strcpy( users[i].last_name, text );

        num = sqlite3_column_int(st, 5);
        users[i].admin = num != 0;

//        delete(text);
        rc = sqlite3_step(st);
        i++;
    }

    return users;
}

User * db_get_users_sorted(int * size, int by, int desc)
{
    sqlite3_stmt * st = nullptr;
    char *temp = nullptr;
    *size = 0; // by default

    // get number of users
    int rc = sqlite3_prepare_v2(db, "SELECT count(*) FROM `users` WHERE `admin` = 0;", -1, &st, nullptr);

    if (rc != SQLITE_OK)
        return nullptr;
    rc = sqlite3_step(st);
    if (rc != SQLITE_DONE && rc != SQLITE_ROW)
        return nullptr;

    int n = sqlite3_column_int(st, 0);

    if (n <= 0)
        return nullptr;

    *size = n;
    auto users = new User[n];

    // build a query with some kostyl
    char query[512] = "SELECT users.* FROM `users` as users JOIN `marks` AS m ON m.user_id = users.id AND `admin` = 0 ORDER BY m."; // FUCK YEAH!
    strcat(query, (temp = db_get_theme_by_id(by)));
    free(temp);
    if (desc)
        strcat(query, " DESC;");

    rc = sqlite3_prepare_v2(db, query, -1, &st, nullptr);
    if (rc != SQLITE_OK)
        return nullptr;

    int i = 0, num;
    rc = sqlite3_step(st);

    while (rc != SQLITE_DONE && rc != SQLITE_OK)
    {
        num = sqlite3_column_int(st, 0);
        users[i].id = num;

        auto text = (char *) sqlite3_column_text(st, 1);
        strcpy(users[i].login, text);
        // skip password column
        text = (char *) sqlite3_column_text(st, 3);
        strcpy( users[i].first_name, text );
        text = (char *) sqlite3_column_text(st, 4);
        strcpy( users[i].last_name, text );

        num = sqlite3_column_int(st, 5);
        users[i].admin = num != 0;

        delete(text);
        rc = sqlite3_step(st);
        i++;
    }

    return users;
}

int db_grant_admin(int id)
{
    sqlite3_stmt * st = nullptr;

    // get number of users
    int rc = sqlite3_prepare_v2(db, "UPDATE `users` SET admin=1 WHERE id=?", -1, &st, nullptr);
    if (rc != SQLITE_OK)
        return -1;
    rc = sqlite3_bind_int(st, 1, id);
    if (rc != SQLITE_OK)
        return -1;

    rc = sqlite3_step(st);
    if (rc != SQLITE_DONE && rc != SQLITE_ROW)
        return -1;

    return SQLITE_OK;
}

int db_update_user(User user, char * password)
{
    int rc;
    sqlite3_stmt * st = nullptr;

    rc = sqlite3_prepare_v2(db, "UPDATE `users` SET login = ?, pass = ?, first_name = ?, last_name = ?, admin = ? WHERE id = ?", -1, &st, nullptr);
    sqlite3_bind_text( st, 1, user.login, -1,SQLITE_STATIC);
    sqlite3_bind_text( st, 2, password, -1,SQLITE_STATIC);
    sqlite3_bind_text( st, 3, user.first_name, -1,SQLITE_STATIC);
    sqlite3_bind_text( st, 4, user.last_name, -1,SQLITE_STATIC);
    sqlite3_bind_int( st, 5, (int)user.admin);
    sqlite3_bind_int( st, 6, user.id);

    if (rc != SQLITE_OK)
        return -1;

    rc= sqlite3_step(st);
    if (rc != SQLITE_DONE && rc != SQLITE_OK)
        return -1;

    // only 1 row must be affected
    if (sqlite3_changes(db) != 1)
        return -1;

    return SQLITE_OK;
}
