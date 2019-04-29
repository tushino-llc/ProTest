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

#include "../headers/tests_main_header.h"

int signin()
{

    /* Initializing variables */
    User user = {};
    char password[256], login[256];

    /* I/O flow */
    printf("| Type the username: ");
    fgets(login, 256, stdin);
    printf("| Type the password: ");
    fgets(password, 256, stdin);

    /* Main part */
    login[strlen(login) - 1] = '\0';
    password[strlen(password) - 1] = '\0';

    if (field_check_teacher(login) && field_check_teacher(password)) {
        user = db_login(login, password);

        if (!user.admin && user.id) {
            return user.id;
        } else {
            prt_ln();
            printf("| menu: error! Wrong login or password!                      |\n");
            return 0;
        }
    } else {
        return 0;
    }
}

int menu_topic() {

    /* Initializing variables */
    int func, junk, n = 0;

    /* I/O flow */
    while (1) {
        printf(" ------------------------------------------------------------\n"
               "|                                                            |\n"
               "|                    >> Student's mode <<                    |\n"
               "|                                                            |\n"
               "|  >> Choose a topic:                                        |\n"
               "|                                                            |\n"
               "|       1) Loops                                             |\n"
               "|       2) Arrays                                            |\n"
               "|       3) Strings                                           |\n"
               "|       4) Recursion                                         |\n"
               "|       5) Structures                                        |\n"
               "|       6) Files                                             |\n"
               "|       7) Pointers                                          |\n"
               "|       8) Dynamic memory                                    |\n"
               "|                                                            |\n"
               "|       >> Type \"back\" to go to the previous menu <<         |\n"
               "|       >> Type \"quit\" to terminate this program <<          |\n"
               "|                                                            |\n");
        printf("| Answer: ");
        func = getchar();
        prt_ln();
        if (isdigit(func) && func >= '1' && func <= '8') {
            func -= '0';
            func -= 1;
            if ((junk = getchar()) != '\n') {
                while ((junk = getchar()) != '\n')
                    ;
                no_cmd();
                continue;
            }

            return func;

        } else if (func == 'q') {
            if (quit_m()) {
                return -1;
            } else {
                continue;
            }
        } else if (func == 'b') {
            if (back_m()) {
                return 0;
            } else {
                continue;
            }
        } else {
            no_cmd();
            if (func != '\n') {
                while ((junk = getchar()) != '\n')
                    ;
            }
            continue;
        }
    }
}

void print_q_correct(const char *q) {

    /* Main part */
    printf("|     ");
    while (*q) {
        putchar(*q);
        if (*q == '\n') {
            printf("|     ");
            fflush(stdout);
        }
        ++q;
    }
}

int get_q_ans(struct Question *quest, int curr_q, int max_q, t_type t) {

    /* Initializing variables */
    int func, junk, n = 0;

    /* I/O flow */
    while (1) {
        printf(" ------------------------------------------------------------\n");
        printf("|                                                            |\n");
        if (t == training) {
            printf("|                       >> Training <<                       |\n");
        } else if (t == practice) {
            printf("|                       >> Practice <<                       |\n");
        } else {
            printf("|                      >> Final test <<                      |\n");
        }
        printf("|                                                            |\n");
        printf("|  >> Question [%2d/%2d]:                                      |\n", curr_q, max_q);
        printf("|                                                            |\n");
        fflush(stdout);
        print_q_correct(quest->value);
        printf("\n|                                                            |\n");
        printf("|       1) %s\n", quest->ans[0]);
        printf("|       2) %s\n", quest->ans[1]);
        printf("|       3) %s\n", quest->ans[2]);
        printf("|       4) %s\n", quest->ans[3]);
        printf("|                                                            |\n");

        printf("| Answer: ");
        func = getchar();
        prt_ln();
        if (isdigit(func) && func >= '1' && func <= '4') {
            func -= '0';
            func -= 1;
            if ((junk = getchar()) != '\n') {
                while ((junk = getchar()) != '\n')
                    ;
                no_cmd();
                continue;
            }

            return func;

        } else {
            printf("| test: no such answer!                                      |\n");
            if (func != '\n') {
                while ((junk = getchar()) != '\n')
                    ;
            }
            continue;
        }
    }
}

void Training() {

    /* Initializing variables */
	Question* questions;
	int sub, ans;
	prt_ln();
	sub = menu_topic();

	/* VarCheck */
	if (!(questions = db_get_test(sub))) {
        return;
	}

	/* Main part */
    for (int i = 0; i < 10; ++i) {
        ans = get_q_ans(questions + i, i + 1, 10, t_type::training);

        if (ans != questions[i].correct) {
            printf("| test: wrong answer. Try again!                             |\n");
            --i;
            continue;
        }
	}

    /* Final output */
    printf("| test: you've passed the training!                          |\n");
    prt_ln();
}

void Test(int id)
{
	Question* questions;

	int sub, ans, sum = 0, a[10], inc = 0;
	double mark;
	prt_ln();
	printf("| Choose a subject:                                          |\n"
		"| [0] - loops                                                |\n"
		"| [1] - arrays                                               |\n"
		"| [2] - strings                                              |\n"
		"| [3] - recursion                                            |\n"
		"| [4] - structs                                              |\n"
		"| [5] - files                                                |\n"
		"| [6] - pointers                                             |\n"
		"| [7] - dynamic                                              |\n");

	do {
		printf("| Answer: ");
		scanf("%d", &sub);
		if (sub < 0 || sub>7)
			printf("| Such subject does not exist.Try again.\n");
	} while (sub < 0 || sub>7);
	questions = db_get_test(sub);
	prt_ln();
	for (int i = 0; i < 10; i++)
	{
		printf("| %s\n", questions[i].value);
		printf("| \n");
		printf("| [0] %s\n", questions[i].ans[0]);
		printf("| [1] %s\n", questions[i].ans[1]);
		printf("| [2] %s\n", questions[i].ans[2]);
		printf("| [3] %s\n", questions[i].ans[3]);
		printf("| Answer: ");
		do {
			scanf("%d", &ans);
			if (ans < 0 || ans>3)
				printf("| No such answer.Try again: ");
		} while (ans < 0 || ans>3);

		if (ans == questions[i].correct)
			sum += 1;
		else
		{
			a[i] = 0;
			inc += 1;
		}

		printf("| \n");
	}

	if (inc > 0)
	{

		printf("| Questions with the wrong answer:\n");
		for (int i = 0; i < 10; i++)
		{
			if (a[i] == 0)
			{
				printf("| %s\n", questions[i].value);
				printf("|\n");
				printf("| Right answer is %d\n", questions[i].correct);
				printf("| \n");
			}
		}
	}
	mark = sum * 1.0 / 10;

	if (mark < 0.5)
	{
		db_set_mark(id, sub, 2);
		printf("| Your mark is 2\n");
	}
	else if (mark < 0.7)
	{
		db_set_mark(id, sub, 3);
		printf("| Your mark is 3\n");
	}
	else if (mark < 0.9)
	{
		db_set_mark(id, sub, 4);
		printf("| Your mark is 4\n");
	}
	else
	{
		db_set_mark(id, sub, 5);
		printf("| Your mark is 5\n");
	}

}

void FinalTest(int id)
{
	Question* questions;

	int  ans, sum = 0, inc = 0;
	double mark;

	questions = db_get_final_test();
	prt_ln();
	for (int i = 0; i < 40; i++)
	{
		printf("| %s\n", questions[i].value);
		printf("| \n");
		printf("| [0] %s\n", questions[i].ans[0]);
		printf("| [1] %s\n", questions[i].ans[1]);
		printf("| [2] %s\n", questions[i].ans[2]);
		printf("| [3] %s\n", questions[i].ans[3]);
		printf("| Answer: ");
		do {
			scanf("%d", &ans);
			if (ans < 0 || ans>3)
				printf("| No such answer.Try again: ");
		} while (ans < 0 || ans>3);

		if (ans == questions[i].correct)
			sum += 1;
		printf("| \n");
	}
	printf("| Your result %d/40 points.\n", sum);
	mark = sum * 1.0 / 40;

	if (mark < 0.5)
	{
		db_set_mark(id, 9, 2);
		printf("| Your mark is 2\n");
	}
	if ((mark >= 0.5) && (mark < 0.7))
	{
		db_set_mark(id, 9, 3);
		printf("| Your mark is 3\n");
	}
	if ((mark >= 0.7) && (mark < 0.9))
	{
		db_set_mark(id, 9, 4);
		printf("| Your mark is 4\n");
	}
	if (mark >= 0.9)
	{
		db_set_mark(id, 9, 5);
		printf("| Your mark is 5\n");
	}

}
