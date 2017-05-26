#include <QtWidgets/QMainWindow>
#include "LIBPRO.h"
#include <qmessagebox.h>
#include "Features.h"

LIBPRO::LIBPRO(QWidget *parent)
	: QMainWindow(parent)
{ 
	ui.setupUi(this);

	// Create connect
	QObject::connect(ui.pushButtonLogin, SIGNAL(clicked()), this, SLOT(openBox()));
	QObject::connect(ui.pushButtonRegister, SIGNAL(clicked()), this, SLOT(signUp()));
	QObject::connect(ui.pushButtonForgotPass, SIGNAL(clicked()), this, SLOT(forgotPass()));
	//QObject::connect(usermenu, SIGNAL(close()), this, SLOT(show()));
}

void LIBPRO::openBox() { // slot that open message box when login success
	QString username = ui.lineEdit_user->text();
	QString password = ui.lineEdit_pass->text();
	bool access = true; // access permit true when username and password are correct

	if (access) { // condition check when data in the database is correct
		QMessageBox::information(this, "Sign In", "Login Success!");
	}
	else {
		QMessageBox::warning(this, "Error", "Login Error\nWrong username or password");
	}

	int role = 0; // role that get from database, NEED FUNCTION GETROLE
	if (access) {
		if (role == 0) {// Role: user case
			usermenu = new UserMenu(this);
			usermenu->show();
			//hide();
		}
	}

}

void LIBPRO::signUp() {
	regist = new RegisterForm(this);
	regist->show();
}

void LIBPRO::forgotPass() {
	dialog = new ForgotPass(this);
	dialog->show();
}

void LIBPRO::reOpen() {
	show();
}

