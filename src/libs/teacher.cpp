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

//const int Size_St = 100;
//const int Size_Q = 240;

// Questions
void delete_the_question()
{
	int error, id, size, j;
	
	struct Question *question = nullptr;
	struct Question quest = {};
	if ((question = db_get_questions(&size))) {
		for (j = 0; j < size; ++j) {
			std::cout << "id = " << question[j].id << "; Question: " << question[j].value << std::endl;
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
}
void add_a_question()
{
	int error, size;
	struct Question *question = nullptr;
	if ((question = db_get_questions(&size))) {
		do {
			error = db_add_question(question[size]);
			if (error == -1) { printf("| Error! The question could not be added. Try again? [1 - yes; 0 - no] \n"); }
			do {
				scanf("%d", &error);
			} while ((error > 1) || (error < 0));
		} while (error == 1);
	}
}
void change_the_question() {

    /* Initializing variables */
	int id, size, j, sign, by;
	struct Question *question = nullptr;
	struct Question quest = {};

	do {
		printf(" ------------------------------------------------------------\n"
			"|                                                            |\n"
			"|                     >> Teacher's mode <<                   |\n"
			"|                                                            |\n"
			"|  >> Chosen theme:                                          |\n"
			"|                                                            |\n"
			"|       1) Loops                                             |\n"
			"|       2) Arrays                                            |\n"
			"|       3) Strings                                           |\n"
			"|       4) Recursion                                         |\n"
			"|       5) Structs                                           |\n"
			"|       6) Files                                             |\n"
			"|       7) Pointers                                          |\n"
			"|       8) Dynamic                                           |\n"
			"|                                                            |\n");
		printf("| Answer: ");
		scanf("%d", &by);

	} while ((by > 8) || (by < 1));
	by--;
	/* Main part */
	if ((question = db_get_questions(&size))) {
        for (j = 0; j < size; ++j) {
			if (by == question->theme)
			{
				std::cout << "id = " << question[j].id << "; Question: " << question[j].value << std::endl;
			}
        }

        printf("| Type the id of the question you want to change: ");
        do {
            scanf("%d", &id);
        } while (!(quest = db_get_question_by_id(id)).id);
		
        /* Other shit goes here ↓*/
		do {
			do {
				printf(" ------------------------------------------------------------\n"
					"|                                                            |\n"
					"|                     >> Teacher's mode <<                   |\n"
					"|                                                            |\n"
					"|  >> What do you want to change?                            |\n"
					"|                                                            |\n"
					"|       1) Id                                                |\n"
					"|       2) Topic                                             |\n"
					"|       3) Question text                                     |\n"
					"|       4) Answer choice                                     |\n"
					"|       5) Correct answer                                    |\n"
					"|                                                            |\n");
				printf("| Answer: ");
				scanf("%d", &sign);

			} while ((sign > 5) || (sign < 1));

			switch (sign)
			{
			case 1:
			{
				printf("| Enter id: \n");
				scanf("%d", &quest.id);
			}break;
			case 2:
			{
				printf("| Enter topic: \n");
				scanf("%d", &quest.theme);
			} break;
			case 3:
			{
				printf("| Enter question text: \n");
				fgets(quest.value, 256, stdin);
			} break;
			case 4:
			{
				printf("| Enter answer choice:\n");
				printf("| 1) ");
				fgets(quest.ans[0], 256, stdin);
				printf("| 2) ");
				fgets(quest.ans[1], 256, stdin);
				printf("| 3) ");
				fgets(quest.ans[2], 256, stdin);
				printf("| 4) ");
				fgets(quest.ans[3], 256, stdin);
			} break;
			case 5:
			{
				printf("| Enter correct answer:\n");
				scanf("%d", &quest.correct);
			} break;
			}
			do {
				printf("| Continue?\n| 0) No\n| 1) Yes\n");
				scanf("%d", &sign);
			} while ((sign > 1) || (sign < 0));
		} while (sign != 0);
    }
}

// Students
void delete_student_account()
{
	int error, id, size = 0; 
	struct User *user = nullptr;
	struct User us = {};

	/* Main part */
	if ((user = db_get_users(&size))) {

		for (int i = 0; i < size; ++i)
		{
			std::cout << "id = " << user[i].id << "; Student: " << user[i].first_name << user[i].last_name << std::endl;
		}

		printf("| Enter the id of the student you want to delete. \n");
		do {
			scanf("%d", &id);
		} while (!(us = db_get_user(id)).id);
		do {
			error = db_delete_user(id);
			if (error == -1) { printf("| Error! Unable to delete student. Try again? [1 - yes; 0 - no] \n"); }
			do {
				scanf("%d", &error);
			} while ((error > 1) || (error < 0));
		} while (error == 1);
	}
}
void to_add_a_new_account_for_a_student()
{
	int error, size;
	struct User *user = nullptr;
	struct User us = {};
	char password[30];

	/* Main part */
	if ((user = db_get_users(&size))) {

		printf("\n| Enter the password ");
		fgets(password, 30, stdin);
		field_check_teacher(password);
	
		do {
			error = db_add_user(us, password);
			if (error == -1) { printf("| Error! Failed to add new account. Try again? [1 - yes; 0 - no] \n"); }
			do {
				scanf("%d", &error);
			} while ((error > 1) || (error < 0));
		} while (error == 1);
	}
}
void to_see_the_change_of_a_students_progress()
{
	int  size = 0, id;
	struct User *user = nullptr;
	struct User us = {};
	struct Marks mark = {};
	/* Main part */
	if ((user = db_get_users(&size))) {

		for (int i = 0; i < size; ++i)
		{
			std::cout << "id = " << user[i].id << "; Student: " << user[i].first_name << user[i].last_name << std::endl;
		}
		printf("| Enter the id of the student whose progress you want to see. \n");
		do {
			scanf("%d", &id);
		} while (!(us = db_get_user(id)).id);
		std::cout << "id = " << us.id << "; Student: " << us.first_name << us.last_name << std::endl;
		mark = db_get_user_marks(id);
		std::cout << " loops " << mark.values[0] << std::endl;
		std::cout << " arrays " << mark.values[1] << std::endl;
		std::cout << " strings " << mark.values[2] << std::endl;
		std::cout << " recursion " << mark.values[3] << std::endl;
		std::cout << " structs " << mark.values[4] << std::endl;
		std::cout << " files " << mark.values[5] << std::endl;
		std::cout << " pointers " << mark.values[6] << std::endl;
		std::cout << " dynamic " << mark.values[7] << std::endl;
		std::cout << " average " << mark.values[8] << std::endl;
		std::cout << " final " << mark.values[9] << std::endl;
	}
}

// Results
void view_scores_on_all_topics()
{
	int id, size = 0;
	struct User *user = nullptr;
	struct Marks mark = {};
	/* Main part */
	if ((user = db_get_users(&size))) {

		for (int i = 0; i < size; ++i)
		{
			std::cout << "id = " << user[i].id << "; Student: " << user[i].first_name << user[i].last_name << std::endl;
			mark = db_get_user_marks(user[i].id);
			std::cout << " loops " << mark.values[0] << std::endl;
			std::cout << " arrays " << mark.values[1] << std::endl;
			std::cout << " strings " << mark.values[2] << std::endl;
			std::cout << " recursion " << mark.values[3] << std::endl;
			std::cout << " structs " << mark.values[4] << std::endl;
			std::cout << " files " << mark.values[5] << std::endl;
			std::cout << " pointers " << mark.values[6] << std::endl;
			std::cout << " dynamic " << mark.values[7] << std::endl;
			std::cout << " average " << mark.values[8] << std::endl;
			std::cout << " final " << mark.values[9] << std::endl;
			printf("\n");
		}
	}
}
void view_estimates_on_a_specific_topic()
{
	int size = 0, desc, by, sort;
	struct User *user = nullptr;
	struct Marks mark = {};	

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
		"| 6) show students with a score of 2 |\n");
	do {
		scanf("%d", &sort);
	} while ((sort < 1) || (sort > 6));
	
	switch (sort)
	{
	case 1:
	{
		desc = 0;

		if ((user = db_get_users_sorted(&size, by, desc))) {
			for (int i = 0; i < size; i++)
			{
				mark = db_get_user_marks(user[i].id);
				std::cout << " " << user[i].first_name << " " << user[i].last_name << " " << mark.values[by] << std::endl;
			}
		}
	} break;
	case 2:
	{
		desc = 1;
		if ((user = db_get_users_sorted(&size, by, desc))) {
			for (int i = 0; i < size; i++)
			{
				mark = db_get_user_marks(user[i].id);
				std::cout << " " << user[i].first_name << " " << user[i].last_name << " " << mark.values[by] << std::endl;
			}
		}
	} break;
	case 3:
	{
		if ((user = db_get_users(&size))) {
			for (int i = 0; i < size; i++)
			{
				mark = db_get_user_marks(user[i].id);
				if (mark.values[by] == 5)
				{
					std::cout << " " << user[i].first_name << " " << user[i].last_name << " " << mark.values[by] << std::endl;
				}
			}
		
		}
	} break;
	case 4:
	{
		if ((user = db_get_users(&size))) {
			for (int i = 0; i < size; i++)
			{
				mark = db_get_user_marks(user[i].id);
				if (mark.values[by] == 4)
				{
					std::cout << " " << user[i].first_name << " " << user[i].last_name << " " << mark.values[by] << std::endl;
				}
			}

		}
	} break;
	case 5:
	{
		if ((user = db_get_users(&size))) {
			for (int i = 0; i < size; i++)
			{
				mark = db_get_user_marks(user[i].id);
				if (mark.values[by] == 3)
				{
					std::cout << " " << user[i].first_name << " " << user[i].last_name << " " << mark.values[by] << std::endl;
				}
			}

		}
	} break;
	case 6:
	{
		if ((user = db_get_users(&size))) {
			for (int i = 0; i < size; i++)
			{
				mark = db_get_user_marks(user[i].id);
				if (mark.values[by] == 2)
				{
					std::cout << " " << user[i].first_name << " " << user[i].last_name << " " << mark.values[by] << std::endl;
				}
			}

		}
	} break;
	}
}
void view_scores_for_the_final_test()
{
	int size, by = 9, desc = 1;
	struct User *user = nullptr;
	struct Marks mark = {};

	if ((user = db_get_users_sorted(&size, by, desc))) {
		for (int i = 0; i < size; i++)
		{
			mark = db_get_user_marks(user[i].id);
			std::cout << " " << user[i].first_name << " " << user[i].last_name << " " << mark.values[by] << std::endl;
		}
	}
}
void view_the_average_score()
{
	int size = 0, by = 8, desc = 1;
	struct User *user = nullptr;
	struct Marks mark = {};

	if ((user = db_get_users_sorted(&size, by, desc))) {
		for (int i = 0; i < size; i++)
		{
			mark = db_get_user_marks(user[i].id);
			std::cout << " " << user[i].first_name << " " << user[i].last_name << " " << mark.values[by] << std::endl;
		}
	}
}


