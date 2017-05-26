#pragma once

#include <QWidget>
#include "ui_usermenu.h"

class UserMenu : public QWidget, public Ui::UserMenu
{
	Q_OBJECT

public:
	UserMenu(QWidget *parent = Q_NULLPTR);
	~UserMenu();
	//LIBPRO *mainPage = NULL;

public
slots:
//void on_exitButton_clicked();
void on_findBookButton_clicked();
void on_historyButton_clicked();
void on_returnButton_clicked();
void on_returnButton2_clicked();
void on_profileButton_clicked();

void on_changeButton_clicked();
void on_saveButton_clicked();


private:
	Ui::UserMenu ui;
};
