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

#ifndef TEACHER_MENU_H
#define TEACHER_MENU_H

#include "../headers/tests_main_header.h"

int teacher_menu_0();
int input_teacher();

// Questions
int delete_the_question();
int add_a_question();
int menu_change();
int change_the_question();

// Students
void delete_student_account();
void to_add_a_new_account_for_a_student();
void to_see_the_change_of_a_students_progress();
int view_the_list_of_students_with_grades();

// Results
void view_scores_on_all_topics();  
void view_estimates_on_a_specific_topic(); 
void view_scores_for_the_final_test(); 
void view_the_average_score();
int field_check_teacher(char *text);
#endif

