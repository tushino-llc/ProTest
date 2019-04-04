#include "../../headers/database.h"

sqlite3 * db = nullptr;


int db_open()
{
    if(sqlite3_open("test.sqlite", &db) != SQLITE_OK)
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
    if (rc != SQLITE_DONE && rc != SQLITE_OK)
        return -1;

    // only 1 row must be affected
    if (sqlite3_changes(db) != 1)
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
    if (rc != SQLITE_DONE && rc != SQLITE_OK)
        return -1;

    // only 1 row must be affected
    if (sqlite3_changes(db) != 1)
        return -1;
    
    rc = sqlite3_prepare_v2(db, "DELETE FROM `marks` WHERE user_id = ?", -1, &st, nullptr);
    sqlite3_bind_int( st, 1, id );

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


User db_login(char * login, char * password)
{
    int rc;
    User user = {0};

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
    user.login = (char *)name;
    // skip password column
    name = sqlite3_column_text(st, 3);
    user.first_name = (char *)name;
    name = sqlite3_column_text(st, 4);
    user.last_name = (char *)name;
    res = sqlite3_column_int(st, 5);
    user.admin = res != 0;

    return user;
}