# 1. База данных
## 1.1. Cтруктуры
### User
```
struct User {
  char * login;
  char * first_name;
  char * last_name;
}
```
### Question
```
struct Question {
  char * theme;
  char * value;
  char * ans[4];
  int correct;
}
```
Здесь `value` - это сам текст вопроса, `ans` - массив вариантов ответа, а `correct` - индекс правильного ответа в массиве (от 0 до 3)

## 1.2. Функции (Режим студента)

- `User db_login(char * login, char * password)` - возвращает null в случае ошибки, или объект пользователя при успешной авторизации
- `Question[10] db_get_test(char * theme)` - возвращает массив из 10 рандомных вопросов темы *theme* (см. **Примечание** в конце)
- `Question[40] db_get_final_test()` - рандомит 40 вопросов из любых тем
- `void db_set_mark(int user_id, char * theme, int mark)` - ставит пользователю с ID *user_id* оценку *mark* по теме *theme*
