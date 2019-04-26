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

const int Size_St = 100;
const int Size_Q = 240;

// Questions
void delete_the_question()
{
	int error, id, size, i;
	db_get_questions(&size);
	Question question[Size_Q];
	for (int j = 0; j < size; ++j)
	{
		std::cout <<"id = "<< question[j].id << " Question: "<< question[j].value << std::endl;
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
	int error, size;
	db_get_questions(&size);
	Question question[Size_Q];
	do {
		error = db_add_question(question[size]);
		if (error == -1) { printf("| Error! The question could not be added. Try again? [1 - yes; 0 - no] \n"); }
		do {
			scanf("%d", &error);
		} while ((error > 1) || (error < 0));
	} while (error == 1);
}

void change_the_question() {

    /* Initializing variables */
	int error, id, size, j;
	struct Question *question = nullptr;
	struct Question quest = {};

	/* Main part */
	if ((question = db_get_questions(&size))) {
        for (j = 0; j < size; ++j) {
            std::cout << "id = " << question[j].id << "; Question: " << question[j].value << std::endl;
        }

        printf("| Type the id of the question you want to change: ");
        do {
            scanf("%d", &id);
        } while (!(quest = db_get_question_by_id(id)).id);

        /* Other shit goes here ↓*/
        

    }
}

// Students
void delete_student_account()
{
	int error, id, size = 0;
	User user[Size_St];
	db_get_users(&size);

	for (int i = 0; i < size; ++i)
	{
		std::cout << "id = " << user[i].id << " Student: " << user[i].first_name << user[i].last_name << std::endl;
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
	int error, size;
	User user[Size_St];
	db_get_users(&size);
	char password[30];

	printf("\n| Enter the password ");
	fgets(password, 30, stdin);
	field_check_teacher(password);

	if (size < Size_St)
	{
		do {
			error = db_add_user(user[size], password);
			if (error == -1) { printf("| Error! Failed to add new account. Try again? [1 - yes; 0 - no] \n"); }
			do {
				scanf("%d", &error);
			} while ((error > 1) || (error < 0));
		} while (error == 1);
	}
	else printf("| Error! Failed to add new account.\n");
}
void to_see_the_change_of_a_students_progress()
{
	int  size = 0, id;
	User user[Size_St];
	db_get_users(&size);

	for (int i = 0; i < size; ++i)
	{
		std::cout << "id = " << user[i].id << " Student: " << user[i].first_name << user[i].last_name << std::endl;
	}
	printf("| Enter the id of the student whose progress you want to see. \n");
	do {
		scanf("%d", &id);
	} while (id < 0);
	db_get_user_marks(id);
}

// Results
void view_scores_on_all_topics()
{
	User user[Size_St];
	Marks marks[Size_St];
	int id, size = 0;
	db_get_users(&size);

	for (int i = 0; i < size; ++i)
	{
		db_get_user_marks(i);
		std::cout << " " << user[i].first_name << " " << user[i].last_name;
		for (int j = 0; j < 10; j++)
		{
			std::cout << " " << marks[j].values[j] << " ";
		}
		printf("\n");
	}
}
void view_estimates_on_a_specific_topic()
{
	User user[Size_St];
	Marks marks[Size_St];
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
		
		db_get_users_sorted(&size, by, desc);
		for (int i = 0; i < size; ++i)
		{
			db_get_user_marks(i);
			std::cout << " " << user[i].first_name << " " << user[i].last_name << " " << marks[i].values[by]<< " " << std::endl;
		}
	} break;
	case 2: 
	{
		desc = 1;
		db_get_users_sorted(&size, by, desc);
		for (int i = 0; i < size; ++i)
		{
			db_get_user_marks(i);
			std::cout << " " << user[i].first_name << " " << user[i].last_name << " " << marks[i].values[by] << " " << std::endl;
		}
	} break;
	case 3: 
	{
		db_get_users(&size);
		for (int i = 0; i < size; ++i)
		{
			if (marks[i].values[by] == 5)
			{
				db_get_user_marks(i);
				std::cout << " " << user[i].first_name << " " << user[i].last_name << " " << marks[i].values[by] << " " << std::endl;
			}
		}
	} break;
	case 4: 
	{
		db_get_users(&size);
		for (int i = 0; i < size; ++i)
		{
			if (marks[i].values[by] == 4)
			{
				db_get_user_marks(i);
				std::cout << " " << user[i].first_name << " " << user[i].last_name << " " << marks[i].values[by] << " " << std::endl;
			}
		}
	} break;
	case 5:
	{
		db_get_users(&size);
		for (int i = 0; i < size; ++i)
		{
			if (marks[i].values[by] == 3)
			{
				db_get_user_marks(i);
				std::cout << " " << user[i].first_name << " " << user[i].last_name << " " << marks[i].values[by] << " " << std::endl;
			}
		}
	} break;
	case 6:
	{
		db_get_users(&size);
		for (int i = 0; i < size; ++i)
		{
			if (marks[i].values[by] == 2)
			{
				db_get_user_marks(i);
				std::cout << " " << user[i].first_name << " " << user[i].last_name << " " << marks[i].values[by] << " " << std::endl;
			}
		}
	} break;
	case 7:
	{
		db_get_users(&size);
		for (int i = 0; i < size; ++i)
		{
			if (marks[i].values[by] == 1)
			{
				db_get_user_marks(i);
				std::cout << " " << user[i].first_name << " " << user[i].last_name << " " << marks[i].values[by] << " " << std::endl;
			}
		}
	} break;
	}
}
void view_scores_for_the_final_test()
{
	User user[Size_St];
	Marks marks[Size_St];
	int size = 0, by = 9, desc = 1;
	db_get_users_sorted(&size, by, desc);

	for (int i = 0; i < size; ++i)
	{
		db_get_user_marks(i);
		std::cout << " " << user[i].first_name << " " << user[i].last_name << " " << marks[i].values[by] << " " << std::endl;
	}
}
void view_the_average_score()
{
	User user[Size_St];
	Marks marks[Size_St];
	int size = 0, by = 8, desc = 1;
	db_get_users_sorted(&size, by, desc);

	for (int i = 0; i < size; ++i)
	{
		db_get_user_marks(i);
		std::cout << " " << user[i].first_name << " " << user[i].last_name << " " << marks[i].values[by] << " " << std::endl;
	}
}


