#pragma once

#include <iostream>
#include "Account.h"
#include "Features.h"

// Check valid input choice
bool checkValidChoice(const double&);

// Create print homepage menu function
void printHomepage();
void Homepage(Account&);

// Create print login menu function
void printLogin(Account&);
void Login(Account&);

// Create print register menu function
void printRegister();
void Register(Account&);

// Create print search menu function
void printSearch();
void Search(Account&);

// Create print user homepage menu function
void printUserHomepage();
void UserHomepage(Account&);

// Create print librarian homepage menu function
void printLibrarianHomepage();
void LibrarianHomepage(Account&);

// Create print manager homepage menu function
void printManagerHomepage();
void ManagerHomepage(Account&);

// Create print role choosing menu function
void printRoleChoosing();
void RoleChoosing(Account&);
