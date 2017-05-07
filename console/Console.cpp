#include "Console.h"
#include <cstdlib>

#define CLEAR system("cls");
#define GETINPUT do { \
					cout << "Choose your choice: "; \
					cin >> choice; \
					if ((!cin) || ((int)choice != choice)) \
						cout << "Invalid choice" << endl; \
				 } while (!checkValidChoice(choice)); 

using namespace std;

bool checkValidChoice(const double &choice) {
	// if the choice is a character or a string
	if (!cin) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return 0;
	}
	// if the choice is a real number
	if ((int)choice != choice)
		return 0;
	return 1;
}

void printMenu() {
	cout << "Menu:" << endl;
	cout << "1. Login" << endl;
	cout << "2. Register" << endl;
	cout << "4. Exit" << endl;
}

void Menu() {
	double choice = 0;
	do {
		// print the menu
		printMenu();
		// get valid choice
		GETINPUT
		// switch case
		int sol = (int)choice;
		switch (sol)
		{
		case 1:
			CLEAR
			Login();
			break;
		case 2:
			break;
		default:
			cerr << "Option not available!" << endl;
			break;
		}
	} while (choice != 4);
}

void printLogin() {
	cout << "1. Account" << endl;
	cout << "2. User" << endl;
	cout << "3. Back" << endl;
}

void Login() {
	double choice = 0;
	do {
		// print the menu
		printLogin();
		// get valid choice
		GETINPUT
		// switch case
		int sol = (int)choice;
		switch (sol)
		{
		case 1:
			break;

		case 2:
			break;

		case 3:
			CLEAR
			Menu();
			break;

		default:
			cerr << "Option not available" << endl;
			break;
		}
	} while (choice != 3);
}

