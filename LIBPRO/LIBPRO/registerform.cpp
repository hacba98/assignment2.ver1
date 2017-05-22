#include "registerform.h"
#include "ui_RegisterForm.h"
#include <qmessagebox.h>
#include "Features.h"


RegisterForm::RegisterForm(QWidget *parent) :
	QDialog(parent)
{
	ui.setupUi(this);

	//Create connect
	QObject::connect(ui.checkBoxAccept, SIGNAL(stateChanged(0)), ui.confirmButton, SLOT(enableOK()));
	QObject::connect(ui.confirmButton, SIGNAL(clicked()), this, SLOT(checkRegister()));
}

void RegisterForm::enableOK() {
	ui.confirmButton->setEnabled(true);
}

void RegisterForm::checkRegister() { // fucntion respond whenever the OK button in register screen is clicked
	QString user = ui.lineUser->text();
	QString pass = ui.linePass->text();
	QString passConfirm = ui.linePassConfirm->text();
	QString number = ui.linePhone->text();

	if (checkUser(user)) { // check if username exist? If exist return True
		QMessageBox::warning(this, "Failed", "This account's username already existed");
	}
	else if (!checkPassword(pass)) { // check password valid
		QMessageBox::warning(this, "Password not Valid", "Password must contain 'a'-'z', '0'-'9', and not contain special character.");
	}
	else if (pass != passConfirm) {
		QMessageBox::warning(this, "Password Confirm not Valid", "The confirm password do not match ");
	}
	else if (checkValidPhone(number)) {
		QMessageBox::warning(this, "Invalid PhoneNumber", "Phone Number not valid");
	}
	else {
		registToDB(user, pass, number);
		QMessageBox::information(this, "Success", "Register Success");
	}
}