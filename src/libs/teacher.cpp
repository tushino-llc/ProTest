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

struct User {
	int id;
	bool admin;
	char * login;
	char * first_name;
	char * last_name;
};

// Questions
void delete_the_question()
{
	int error, id;	
	for (int j = 0; j < question.id; j++)
	{
		std::cout <<"id = "<< id << " Question: "<< question.value << std::endl;
	}

	printf("| Enter the id of the question you want to delete. \n");
	do {
		scanf("%d", &id);
	} while (id < 0);
	
	do {
		error = db_delete_question(id);
	
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
		error = db_add_question(question);
		if (error == -1) { printf("| Error! The question could not be added. Try again? [1 - yes; 0 - no] \n"); }
		do {
			scanf("%d", &error);
		} while ((error > 1) || (error < 0));
	} while (error == 1);
}
void change_the_question()
{
	int error, id;
	for (int j = 0; j < question.id; j++)
	{
		std::cout << "id = " << id << " Question: " << question.value << std::endl;
	}

	printf("| Enter the id of the question you want to change. \n");
	do {
		scanf("%d", &id);
	} while (id < 0);
	do {	
		error = db_update_question(question);
	
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
	
	User * db_get_users(&size);
	
	for (int i = 0; i < size; i++)
	{
		std::cout << "id = " << user.id << " Student: " << user.first_name << user.last_name << std::endl;
	}

	printf("| Enter the id of the student you want to delete. \n");
	do {
		scanf("%d", &id);
	} while (id < 0);
	do {
		error = db_delete_user(id);
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
		error = db_add_user(user, &password);
		if (error == -1) { printf("| Error! Failed to add new account. Try again? [1 - yes; 0 - no] \n"); }
		do {
			scanf("%d", &error);
		} while ((error > 1) || (error < 0));
	} while (error == 1);
}
void to_see_the_change_of_a_students_progress()
{
	int error, size = 0, id;
	User * db_get_users(&size);

	for (int i = 0; i < size; i++)
	{
		std::cout << "id = " << user.id << " Student: " << user.first_name << user.last_name << std::endl;
	}
	printf("| Enter the id of the student whose progress you want to see. \n");
	do {
		scanf("%d", &id);
	} while (id < 0);
	do{
		error = Marks db_get_user_marks(id);
		if (error == NULL) { printf("| Error! Try again? [1 - yes; 0 - no] \n"); }
		do {
			scanf("%d", &error);
		} while ((error > 1) || (error < 0));
	} while (error == 1);
}

// Results
void view_scores_on_all_topics()
{
	int id, size = 0;
	User * db_get_users(&size);

	for (int i = 0; i < size; i++)
	{
		Marks db_get_user_marks(i);
		std::cout << " " << user.first_name << " " << user.last_name;
		for (int j = 0; j < 10; j++)
		{
			std::cout << " " << marks.values[j] << " ";
		}
		printf("\n");
	}
}
void view_estimates_on_a_specific_topic()
{
	int size = 0, desc, by, sort;

	printf("| Chosen theme |"
		"| 1) loops      |\n"
		"| 2) arrays     |\n"
		"| 3) strings    |\n"
		"| 4) recursion  |\n"
		"| 5) structs    |\n"
		"| 6) files      |\n"
		"| 7) pointers   |\n"
		"| 8) dynamic    |\n");
	do {
		scanf("%d", &by);
	} while ((by < 1) || (by > 8));
	by--;

	printf("| How to sort?                        |"
		"| 1) in ascending order              |\n"
		"| 2) in descending order             |\n"
		"| 3) show students with a score of 5 |\n"
		"| 4) show students with a score of 4 |\n"
		"| 5) show students with a score of 3 |\n"
		"| 6) show students with a score of 2 |\n"
		"| 7) show students with a score of 1 |\n");
	do {
		scanf("%d", &sort);
	} while ((sort < 1) || (sort > 7));

	switch (sort)
	{
	case 1: 
	{
		desc = 0; 
		User * db_get_users_sorted(&size, by, desc);
		for (int i = 0; i < size; i++)
		{
			Marks db_get_user_marks(i);
			std::cout << " " << user.first_name << " " << user.last_name << " " << marks.values[by]<< " ";
			printf("\n");
		}
	} break;
	case 2: 
	{
		desc = 1;
		User * db_get_users_sorted(&size, by, desc);
		for (int i = 0; i < size; i++)
		{
			Marks db_get_user_marks(i);
			std::cout << " " << user.first_name << " " << user.last_name << " " << marks.values[by] << " ";
			printf("\n");
		}
	} break;
	case 3: 
	{
		User * db_get_users(&size);
		for (int i = 0; i < size; i++)
		{
			if (marks.values[by] == 5)
			{
				Marks db_get_user_marks(i);
				std::cout << " " << user.first_name << " " << user.last_name << " " << marks.values[by] << " ";
				printf("\n");
			}
		}
	} break;
	case 4: 
	{
		User * db_get_users(&size);
		for (int i = 0; i < size; i++)
		{
			if (marks.values[by] == 4)
			{
				Marks db_get_user_marks(i);
				std::cout << " " << user.first_name << " " << user.last_name << " " << marks.values[by] << " ";
				printf("\n");
			}
		}
	} break;
	case 5:
	{
		User * db_get_users(&size);
		for (int i = 0; i < size; i++)
		{
			if (marks.values[by] == 3)
			{
				Marks db_get_user_marks(i);
				std::cout << " " << user.first_name << " " << user.last_name << " " << marks.values[by] << " ";
				printf("\n");
			}
		}
	} break;
	case 6:
	{
		User * db_get_users(&size);
		for (int i = 0; i < size; i++)
		{
			if (marks.values[by] == 2)
			{
				Marks db_get_user_marks(i);
				std::cout << " " << user.first_name << " " << user.last_name << " " << marks.values[by] << " ";
				printf("\n");
			}
		}
	} break;
	case 7:
	{
		User * db_get_users(&size);
		for (int i = 0; i < size; i++)
		{
			if (marks.values[by] == 1)
			{
				Marks db_get_user_marks(i);
				std::cout << " " << user.first_name << " " << user.last_name << " " << marks.values[by] << " ";
				printf("\n");
			}
		}
	} break;
	}
}
void view_scores_for_the_final_test()
{
	int size = 0, by = 9, desc = 0;
	User * db_get_users_sorted(&size, by, desc);

	for (int i = 0; i < size; i++)
	{
		Marks db_get_user_marks(i);
		std::cout << " " << user.first_name << " " << user.last_name << " " << marks.values[by] << " ";
		printf("\n");
	}
}
void view_the_average_score()
{
	int size = 0, by = 8, desc = 0;
	User * db_get_users_sorted(&size, by, desc);

	for (int i = 0; i < size; i++)
	{
		Marks db_get_user_marks(i);
		std::cout << " " << user.first_name << " " << user.last_name << " " << marks.values[by] << " ";
		printf("\n");
	}
}


