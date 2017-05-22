#pragma once

#include <Qstring>

// Function check Valid, use often
bool checkUser(QString);
bool checkPassword(QString);

// Fucntion in register
bool checkValidPhone(QString);
void registToDB(QString, QString, QString);
