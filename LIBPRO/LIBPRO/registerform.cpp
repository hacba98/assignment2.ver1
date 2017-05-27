#include "registerform.h"
#include "ui_RegisterForm.h"
#include <qmessagebox.h>
#include "Features.h"


RegisterForm::RegisterForm(QWidget *parent) :
	QDialog(parent)
{
	ui.setupUi(this);

	//Create connect
	QObject::connect(ui.checkBoxAccept, SIGNAL(toggled(bool)), ui.confirmButton, SLOT(setEnabled(bool)));
	QObject::connect(ui.confirmButton, SIGNAL(clicked()), this, SLOT(checkRegister()));
}



void RegisterForm::checkRegister() { // fucntion respond whenever the OK button in register screen is clicked
	QString user = ui.lineUser->text();
	QString pass = ui.linePass->text();
	QString passConfirm = ui.linePassConfirm->text();
	QString number = ui.linePhone->text();

	if (checkUser(user) || !checkValidString(user)) { // check if username exist? If exist return True
		QMessageBox::warning(this, "Failed", "This account's username already existed or invalid");
	}
	else if (!checkValidString(pass)) { // check password valid
		QMessageBox::warning(this, "Password not Valid", "Password must contain 'a'-'z', '0'-'9', and not contain special character.");
	}
	else if (!compareString(pass,passConfirm)) {
		QMessageBox::warning(this, "Password Confirm not Valid", "The confirm password do not match ");
	}
	else if (!checkValidPhone(number)) {
		QMessageBox::warning(this, "Invalid Phone Number", "Phone Number must have only digit and which length must be >= 8 and <= 15");
	}
	else {
		registToDB(user, pass, number);
		QMessageBox::information(this, "Success", "Register Success");
	}
}