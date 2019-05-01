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
int delete_the_question() {

    /* Initializing variables */
	int id, size, j, topic;
	struct Question *question = nullptr;

	/* I/O flow */
    while (1) {
        if ((topic = menu_topic()) == -2) {
            ungetc('\n', stdin);
            return 0;
        } else if (topic == -1) {
            ungetc('\n', stdin);
            return -1;
        }

        if ((question = db_get_questions(&size, topic))) {
            for (j = 0; j < size; ++j) {
                printf("|                                                            |\n");
                printf("|  >> Question [%3d]:                                        |\n", question[j].id);
                printf("|                                                            |\n");
                fflush(stdout);
                print_q_correct(question[j].value);
                printf("\n|                                                            |\n");
                prt_ln();
            }

            delete question;

            do {
                printf("| Type the id of question you want to delete: ");
                scanf("%d", &id);
            } while (id < 0);

            if ((db_delete_question(id)) == -1) {
                printf("| Error! Couldn't delete question! Try again?                |\n");
                if (menu_continue()) {
                    continue;
                } else {
                    break;
                }
            } else {
                break;
            }

        } else {
            printf("Error! Couldn't get questions!\n");
            return 0;
        }
    }

    /* Returning value */
    return 1;
}
int add_a_question() {

    /* Initializing variables */
	int error, size;
	struct Question quest = {};

    /* I/O flow */
    while (1) {
        quest.theme = menu_topic();
        ungetc('\n', stdin);
        if (quest.theme == -2) {
            return 0;
        } else if (quest.theme == -1) {
            return -1;
        }

        printf("| Type question text:                                        |\n");
        fgets(quest.value, MAX_LEN, stdin);
        *(quest.value + strlen(quest.value) - 1) = '\0';
        prt_ln();
        printf("| Type answers:                                              |\n");
        prt_ln();
        printf("| 1) ");
        fgets(quest.ans[0], MAX_LEN, stdin);
        *(quest.ans[0] + strlen(quest.ans[0]) - 1) = '\0';
        printf("| 2) ");
        fgets(quest.ans[1], MAX_LEN, stdin);
        *(quest.ans[1] + strlen(quest.ans[2]) - 1) = '\0';
        printf("| 3) ");
        fgets(quest.ans[2], MAX_LEN, stdin);
        *(quest.ans[2] + strlen(quest.ans[2]) - 1) = '\0';
        printf("| 4) ");
        fgets(quest.ans[3], MAX_LEN, stdin);
        *(quest.ans[3] + strlen(quest.ans[3]) - 1) = '\0';
        prt_ln();

        printf("| Type the number of the correct answer: ");
        scanf("%d", &quest.correct);
        --quest.correct;

        if ((db_add_question(quest)) == -1) {
            printf("| Error! Couldn't add question! Try again?                   |\n");
            error = menu_continue();
            if (error) {
                continue;
            }
            break;
        } else {
            break;
        }
    }

	/* Returning value */
	return 1;
}

int menu_change() {

    /* Initializing variables */
    int func, junk, n = 0;

    /* I/O flow */
    while (1) {
        printf(" ------------------------------------------------------------\n"
"|                                                            |\n"
"|                    >> Teacher's mode <<                    |\n"
"|                                                            |\n"
"|  >> What do you want to change?                            |\n"
"|                                                            |\n"
"|       1) Topic                                             |\n"
"|       2) Question text                                     |\n"
"|       3) Answers                                           |\n"
"|       4) Correct answer                                    |\n"
"|                                                            |\n"
"|       >> Type \"back\" to go to the previous menu <<         |\n"
"|       >> Type \"quit\" to terminate this program <<          |\n"
"|                                                            |\n");
        printf("| Answer: ");
        func = getchar();
        prt_ln();
        if (isdigit(func) && func >= '1' && func <= '4') {
            func -= '0';
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
                return -2;
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

int change_the_question() {

    /* Initializing variables */
    int id, size, j, sign, topic, error;
    struct Question *question = nullptr;
    struct Question quest = {};

    /* I/O flow */

    while (1) {
        if ((topic = menu_topic()) == -2) {
            ungetc('\n', stdin);
            return 0;
        } else if (topic == -1) {
            ungetc('\n', stdin);
            return -1;
        }

        if ((question = db_get_questions(&size, topic))) {
            for (j = 0; j < size; ++j) {
                printf("|                                                            |\n");
                printf("|  >> Question [%3d]:                                        |\n", question[j].id);
                printf("|                                                            |\n");
                fflush(stdout);
                print_q_correct(question[j].value);
                printf("\n|                                                            |\n");
                prt_ln();
            }

            delete question;

            printf("| Type the id of the question you want to change: ");
            do {
                scanf("%d", &id);
            } while (!(quest = db_get_question_by_id(id)).id);

            prt_ln();

            while (getchar() != '\n')
                ;

            if ((sign = menu_change()) == -2) {
                continue;
            } else if (sign == -1) {
                ungetc('\n', stdin);
                return -1;
            }

            switch (sign) {
                case 1:
                    printf("| Type topic: ");
                    scanf("%d", &quest.theme);
                    break;
                case 2:
                    printf("| Type question text: ");
                    fgets(quest.value, MAX_LEN, stdin);
                    *(quest.value + strlen(quest.value) - 1) = '\0';
                    break;
                case 3:
                    printf("| Type answers:                                              |\n");
                    prt_ln();
                    printf("| 1) ");
                    fgets(quest.ans[0], MAX_LEN, stdin);
                    *(quest.ans[0] + strlen(quest.ans[0]) - 1) = '\0';
                    printf("| 2) ");
                    fgets(quest.ans[1], MAX_LEN, stdin);
                    *(quest.ans[1] + strlen(quest.ans[1]) - 1) = '\0';
                    printf("| 3) ");
                    fgets(quest.ans[2], MAX_LEN, stdin);
                    *(quest.ans[2] + strlen(quest.ans[2]) - 1) = '\0';
                    printf("| 4) ");
                    fgets(quest.ans[3], MAX_LEN, stdin);
                    *(quest.ans[3] + strlen(quest.ans[3]) - 1) = '\0';
                    break;
                case 4:
                    do {
                        printf("| Type the number of the correct answer: ");
                        scanf("%d", &quest.correct);
                        --quest.correct;
                    } while (quest.correct < 0 || quest.correct > 3);
                    break;
                default:
                    break;
            }

            if (db_update_question(quest) == -1) {
                printf("| Error! Couldn't update question! Try again?                |\n");
                error = menu_continue();
                if (error) {
                    continue;
                }
                break;
            } else {
                break;
            }
        } else {
            printf("| Error! Couldn't get questions!                             |\n");
            return 1;
        }
    }

    if (sign != 4) {
        ungetc('\n', stdin);
    }

    /* Final output */
    prt_ln();

    /* Returning value */
    return 0;
}

// Students
void delete_student_account() {
	int error, id, size = 0; 
	struct User *user = nullptr;

	/* Main part */
	if ((user = db_get_users(&size))) {

		for (int i = 0; i < size; ++i)
		{
			std::cout << "id = " << user[i].id << "; Student: " << user[i].first_name << user[i].last_name << std::endl;
		}

		printf("| Enter the id of the student you want to delete. \n");
		do {
			scanf("%d", &id);
		} while (!(id = (db_get_user(id)).id));
		do {
			error = db_delete_user(id);
			if (error == -1) { printf("| Error! Unable to delete student. Try again? [1 - yes; 0 - no] \n"); }
			do {
				scanf("%d", &error);
			} while ((error > 1) || (error < 0));
		} while (error == 1);
	}
}

void to_add_a_new_account_for_a_student() {
	int error, size;
	struct User *user = nullptr;
	struct User us = {};
	char password[30];

	/* Main part */
	if ((user = db_get_users(&size))) {

		printf("| Enter id: ");
		scanf("%d", &us.id);
		printf("| Enter first name: ");
		fgets(us.first_name, MAX_LEN, stdin);
		printf("| Enter last name: ");
		fgets(us.last_name, MAX_LEN, stdin);
		printf("| Enter login: ");
		fgets(us.login, MAX_LEN, stdin);
		printf("| Enter the password ");
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

void to_see_the_change_of_a_students_progress() {
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