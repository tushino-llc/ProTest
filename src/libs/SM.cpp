#include "tests_main_header.h"


void student_menu() {

	/* Initializing variables */
	int sign, junk, n;
	signin();
	/* I/O flow */
	while (1) {
		printf(" ––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n"
			"|                                                            |\n"
			"|                      >> ProTest v1.0 <<                    |\n"
			"|                                                            |\n"
			"|  >> Choose action:                                         |\n"
			"|                                                            |\n"
			"|       1) Training on a subject                              |\n"
			"|       2) Testing on a subject                  |\n"
			"|       3) Final test                       |\n"
			"|                                                            |\n"
			"|       >> Type \"back\" to go to the previous menu <<         |\n"
			"|       >> Type \"quit\" to terminate this program <<          |\n"
			"|                                                            |\n");
		printf("| Answer: ");
		sign = getchar();
		prt_ln();
		if (isdigit(sign) && sign >= '1' && sign <= '3') {
			sign -= '0';
			if ((junk = getchar()) != '\n') {
				while ((junk = getchar()) != '\n')
					;
				no_cmd();
				continue;
			}

			switch (sign) {
			case 1:Training();
				break;
			case 2:Test();
				break;
			case 3:FinalTest();
				break;
			default:
				break;
			}

			if (!n) {
				sign = 'b';
			}

		}
		else if (sign == 'q') {
			if (quit_m()) {
				return -1;
			}
			else {
				continue;
			}
		}
		else if (sign == 'b') {
			if (back_m()) {
				return 0;
			}
			else {
				continue;
			}
		}
		else {
			no_cmd();
			while ((junk = getchar()) != '\n')
				;
			continue;
		}
	}
}