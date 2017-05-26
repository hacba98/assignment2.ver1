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
	if (checkUser(user) && phoneCorrect(user, phone)) {
		QString newpass = resetPassword(user);
		QMessageBox::information(this, "Reset Password Success", "Your password have been changed to: " + newpass);
	}
}

ForgotPass::~ForgotPass()
{
}
