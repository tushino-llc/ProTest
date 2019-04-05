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
#include "tests_main_header.h"

void input_teacher()
{
	int error, sign;
	char password[20], name[20];
	do {
		error = User db_login_admin(login, password);
		if (error == NULL) { printf("| Error! Account not found. Try again? [1 - yes; 0 - no] \n"); }
		do {
			scanf("%d", &sign);
		} while ((sign > 1) || (sign < 0));
	} while (sign == 1);

	if (error != NULL) { teacher_menu_0(); }
}

void edit_questions_teacher()
{
	int sign;
	do {
			printf(" ––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n"
				"|                                                            |\n"
				"|                      >> ProTest v1.0 <<                    |\n"
				"|                                                            |\n"
				"|  >> Choose action:                                         |\n"
				"|                                                            |\n"
				"|       1) Delete the question                               |\n"
				"|       2) Add a question                                    |\n"
				"|       3) Change the question                               |\n"
				"|                                                            |\n"
				"|       0) Backward                                          |\n");

			do {
			printf("| Answer: ");
			scanf("%d", &sign);
		} while ((sign > 3) || (sign < 0));

		switch (sign)
		{
		case 1: delete_the_question(); break;
		case 2: add_a_question(); break;
		case 3: change_the_question(); break;
		}

	} while (sign != 0);
}
void working_with_the_list_of_students()
{
	int sign;
	do {
		
			printf(" ––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n"
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
				"|       0) Backward                                          |\n");

			do {
			printf("| Answer: ");
			scanf("%d", &sign);
		} while ((sign > 4) || (sign < 0));

		switch (sign)
		{
		case 1: delete_student_account(); break;
		case 2: to_add_a_new_account_for_a_student(); break;	
		case 3: to_see_the_change_of_a_students_progress(); break;
		case 4: view_the_list_of_students_with_grades();  break;
		}

	} while (sign != 0);
}
void view_the_list_of_students_with_grades()
{
	int sign;
	do {

		printf(" ––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n"
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
			"|       0) Backward                                          |\n");

		do {
			printf("| Answer: ");
			scanf("%d", &sign);
		} while ((sign > 4) || (sign < 0));

		switch (sign)
		{
		case 1: view_scores_on_all_topics(); break;
		case 2: view_estimates_on_a_specific_topic(); break;
		case 3: view_scores_for_the_final_test(); break;
		case 4:  view_the_average_score(); break;
		}

	} while (sign != 0);
}
void teacher_menu_0()
{
	int sign;
	do {
		
			printf(" ––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n"
				"|                                                            |\n"
				"|                      >> ProTest v1.0 <<                    |\n"
				"|                                                            |\n"
				"|  >> Choose action:                                         |\n"
				"|                                                            |\n"
				"|       1) Edit questions                                    |\n"
				"|       2) Working with the list of students                 |\n"
				"|                                                            |\n"
				"|       0) Backward                                          |\n");

			do {
			printf("| Answer: ");
			scanf("%d", &sign);
		} while ((sign > 2) || (sign < 0));

		switch (sign)
		{
		case 1: edit_questions_teacher(); break;
		case 2: working_with_the_list_of_students(); break;
		}

	} while (sign != 0);
}
