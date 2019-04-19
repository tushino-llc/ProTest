﻿/*
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


int edit_questions_teacher()
{
	/* Initializing variables */
	int func, junk, n = 0;

	/* I/O flow */
	while (1) {
		  printf(" ------------------------------------------------------------\n"
			"|                                                            |\n"
			"|                      >> ProTest v1.0 <<                    |\n"
			"|                                                            |\n"
			"|  >> Choose action:                                         |\n"
			"|                                                            |\n"
			"|       1) Delete the question                               |\n"
			"|       2) Add a question                                    |\n"
			"|       3) Change the question                               |\n"
			"|                                                            |\n"			
			"|       >> Type \"back\" to go to the previous menu <<         |\n"
			"|       >> Type \"quit\" to terminate this program <<          |\n"
			"|                                                            |\n");
				printf("| Answer: ");
				func = getchar();
				prt_ln();
				if (isdigit(func) && func >= '1' && func <= '3') {
					func -= '0';
					if ((junk = getchar()) != '\n') {
						while ((junk = getchar()) != '\n');
						no_cmd();
						continue;
					}

					switch (func) {
					case 1:
						delete_the_question();
						break;
					case 2:
						add_a_question();
						break;
					case 3:
						change_the_question();
						break;
					default:
						break;
					}

					if (!n) {
						continue;
					}
					else if (n == -1) {
						return -1;
					}
					else {
						return 1;
					}

				}
				else if (func == 'q') {
					if (quit_m()) {
						return -1;
					}
					else {
						continue;
					}
				}
				else if (func == 'b') {
					if (back_m()) {
						return 0;
					}
					else {
						continue;
					}
				}
				else {
					no_cmd();
					if (func != '\n') {
						while ((junk = getchar()) != '\n')
							;
					}
					continue;
				}
		}
	}

int working_with_the_list_of_students()
{
	/* Initializing variables */
	int func, junk, n = 0;

	/* I/O flow */
	while (1) {
			  printf(" ------------------------------------------------------------\n"
				"|                                                            |\n"
				"|                      >> ProTest v1.0 <<                    |\n"
				"|                                                            |\n"
				"|  >> Choose action:                                         |\n"
				"|                                                            |\n"
				"|       1) Delete student account                            |\n"
				"|       2) To add a new account for a student                |\n"
				"|       3) To see the change of a student's progress         |\n"
				"|       4) View the list of students with grades             |\n"
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
					while ((junk = getchar()) != '\n');
					no_cmd();
					continue;
				}

				switch (func) {
				case 1: 
					delete_student_account(); 
					break;
				case 2: 
					to_add_a_new_account_for_a_student(); 
					break;
				case 3: 
					to_see_the_change_of_a_students_progress(); 
					break;
				case 4: 
					view_the_list_of_students_with_grades();  
					break;
							
				default:
					break;
				}

				if (!n) {
					continue;
				}
				else if (n == -1) {
					return -1;
				}
				else {
					return 1;
				}

			}
			else if (func == 'q') {
				if (quit_m()) {
					return -1;
				}
				else {
					continue;
				}
			}
			else if (func == 'b') {
				if (back_m()) {
					return 0;
				}
				else {
					continue;
				}
			}
			else {
				no_cmd();
				if (func != '\n') {
					while ((junk = getchar()) != '\n')
						;
				}
				continue;
			}
	}
}


int view_the_list_of_students_with_grades()
{
	/* Initializing variables */
	int func, junk, n = 0;

	/* I/O flow */
	while (1) {
		  printf(" ------------------------------------------------------------\n"
			"|                                                            |\n"
			"|                      >> ProTest v1.0 <<                    |\n"
			"|                                                            |\n"
			"|  >> Choose action:                                         |\n"
			"|                                                            |\n"
			"|       1) View scores on all topics                         |\n"
			"|       2) View estimates on a specific topic                |\n"
			"|       3) View scores for the final test                    |\n"
			"|       4) View the average score                            |\n"
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
				while ((junk = getchar()) != '\n');
				no_cmd();
				continue;
			}
			switch (func) {
			case 1: 
				view_scores_on_all_topics(); 
				break;
			case 2: 
				view_estimates_on_a_specific_topic(); 
				break;
			case 3: 
				view_scores_for_the_final_test(); 
				break;
			case 4:  
				view_the_average_score(); 
				break;
			default:
				break;
			}

			if (!n) {
				continue;
			}
			else if (n == -1) {
				return -1;
			}
			else {
				return 1;
			}

			}
			else if (func == 'q') {
				if (quit_m()) {
					return -1;
				}
				else {
					continue;
				}
			}
			else if (func == 'b') {
				if (back_m()) {
					return 0;
				}
				else {
					continue;
				}
			}
			else {
				no_cmd();
				if (func != '\n') {
					while ((junk = getchar()) != '\n')
						;
				}
				continue;
			}
	}
}

int teacher_menu_0()
{
	/* Initializing variables */
	int func, junk, n = 0;

	/* I/O flow */
	while (1) {
			  printf(" ------------------------------------------------------------\n"
				"|                                                            |\n"
				"|                      >> ProTest v1.0 <<                    |\n"
				"|                                                            |\n"
				"|  >> Choose action:                                         |\n"
				"|                                                            |\n"
				"|       1) Edit questions                                    |\n"
				"|       2) Working with the list of students                 |\n"
				"|                                                            |\n"
				"|       >> Type \"back\" to go to the previous menu <<         |\n"
				"|       >> Type \"quit\" to terminate this program <<          |\n"
				"|                                                            |\n");
			printf("| Answer: ");
			func = getchar();
			prt_ln();
			if (isdigit(func) && func >= '1' && func <= '2') {
				func -= '0';
				if ((junk = getchar()) != '\n') {
					while ((junk = getchar()) != '\n');
					no_cmd();
					continue;
				}
			switch (func) {
				case 1: 
					edit_questions_teacher(); 
					break;
				case 2: 
					working_with_the_list_of_students(); 
					break;
							
				default:
					break;
				}

				if (!n) {
					continue;
				}
				else if (n == -1) {
					return -1;
				}
				else {
					return 1;
				}

			}
			else if (func == 'q') {
				if (quit_m()) {
					return -1;
				}
				else {
					continue;
				}
			}
			else if (func == 'b') {
				if (back_m()) {
					return 0;
				}
				else {
					continue;
				}
			}
			else {
				no_cmd();
				if (func != '\n') {
					while ((junk = getchar()) != '\n')
						;
				}
				continue;
			}
	}
}


int field_check_teacher(char *text) 
{
	/* Initializing variables */
	int i;
	char ch;
	/* Main part */
	for (i = 0; i < static_cast<int>(strlen(text)); ++i) {
		ch = *(text + i);
		if (ch == ' ' || ch == '\n' || ch == ' ') {
			return 0;
		}
	}
	/* Returning value */
	return 1;
}
void input_teacher()
{
	User user;
	char password[30], login[256];
	
	printf("| Enter the username ");
	fgets(login, 256, stdin);
	field_check_teacher(login);
	printf("\n| Enter the password ");
	fgets(password, 30, stdin);
	field_check_teacher(password);
	user = db_login(login, password);
	if (user.admin != false) { teacher_menu_0(); }
}
