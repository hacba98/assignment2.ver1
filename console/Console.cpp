#include<math.h>
#include<limits>
#include <cstdlib>
#include "Console.h"
#include "Features.h"

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

void printHomepage() {
	cout << "----------HOMEPAGE----------" << endl;
	cout << "1. Login" << endl;
	cout << "2. Register" << endl;
	cout << "3. Search for books" << endl;
	cout << "4. Exit" << endl;
}

void Homepage(Account& acc) {
	double choice = 0;
	do {
		// print the menu
		printHomepage();
		// get valid choice
		GETINPUT
		// switch case
		int sol = (int)choice;
		switch (sol)
		{
		case 1: // go to login screen
			CLEAR
			Login(acc);
			break;
		case 2: // go to register screen
		    CLEAR;
		    Register(acc);
			break;
        case 3:
            CLEAR;
            Search(acc);
            break;
        case 4:
			break;

		default:
			cerr << "Option not available!" << endl;
			break;
		}
	} while (!(1 <= choice) && (choice <= 4));
}

void printLogin(Account& acc) {
	CLEAR;
	string username = acc.getUserName();
	int size = acc.getPassword().size();
	string pass(size, '*');
    cout << "----------Login----------" << endl;
	cout << "1. Enter account name: " << username << endl;
	cout << "2. Enter password: " << pass << endl;
	cout << "3. Login!" << endl;
	cout << "4. Back to Homepage." << endl;
}

void Login(Account& acc) {
	double choice = 0;
	do {
		// print the menu
		printLogin(acc);
		// get valid choice
		GETINPUT
		// switch case
		int sol = (int)choice;
		switch (sol)
		{
		case 1: // get user input username
			CLEAR;
			acc.setUserName(getInputUserName());
			break;

		case 2: // get user input password
			CLEAR;
			acc.setPassword(getInputPassword());
			break;

        case 3: // Login button. Will return input username and password then check in database. If correct then go to Role choosing
            CLEAR;
            RoleChoosing(acc);
			break;

		case 4:
			CLEAR
			Homepage(acc);
			break;

		default:
			cerr << "Option not available!" << endl;
			break;
		}
	} while (choice != 4);
}

void printRegister() {
    cout << "----------Register----------" << endl;
	cout << "1. Enter account name:" << endl;
	cout << "2. Enter password:" << endl;
	cout << "3. Enter phone number:" << endl;
	cout << "4. Confirm!" << endl;
	cout << "5. Back to Homepage." << endl;
}

void Register(Account& acc) {
    double choice = 0;
	do {
		// print the menu
		printRegister();
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
			break;

        case 4:
			break;

		case 5:
			CLEAR
			Homepage(acc);
			break;

		default:
			cerr << "Option not available!" << endl;
			break;
		}
	} while (choice != 8);
}

void printSearch() {
    cout << "----------Search----------" << endl;
    cout << "Fill out at least one option among 1, 2, 3 and 4." << endl;
    cout << "1. Enter book's name:" << endl;
    cout << "2. Enter writer's name:" << endl;
    cout << "3. Enter year of publishing: " << endl;
    cout << "4. Enter kind: " << endl;
    cout << "5. Search!" << endl;
    cout << "6. Back to Homepage." << endl;
}

void Search(Account& acc) {
    double choice = 0;
	do {
		// print the menu
		printSearch();
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
			break;

        case 4:
			break;

        case 5:
			break;

		case 6:
			CLEAR
			Homepage(acc);
			break;

		default:
			cerr << "Option not available!" << endl;
			break;
		}
	} while (choice != 6);
}

void printUserHomepage() {
	cout << "----------USER HOMEPAGE----------" << endl;
	cout << "1. Search for books" << endl;
	cout << "2. Borrow books" << endl;
	cout << "3. View notification" << endl; //thong bao ve sach moi ve, thong bao yeu cau tra sach sap/da qua han, xem ass de biet them chi tiet :v
	cout << "4. View borrowing history" << endl;
	cout << "5. Back to Homepage." << endl;
}

void UserHomepage(Account& acc) {
    double choice = 0;
	do {
		// print the menu
		printUserHomepage();
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
			break;

        case 4:
			break;

		case 5:
			CLEAR
			Homepage(acc);
			break;

		default:
			cerr << "Option not available!" << endl;
			break;
		}
	} while (choice != 5);
}

void printLibrarianHomepage() {
	cout << "----------LIBRARIAN HOMEPAGE----------" << endl;
	cout << "1. Add books" << endl;
	cout << "2. Edit" << endl;
	cout << "3. Delete books" << endl; //thong bao ve sach moi ve, thong bao yeu cau tra sach sap/da qua han, xem ass de biet them chi tiet :v
	cout << "4. Search for books" << endl;
	cout << "5. Back to Homepage." << endl;
}

void LibrarianHomepage(Account& acc) {
    double choice = 0;
	do {
		// print the menu
		printLibrarianHomepage();
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
			break;

        case 4:
			break;

		case 5:
			CLEAR
			Homepage(acc);
			break;

		default:
			cerr << "Option not available!" << endl;
			break;
		}
	} while (choice != 5);
}

void printManagerHomepage() {
	cout << "----------MANAGER HOMEPAGE----------" << endl;
	cout << "1. Add accounts" << endl;
	cout << "2. Edit accounts" << endl;
	cout << "3. Delete accounts" << endl; //thong bao ve sach moi ve, thong bao yeu cau tra sach sap/da qua han, xem ass de biet them chi tiet :v
	cout << "4. Search for accounts" << endl;
	cout << "5. Deactivate/Activate accounts" << endl;
	cout << "6. Reset password for accounts" << endl;
	cout << "7. Back to Homepage." << endl;
}

void ManagerHomepage(Account& acc) {
    double choice = 0;
	do {
		// print the menu
		printManagerHomepage();
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
			break;

        case 4:
			break;

        case 5:
			break;

        case 6:
			break;

		case 7:
			CLEAR
			Homepage(acc);
			break;

		default:
			cerr << "Option not available!" << endl;
			break;
		}
	} while (choice != 7);
}

void printRoleChoosing() {
    cout << "----------ROLE CHOOSING----------" << endl;
	cout << "1. User" << endl;
	cout << "2. Librarian" << endl;
	cout << "3. Manager" << endl; //thong bao ve sach moi ve, thong bao yeu cau tra sach sap/da qua han, xem ass de biet them chi tiet :v
	cout << "4. Back to Homepage." << endl;
}

void RoleChoosing(Account& acc) {
    double choice = 0;
	do {
		// print the menu
		printRoleChoosing();
		// get valid choice
		GETINPUT
		// switch case
		int sol = (int)choice;
		switch (sol)
		{
		case 1:
		    CLEAR;
		    UserHomepage(acc);
			break;

		case 2:
		    CLEAR;
		    LibrarianHomepage(acc);
			break;

        case 3:
            CLEAR;
            ManagerHomepage(acc);
			break;


		case 4:
			CLEAR
			Homepage(acc);
			break;

		default:
			cerr << "Option not available!" << endl;
			break;
		}
	} while (choice != 4);
}
