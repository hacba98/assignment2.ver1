#include "usermenu.h"
#include <iostream>
#include <qmessagebox.h>
#include <qstring.h>
#include <qinputdialog.h>
#include <QAbstractItemView>
#include <vector>
#include <QTimer>

UserMenu::UserMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.searchLine->setPlaceholderText("Search for Books");
	ui.stackedWidget->setCurrentIndex(0);
	QObject::connect(ui.searchLine, SIGNAL(returnPressed()), ui.searchButton, SIGNAL(clicked()));
	showAllBook(ui.listWidget_2);
	ui.labelHello->setText("Hello " + getUser_now() + ",");
	ui.borrowButton->setEnabled(false);
	ui.tableBook->setItemDelegate(new StarDelegate);
	ui.tableBook->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::SelectedClicked);
	ui.tableBook->setSelectionBehavior(QAbstractItemView::SelectRows);
	QTimer *timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(update()));
	timer->start(1000);
	ui.lastLogin->setText("Last login: " + getLast_Login(getUser_now()));
	updateLogin(getUser_now());
}

UserMenu::~UserMenu()
{
}

void UserMenu::update() {
	setTableBook(ui.tableBook);
}

// these  function for changing between multiwindow
void UserMenu::on_findBookButton_clicked() {
	ui.stackedWidget->setCurrentIndex(1);
}

void UserMenu::on_historyButton_clicked() {
	ui.lineUser_info->setText(getUser_now());
	ui.linePass_info->setText(getPass_now());
	ui.linePhone_info->setText(getPhone_now());
	ui.stackedWidget->setCurrentIndex(2);
}

void UserMenu::on_profileButton_clicked() {
	ui.lineUser_info->setText(getUser_now());
	ui.linePass_info->setText(getPass_now());
	ui.linePhone_info->setText(getPhone_now());
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
	ui.linePass_info->setReadOnly(false);
	ui.linePhone_info->setReadOnly(false);
	ui.note_info->setReadOnly(false);
	ui.lineNickname_info->setReadOnly(false);
	ui.lineEmail_info->setReadOnly(false);
	ui.lineStudentNumber_info->setReadOnly(false);
}

void UserMenu::on_saveButton_clicked() {
	bool haveChangedPass = ui.linePass_info->isModified();
	bool haveChangedPhone = ui.linePhone_info->isModified();
	bool haveChangedNickname = ui.lineNickname_info->isModified();
	bool haveChangedStudent = ui.lineStudentNumber_info->isModified();
	bool haveChangedEmail = ui.lineEmail_info->isModified();

	if (haveChangedPass || haveChangedPhone || haveChangedNickname || haveChangedEmail || haveChangedStudent) {
		if (QMessageBox::Yes == QMessageBox::question(this, "Save changes", "Do you want to save your changes?")) {
			ui.saveButton->setEnabled(false);
			ui.linePass_info->setReadOnly(true);
			ui.linePhone_info->setReadOnly(true);
			ui.note_info->setReadOnly(true);
			ui.lineNickname_info->setReadOnly(true);
			ui.lineEmail_info->setReadOnly(true);
			//ui.lineStundentNumber_info->setReadOnly(true);
		}
	}

	if (haveChangedPass) {
		if (!checkValidString(ui.linePass_info->text())) {
			QMessageBox::warning(this, "Invalid", "Password is not valid");
			return;
		}
		QString passConfirm = QInputDialog::getText(this, "Confirm Password", "Please confirm your password: ", QLineEdit::Password);
		if (compareString(ui.linePass_info->text(), passConfirm)) {
			resetPassword(ui.lineUser_info->text(), ui.linePass_info->text());
			ui.linePass_info->setModified(false);
		}
		else {
			QMessageBox::warning(this, "Not correct", "Password does not match");
			return;
		}
	}
	if (haveChangedPhone) {
		if (!checkValidPhone(ui.linePhone_info->text())) {
			QMessageBox::warning(this, "Invalid", "Phone number is not valid");
			return;
		}
		else {
			changePhone(ui.lineUser_info->text(), ui.linePhone_info->text());
			QMessageBox::information(this, "Success", "Phonenumber has been changed");
		}
	}

	// change nickname
	if (haveChangedNickname) {
		QString name = ui.lineNickname_info->text();
		if (name.size() > 20){
			QMessageBox::warning(this, "Invalid", "Nickname must below 20 characters");
			return;
		}
		else {
			changeNickname(ui.lineUser_info->text(), ui.lineNickname_info->text());
			QMessageBox::information(this, "Success", "Nickname has been changed");
		}
	}
}

void UserMenu::on_returnButton_2_clicked() {
	ui.stackedWidget->setCurrentIndex(1);
}
//fucntion on search book page

void UserMenu::on_searchButton_clicked() {
	ui.listWidget_2->clear();
	QString keyw = '%' + ui.searchLine->text() + '%';
	searchBook(keyw, ui.listWidget_2);
}

bool UserMenu::checkBookItemExist(QListWidgetItem* item, QListWidget* list) {
	for (int i = 0; i < list->count(); ++i)
		if (compareString(item->text(), ui.listWidget_3->item(i)->text()))
			return 1;
	return 0;
}

void UserMenu::on_listWidget_2_itemClicked() {
	ui.addButton->setEnabled(true);
	ui.addButton_2->setEnabled(true);
	if (checkBookItemExist(ui.listWidget_2->currentItem(), ui.listWidget_3) || checkBookExist(ui.listWidget_2->currentItem()->text(), getUser_now())) {
		ui.addButton->setEnabled(false);
		ui.addButton_2->setEnabled(false);
	}
}

void UserMenu::on_addButton_clicked() {
	QListWidgetItem* itemAdd = new QListWidgetItem();
	itemAdd = ui.listWidget_2->currentItem()->clone();
	if (checkBookItemExist(itemAdd, ui.listWidget_3) || checkBookExist(ui.listWidget_2->currentItem()->text(), getUser_now())) {
		ui.addButton->setEnabled(false);
		ui.addButton_2->setEnabled(false);
	}
	ui.listWidget_3->addItem(itemAdd);
	ui.borrowButton->setEnabled(true);
	ui.listWidget_3->sortItems();
	ui.addButton->setEnabled(false);
	ui.addButton_2->setEnabled(false);
}

void UserMenu::on_listWidget_3_itemClicked() {
	ui.removeButton->setEnabled(true);
}

void UserMenu::on_removeButton_clicked() {
	ui.listWidget_3->currentItem()->~QListWidgetItem();
	ui.removeButton->setEnabled(false);
	if (!checkBookItemExist(ui.listWidget_2->currentItem(), ui.listWidget_3) && !checkBookExist(ui.listWidget_2->currentItem()->text(), getUser_now())) {
		ui.addButton->setEnabled(true);
		ui.addButton_2->setEnabled(true);
	}
}

void UserMenu::on_listWidget_2_itemDoubleClicked() {
	ui.stackedWidget->setCurrentIndex(3);
	int ratingPoint;
	QLabel* bookSummary = new QLabel;
	QLabel* reviewArea = new QLabel;
	QListWidgetItem* itemAdd = new QListWidgetItem();
	itemAdd = ui.listWidget_2->currentItem()->clone();
	string relatedItem;
	CONNECTDB
		con->setSchema(DBBOOK);
	pstmt = con->prepareStatement("call book_admin.searchBook(?)");
	pstmt->setString(1, itemAdd->text().toLocal8Bit().constData());
	res = pstmt->executeQuery();
	BOOKDETAIL
}

void UserMenu::on_addButton_2_clicked() {
	QListWidgetItem* itemAdd = new QListWidgetItem();
	itemAdd = ui.listWidget_2->currentItem()->clone();
	if (checkBookItemExist(itemAdd, ui.listWidget_3)) {
		ui.addButton_2->setEnabled(false);
		ui.addButton->setEnabled(false);
	}
	ui.listWidget_3->addItem(itemAdd);
	ui.borrowButton->setEnabled(true);
	ui.listWidget_3->sortItems();
	ui.addButton->setEnabled(false);
	ui.addButton_2->setEnabled(false);
}

void UserMenu::on_relatedItem_itemDoubleClicked() {
	ui.stackedWidget->setCurrentIndex(3);
	int ratingPoint;
	QLabel* bookSummary = new QLabel;
	QLabel* reviewArea = new QLabel;
	QListWidgetItem* itemAdd = new QListWidgetItem();
	itemAdd = ui.relatedItem->currentItem()->clone();
	string relatedItem;
	CONNECTDB
		con->setSchema(DBBOOK);
	pstmt = con->prepareStatement("call book_admin.searchBook(?)");
	pstmt->setString(1, itemAdd->text().toLocal8Bit().constData());
	res = pstmt->executeQuery();
	BOOKDETAIL
}

void UserMenu::on_borrowButton_clicked() {
	for (int i = 0; i < ui.listWidget_3->count(); ++i) {
		getBook(ui.listWidget_3->item(i));
	}
	QMessageBox::information(this, "Successfull", "Please");
	ui.listWidget_3->clear();
	ui.borrowButton->setEnabled(false);
	setTableBook(ui.tableBook);
}