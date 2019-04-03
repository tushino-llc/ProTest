# 1. База данных
## 1.1. Cтруктуры
### User
```
struct User {
  bool admin;
  int id;
  char * login;
  char * first_name;
  char * last_name;
  
}
```
### Question
```
struct Question {
  int id;
  char * theme;
  char * value;
  char * ans[4];
  int correct;
}
```
Здесь `value` - это сам текст вопроса, `ans` - массив вариантов ответа, а `correct` - индекс правильного ответа в массиве (от 0 до 3)
### Marks
```
struct Marks {
  int user_id;
  int loops;
  int arrays;
  int strings;
  int recursion;
  int structs;
  int files;
  int pointers;
  int dynamic;
  int average;
  int final;
}
```

## 1.2. Функции (Режим студента)

- `User db_login(char * login, char * password)` - возвращает null в случае ошибки, или объект пользователя при успешной авторизации
- `Question[10] db_get_test(char * theme)` - возвращает массив из 10 рандомных вопросов темы *theme* (см. **Примечание** в конце)
- `Question[40] db_get_final_test()` - рандомит 40 вопросов из любых тем
- `int db_set_mark(int user_id, char * theme, int mark)` - ставит пользователю с ID *user_id* оценку *mark* по теме *theme* (или *final*); Возвращает 0, если ОК, или -1 если не ОК.

## 1.3. Функции (Режим преподавателя)

- `User db_login_admin(char * login, char * password)` - возвращает null в случае ошибки, или объект пользователя при успешной авторизации

### Управление вопросами

- `int db_add_question(Question question)` - Добавляет вопрос; Возвращает id вопроса, или -1 в случае ошибки *(Поле id структуры question не имеет значения)*
- `int db_update_question(Question question)` - Изменяет вопрос; Возвращает 0, если ОК, или -1 если не ОК.
- `int db_delete_question(int id)` - Удаляет вопрос. Возвращает 0, если ОК, или -1 если не ОК.

### Работа со студентами

- `int db_add_user(User user, char * password)` - Добавляет нового пользователя с правами **студента** (значение поля admin и id не важно); Возвращает id пользователя, или -1 в случае ошибки 
- `int db_add_admin(User user, char * password)` - Добавляет нового пользователя с правами **преподавателя** (значение поля admin и id не важно); Возвращает id пользователя, или -1 в случае ошибки 
- `int db_delete_user(int id)` - Удаляет пользователя; Возвращает 0, если ОК, или -1 если не ОК.
- `User[] db_get_users(int * size)` - Возвращает динамичекий массив **всех** студентов в базе (не преподавателей). Записывает длину массива в переменную size.
- Фильтрацию делайте сами
- `Marks db_get_user_marks(int user_id)` - Возвращает объект оценок одного пользователя или NULL если не ок
- `User[] db_get_users_sorted(int * size, char * by, int desc)` - Возвращает динамичекий массив студентов в базе. Записывает длину массива в переменную size. Сортирует по оценкам,  by - название темы, или 'average', или 'final'. Если desc == 0, то сортируется по возрастанию, 1 - по убыванию
