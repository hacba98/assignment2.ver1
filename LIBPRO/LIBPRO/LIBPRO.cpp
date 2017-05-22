#include "LIBPRO.h"
#include <qmessagebox.h>

LIBPRO::LIBPRO(QWidget *parent)
	: QMainWindow(parent)
{ 
	ui.setupUi(this);

	// Create connect
	QObject::connect(ui.pushButtonLogin, SIGNAL(clicked()), this, SLOT(openBox()));
	QObject::connect(ui.pushButtonRegister, SIGNAL(clicked()), this, SLOT(signUp()));
}

void LIBPRO::openBox() {
	QString username = ui.lineEdit_user->text();
	QString password = ui.lineEdit_pass->text();
	if (true) { // condition check when data in the database is correct
		QMessageBox::information(this, "Sign In", "Login Success!");
	}
	else {
		QMessageBox::warning(this, "Error", "Login Error\nWrong username or password");
	}
}

void LIBPRO::signUp() {
	regist = new RegisterForm(this);
	regist->show();
}
