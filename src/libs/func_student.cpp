#include "../headers/tests_main_header.h"


int signin()
{
    User user = {};
    char password[256], login[256];

    printf("| Type the username: ");
    fgets(login, 256, stdin);
    field_check_teacher(login);
    printf("| Type the password: ");
    fgets(password, 30, stdin);

    login[strlen(login) - 1] = '\0';
    password[strlen(password) - 1] = '\0';

    field_check_teacher(login);
    field_check_teacher(password);

    user = db_login(login, password);

    if (!user.admin && user.id) {
        return 1;
    } else {
        prt_ln();
        printf("| Error! Wrong login or password!                            |\n");
        return 0;
    }
}

void Training()
{
	Question * questions;
	int sub, ans;
	prt_ln;
	printf("| Choose a subject:                                        |\n"
		   "| [0] - loops                                              |\n"
		   "| [1] - arrays                                             |\n"
		   "| [2] - strings                                            |\n"
		   "| [3] - recursion                                          |\n"
		   "| [4] - structs                                            |\n"
		   "| [5] - files                                              |\n"
		   "| [6] - pointers                                           |\n"
		   "| [7] - dynamic                                            |\n");
	
	do {
		scanf("%d", &sub);
		if (sub < 0 || sub>7)
			printf("| Such subject does not exist.Try again.\n");
	} while (sub < 0 || sub>7);
	questions = db_get_test(sub);
	prt_ln;
	for (int i = 0; i < 10; i++)
	{
		printf("| %s\n", questions[i].value);
		printf("| %s\n", questions[i].ans);
		do {
			printf("| Answer: ");
			scanf("%d", &ans);
			if (ans != questions[i].correct)
				printf("| Wrong answer.Try again.\n");
		} while (ans != questions[i].correct);
		
	}
}

void Test(int id)
{
	Question * questions;
	
	int sub, ans, sum = 0,a[10],inc = 0;
	double mark;
	prt_ln;
	printf("| Choose a subject:                                        |\n"
		"| [0] - loops                                              |\n"
		"| [1] - arrays                                             |\n"
		"| [2] - strings                                            |\n"
		"| [3] - recursion                                          |\n"
		"| [4] - structs                                            |\n"
		"| [5] - files                                              |\n"
		"| [6] - pointers                                           |\n"
		"| [7] - dynamic                                            |\n");

	do {
		scanf("%d", &sub);
		if (sub < 0 || sub>7)
			printf("| Such subject does not exist.Try again.\n");
	} while (sub < 0 || sub>7);
	questions = db_get_test(sub);
	prt_ln;
	for (int i = 0; i < 10; i++)
	{
		printf("| %s\n", questions[i].value);
		printf("| %s\n", questions[i].ans);
		printf("| Answer: ");
		scanf("%d", &ans);
		prt_ln;
		if (ans == questions[i].correct)
			sum += 1;
		else
		{
			a[i] = 0;
			inc += 1;
		}


	}
	
	if (inc > 0)
	{
		printf("| Questions with the wrong answer:\n");
		for (int i = 0; i < 10; i++)
		{
			if (a[i] == 0)
			{
				printf("| %s\n", questions[i].value);
				printf("| Right answer is %d\n", questions[i].correct);
				printf("\n");
			}
		}
	}
	mark = sum * 1.0 / 10;

	if (mark < 0.5)
	{
		db_set_mark(id, sub, 2);
		printf("| Your mark is 2\n");
	}
	if (mark < 0.7)
	{
		db_set_mark(id, sub, 3);
		printf("| Your mark is 3\n");
	}
	if (mark < 0.9)
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
	Question * questions;
	
	int  ans, sum = 0, inc = 0;
	double mark;

	questions = db_get_final_test();
	prt_ln;
	for (int i = 0; i < 40; i++)
	{
		printf("| %s\n", questions[i].value);
		printf("| %s\n", questions[i].ans);
		printf("| Answer: ");
		scanf("%d", &ans);
		printf("\n");
		if (ans == questions[i].correct)
			sum += 1;
	}
	printf("| Your result %d/40 points", sum);
	mark = sum * 1.0 / 40;

	if (mark < 0.5)
	{
		db_set_mark(id, 9, 2);
		printf("| Your mark is 2\n");
	}
	if (mark < 0.7)
	{
		db_set_mark(id, 9, 3);
		printf("| Your mark is 3\n");
	}
	if (mark < 0.9)
	{
		db_set_mark(id, 9, 4);
		printf("| Your mark is 4\n");
	}
	else
	{
		db_set_mark(id, 9, 5);
		printf("| Your mark is 5\n");
	}
	prt_ln;
}
