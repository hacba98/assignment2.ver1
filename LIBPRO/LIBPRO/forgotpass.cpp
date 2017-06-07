#include "forgotpass.h"
#include <qmessagebox.h>

ForgotPass::ForgotPass(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

void ForgotPass::on_resetButton_clicked() {
	QString user = ui.lineUser->text();
	QString phone = ui.linePhone->text();
	QString pass = "admin";
	if (resetPassword(user, phone, pass)) {
		QMessageBox::information(this, "Reset Password Successfully", "Your new password is ""admin"". Please change it in profile");
	}
	else QMessageBox::information(this, "Reset Password Failed", "Failed");
}

ForgotPass::~ForgotPass()
{
}
