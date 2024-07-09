#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <sql.h>
#include <sqlext.h>
#include "login.h"
#include "pageDesign.h"
#include "menu.h"

using namespace std;

int main()
{
menu1:
	int choice, c1, c2, c3;
	clrscr();
	setColor(15, 2);
	printCentered("                                              ", 1);
	printCentered("             WELCOME TO PLAN.net!             ", 2);
	printCentered("                                              ", 3);
	setColor(0, 7);
	printCentered("                                              ", 4);
	printCentered("                  LOGIN - 1                   ", 5);
	printCentered("               REGISTER - 2                   ", 6);
	printCentered("                   EXIT - 3                   ", 7);
	printCentered("                                              ", 8);
	setColor(15, 2);
	printCentered("                                              ", 9);
	printCentered("    ENTER YOUR CHOICE:                        ", 10);
	printCentered("                                              ", 11);
	gotoxy(60, 10);
	cin >> choice;
	setColor(7, 0);

	switch (choice) {
	case 1:
		clrscr();
		if (login() == true) {
		menu2:
			clrscr();
			setColor(15, 2);
			printCentered("                                              ", 1);
			printCentered("                  MAIN MENU                   ", 2);
			printCentered("                                              ", 3);
			setColor(0, 7);
			printCentered("                                              ", 4);
			printCentered("                   HOME - 1                   ", 5);
			printCentered("                 EVENTS - 2                   ", 6);
			printCentered("               ABOUT US - 3                   ", 7);
			printCentered("                GO BACK - 4                   ", 8);
			printCentered("                                              ", 9);
			setColor(15, 2);
			printCentered("                                              ", 10);
			printCentered("    ENTER YOUR CHOICE:                        ", 11);
			printCentered("                                              ", 12);
			gotoxy(60, 11);
			cin >> c1;
			setColor(7, 0);
			switch (c1) {
			case 1:
				clrscr();

				home();

				(void)_getch();
				goto menu2;

			case 2:
				events:
				clrscr();
				setColor(15, 2);
				printCentered("                                              ", 1);
				printCentered("                    EVENTS                    ", 2);
				printCentered("                                              ", 3);
				setColor(0, 7);
				printCentered("                                              ", 4);
				printCentered("        Environmental Awareness Week - 1      ", 5);
				printCentered("          Green Innovation Challenge - 2      ", 6);
				printCentered("                                     - 3      ", 7);
				printCentered("                             GO BACK - 4      ", 8);
				printCentered("                                              ", 9);
				setColor(15, 2);
				printCentered("                                              ", 10);
				printCentered("    ENTER YOUR CHOICE:                        ", 11);
				printCentered("                                              ", 12);
				gotoxy(60, 11);
				cin >> c2;
				setColor(7, 0);

				switch (c2) {
				case 1:
					clrscr();

					event1();

					(void)_getch();
					goto events;
					break;

				case 2:
					clrscr();

					event2();

					(void)_getch();
					goto events;
					break;

				case 4:
					goto menu2;
					break;

				default:
					clrscr();
					setColor(0, 4);
					printCentered("INVALID CHOICE, PLEASE TRY AGAIN!", 5);
					setColor(7, 0);
					(void)_getch();
					goto events;
					break;
				}
				(void)_getch();
				goto menu2;
				break;

			case 3:
				aboutus:
				clrscr();
				setColor(15, 2);
				printCentered("                                              ", 1);
				printCentered("                   ABOUT US                   ", 2);
				printCentered("                                              ", 3);
				setColor(0, 7);
				printCentered("                                              ", 4);
				printCentered("          Christian R. Bataller  - 1          ", 5);
				printCentered("            Jedi Duncan S. Gonot - 2          ", 6);
				printCentered("         Paul Benidict L. Reduta - 3          ", 7);
				printCentered("                 Gerald B. Sario - 4          ", 8);
				printCentered("                         Go Back - 5          ", 9);
				printCentered("                                              ", 10);
				setColor(15, 2);
				printCentered("                                              ", 11);
				printCentered("    ENTER YOUR CHOICE:                        ", 12);
				printCentered("                                              ", 13);
				gotoxy(60, 12);
				cin >> c3;
				setColor(7, 0);

				switch (c3) {
				case 1:
					clrscr();

					bataller();

					(void)_getch();
					goto aboutus;
					break;

				case 2:
					clrscr();

					gonot();

					(void)_getch();
					goto aboutus;
					break;

				case 3:
					clrscr();

					reduta();

					(void)_getch();
					goto aboutus;
					break;

				case 4:
					clrscr();

					sario();

					(void)_getch();
					goto aboutus;
					break;

				default:
					clrscr();
					setColor(0, 4);
					printCentered("INVALID CHOICE, PLEASE TRY AGAIN!", 5);
					setColor(7, 0);
					(void)_getch();
					goto aboutus;
					break;
				}

			case 4:
				goto menu1;
				break;

			default:
				clrscr();
				setColor(0, 4);
				printCentered("INVALID CHOICE, PLEASE TRY AGAIN!", 5);
				setColor(7, 0);
				(void)_getch();
				goto menu2;
				break;
			}

			(void)_getch();
		}
		else {
			printCentered("Please Try Again ", 11);
			(void)_getch();
			goto menu1;
		}
		

		printCentered("ENTER TO CONTINUE ", 12);
		(void)_getch;
		clrscr();
		goto menu1;
		break;

	case 2:
		clrscr();

		registerUser();

		printCentered("ENTER TO CONTINUE ", 12);
		(void)_getch;
		clrscr();
		goto menu1;
		break;

	case 3:
		return 0;

	default:
		clrscr();
		setColor(0, 4);
		printCentered("INVALID CHOICE, PLEASE TRY AGAIN!", 5);
		setColor(7, 0);
		(void)_getch();
		goto menu1;
		break;

	}

	(void)_getch();
	return 0;
}

