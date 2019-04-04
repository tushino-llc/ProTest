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

// Questions
void delete_the_question()
{
	int error, id;	
	printf("| Enter the id of the question you want to delete. \n");
	scanf("%d", &id);
	
	error = int db_delete_question(int id);
	do {
		if (error == -1) { printf("| Error! Unable to delete question. Try again? [1 - yes; 0 - no] \n"); }
		do {
			scanf("%d", &error);
		} while ((error > 1) || (error < 0));
	} while (error == 1);	
}
void add_a_question()
{
	int error;

	do {
		error = int db_add_question(Question question);
		if (error == -1) { printf("| Error! The question could not be added. Try again? [1 - yes; 0 - no] \n"); }
		do {
			scanf("%d", &error);
		} while ((error > 1) || (error < 0));
	} while (error == 1);
}
void change_the_question()
{
	int error, id;

	printf("| Enter the id of the question you want to change. \n");
	scanf("%d", &id);
		
	error = int db_update_question(Question question);
	do {
		if (error == -1) { printf("| Error! Unable to edit question. Try again? [1 - yes; 0 - no] \n"); }
		do {
			scanf("%d", &error);
		} while ((error > 1) || (error < 0));
	} while (error == 1);	
}


// Students
void delete_student_account()
{
	int error, id, size = 0;
	User[] db_get_users(int * size);
	
	printf("| Enter the id of the student you want to delete. \n");
	scanf("%d", &id);
	error = int db_delete_user(int id);
	do {
		if (error == -1) { printf("| Error! Unable to delete student. Try again? [1 - yes; 0 - no] \n"); }
		do {
			scanf("%d", &error);
		} while ((error > 1) || (error < 0));
	} while (error == 1);
}
void to_add_a_new_account_for_a_student()
{
	int error;
	do {
		error = int db_add_user(User user, char * password);
		if (error == -1) { printf("| Error! Failed to add new account. Try again? [1 - yes; 0 - no] \n"); }
		do {
			scanf("%d", &error);
		} while ((error > 1) || (error < 0));
	} while (error == 1);
}
void to_see_the_change_of_a_students_progress()
{
	int error, size = 0;
	User[] db_get_users(int * size);

	printf("| Enter the id of the student whose progress you want to see. \n");
	do{
		error = Marks db_get_user_marks(int user_id);
		if (error == NULL) { printf("| Error! Try again? [1 - yes; 0 - no] \n"); }
		do {
			scanf("%d", &error);
		} while ((error > 1) || (error < 0));
	} while (error == 1);
}

// Results
void view_scores_on_all_topics()
{
	int id;
	for (int i = 0; i < user.id; i++)
	{
		Marks db_get_user_marks(int user_id);
	}
}
void view_estimates_on_a_specific_topic()
{
	int size = 0, desc;
	char by[10];

	printf("| Chosen theme |"
		"| loops      |\n"
		"| arrays     |\n"
		"| strings    |\n"
		"| recursion  |\n"
		"| structs    |\n"
		"| files      |\n"
		"| pointers   |\n"
		"| dynamic    |\n");
	gets(by);
	
	User[] db_get_users_sorted(int * size, char * by, 0);
}
void view_scores_for_the_final_test()
{
	int size = 0, desc;
	char by[] = "final";
	User[] db_get_users_sorted(int * size, char * by, 0);
}
void view_the_average_score()
{
	int size = 0, desc;
	char by[] = "average";
	User[] db_get_users_sorted(int * size, char * by, 0);
}


