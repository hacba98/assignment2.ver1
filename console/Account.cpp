#include "Account.h"

using namespace std;

// Function for username
void Account::setUserName(string name) {
	userName = name;
}
string Account::getUserName() {
	return userName;
}

// Function for password
void Account::setPassword(string pass) {
	password = pass;
}
string Account::getPassword() {
	return password;
}

// Function for ID
void Account::setID(int number) {
	iD = number;
}
int Account::getID() {
	return iD;
}

// Function for type
void Account::setType(int t) {
	switch (t) {
	case 0:
		type = USER;
		break;
	case 1:
		type = LIBRARIAN;
		break;
	case 2:
		type = MANAGER;
		break;
	default:
		break;
	}
}
int Account::getType() {
	switch (type)
	{
	case Account::USER:
		return 0;
		break;
	case Account::LIBRARIAN:
		return 1;
		break;
	case Account::MANAGER:
		return 2;
		break;
	default:
		break;
	}
}

// Function for access pemit
void Account::setAccess(bool a) {
	access = a;
}
bool Account::haveAccess() {
	return access;
}