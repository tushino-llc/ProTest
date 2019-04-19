#include "../headers/tests_main_header.h"

int signin()
{
	int error, sign;
	char password[20], name[20];
	do {
        User db_login(login, password);
		error = User.id;
		if (error == NULL) { printf("| Error! Account not found. Try again? [1 - yes; 0 - no] \n"); }
		do {
			scanf("%d", &sign);
		} while ((sign > 1) || (sign < 0));
		if (sign == 0)
			return 0;
	} while (sign == 1);

	return 1;
}

void Training()
{
	Question * questions;
	int sub, ans;
	printf("| Choose a subject\n"
		"[0] - loops    \n"
		"[1] - arrays   \n"
		"[2] - strings  \n"
		"[3] - recursion\n"
		"[4] - structs  \n"
		"[5] - files    \n"
		"[6] - pointers \n"
		"[7] - dynamic  \n");
	do {
		scanf("%d", &sub);
		if (sub < 0 || sub>7)
			printf("| Such subject does not exist.Try again.\n");
	} while (sub < 0 || sub>7);
	questions = db_get_test(sub);
	for (int i = 0; i < 10; i++)
	{
		printf("%s\n", questions[i].value);
		printf("%s\n", questions[i].ans);
		do {
			printf("| Answer: ");
			scanf("%d", &ans);
			if (ans != questions[i].correct)
				printf("| Wrong answer.Try again.\n");
		} while (ans != questions[i].correct);
	}
}

void Test()
{
	Question * questions;
	int sub, ans, sum = 0, a[10], inc = 0;
	double mark;
	printf("| Choose a subject\n"
		"[0] - loops    \n"
		"[1] - arrays   \n"
		"[2] - strings  \n"
		"[3] - recursion\n"
		"[4] - structs  \n"
		"[5] - files    \n"
		"[6] - pointers \n"
		"[7] - dynamic  \n");
	do {
		scanf("%d", &sub);
		if (sub < 0 || sub>7)
			printf("| Such subject does not exist.Try again.\n");
	} while (sub < 0 || sub>7);
	questions = db_get_test(sub);
	for (int i = 0; i < 10; i++)
	{
		printf("%s\n", questions[i].value);
		printf("%s\n", questions[i].ans);
		printf("| Answer: ");
		scanf("%d", &ans);
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
				printf("%s\n", questions[i].value);
				printf("| Right answer is %d\n", questions[i].correct);
				printf("\n");
			}
		}
	}
	mark = sum * 1.0 / 10;

	if (mark < 0.5)
	{
		db_set_mark(User.id, sub, 2);
		printf("| Your mark is 2\n");
	}
	if (mark < 0.7)
	{
		db_set_mark(User.id, sub, 3);
		printf("| Your mark is 3\n");
	}
	if (mark < 0.9)
	{
		db_set_mark(User.id, sub, 4);
		printf("| Your mark is 4\n");
	}
	else
	{
		db_set_mark(User.id, sub, 5);
		printf("| Your mark is 5\n");
	}

}

void FinalTest()
{
	Question * questions;
	int sub, ans, sum = 0, a[10], inc = 0;
	double mark;

	questions = db_get_final_test();
	for (int i = 0; i < 40; i++)
	{
		printf("%s\n", questions[i].value);
		printf("%s\n", questions[i].ans);
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
		db_set_mark(User.id, 9, 2);
		printf("| Your mark is 2\n");
	}
	if (mark < 0.7)
	{
		db_set_mark(User.id, 9, 3);
		printf("| Your mark is 3\n");
	}
	if (mark < 0.9)
	{
		db_set_mark(User.id, 9, 4);
		printf("| Your mark is 4\n");
	}
	else
	{
		db_set_mark(User.id, 9, 5);
		printf("| Your mark is 5\n");
	}
}
