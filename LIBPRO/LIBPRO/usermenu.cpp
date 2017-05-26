#include "usermenu.h"
#include <qmessagebox.h>
#include <qstring.h>

UserMenu::UserMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.searchLine->setPlaceholderText("Search for Books");
	ui.stackedWidget->setCurrentIndex(0);

}

UserMenu::~UserMenu()
{
}

// these  function for changing between multiwindow
void UserMenu::on_findBookButton_clicked() {
	ui.stackedWidget->setCurrentIndex(1);
}

void UserMenu::on_historyButton_clicked() {
	ui.stackedWidget->setCurrentIndex(2);
}

void UserMenu::on_profileButton_clicked() {
	ui.stackedWidget->setCurrentIndex(2);
}

void UserMenu::on_returnButton_clicked() {
	ui.stackedWidget->setCurrentIndex(0);
}

void UserMenu::on_returnButton2_clicked() {
	ui.stackedWidget->setCurrentIndex(0);
}

// these function use in the profile information group box
void UserMenu::on_changeButton_clicked() {
	ui.saveButton->setEnabled(true);
	ui.lineUser_info->setReadOnly(false);
	ui.linePass_info->setReadOnly(false);
	ui.linePhone_info->setReadOnly(false);
	ui.note_info->setReadOnly(false);
}

void UserMenu::on_saveButton_clicked() {
	if (linePass_info->isModified()) {
		QLineEdit confirm("Confirm your password:", this);
		confirm.setEchoMode(QLineEdit::Password);
		QString passConfirm = confirm.text();
		bool equal = true; // compare user changes password with passConfirm.toString()
		if (equal) {
			//set new password in here
		}
	}
	if (QMessageBox::Yes == QMessageBox::question(this, "Save changes", "Do you want to save your changes?")) {
		// set new user information in here
	}
}