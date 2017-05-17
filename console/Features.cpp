#include "Features.h"

using namespace std;

string getInputUserName() {
	string name;
	cout << "Please input your username: ";
	cin >> name;
	// NOTE :: Need to valid
	return name;
}

string getInputPassword() {
	string pass;
	cout << "Please input your password: ";
	cin >> pass;
	// NOTE :: Need to valid
	return pass;
}