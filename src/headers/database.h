/*
ProTest — free powerful program for educational tests
Copyright © 2019 Tushino Software LLC

This file is part of ProTest.

ProTest is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

ProTest is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with ProTest. If not, see <https://www.gnu.org/licenses/>.
*/

/**
*
*   THIS FILE IS NOT LINKED TO MAIN HEADER YET
*
*/

#include "sqlite3.h"

struct User {
    int id;
    bool admin;
    char * login;
    char * first_name;
    char * last_name;
};

struct Question {
    int id;
    int theme;
    char * value;
    char * ans[4];
    int correct;
};

struct Marks {
    int user_id;
    int values[10];
};

int db_open();

int db_delete_question(int id);
int db_delete_user(int id);
void db_close();

User db_login(char * login, char * password);