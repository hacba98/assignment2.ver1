#pragma once

#include <string>

class Account {
private:
	enum TYPE { USER, LIBRARIAN, MANAGER };
	std::string userName = "";
	std::string password = "";
	int iD = 0;
	TYPE type = USER;
	bool access = 0;

public:
	// Set and get username function
	void setUserName(std::string);
	std::string getUserName();

	// Set and get password function
	void setPassword(std::string);
	std::string getPassword();

	// Set and get ID function
	void setID(int);
	int getID();

	// Set and get ID function
	void setType(int);
	int getType();

	// Set and get access permission
	void setAccess(bool);
	bool haveAccess();
};
