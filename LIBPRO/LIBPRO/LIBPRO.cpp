#include "LIBPRO.h"
#include <qmessagebox.h>
#include "Features.h"

LIBPRO::LIBPRO(QWidget *parent)
	: QMainWindow(parent)
{ 
	ui.setupUi(this);

	// Create connect
	QObject::connect(ui.pushButtonLogin, SIGNAL(clicked()), this, SLOT(openBox()));
	QObject::connect(ui.lineEdit_user, SIGNAL(returnPressed()), ui.pushButtonLogin, SIGNAL(clicked()));
	QObject::connect(ui.lineEdit_pass, SIGNAL(returnPressed()), ui.pushButtonLogin, SIGNAL(clicked()));
	QObject::connect(ui.pushButtonRegister, SIGNAL(clicked()), this, SLOT(signUp()));
	QObject::connect(ui.pushButtonForgotPass, SIGNAL(clicked()), this, SLOT(forgotPass()));
}

void LIBPRO::openBox() {
	QString username = ui.lineEdit_user->text();
	QString password = ui.lineEdit_pass->text();
	if (checkLogin(username,password)) { // condition check when data in the database is correct
		writeDB(username, password, getInfo(username));
		QMessageBox::information(this, "Sign In", "Login Success!");
		QObject::disconnect(ui.lineEdit_user, SIGNAL(returnPressed()), ui.pushButtonLogin, SIGNAL(clicked()));
		QObject::disconnect(ui.lineEdit_pass, SIGNAL(returnPressed()), ui.pushButtonLogin, SIGNAL(clicked()));

		// Choose role
		QString role = getRole(username);

		if (role == "G") {
			usermenu = new UserMenu(this);
			usermenu->show();
		}
		else {
			// choose role dialog show

			// show chosing
			ad = new adminmenu(this);
			ad->show();
		}
	}
	else {
		QMessageBox::warning(this, "Error", "Login Error\nWrong username or password");
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


