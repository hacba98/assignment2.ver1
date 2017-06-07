#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LIBPRO.h"
#include "registerform.h"
#include "forgotpass.h"
#include "usermenu.h"
#include "adminmenu.h"


class LIBPRO : public QMainWindow
{
	Q_OBJECT

public:
	LIBPRO(QWidget *parent = Q_NULLPTR);

	public slots:
	void openBox();
	void signUp();
	void forgotPass();
	void reOpen();

	
signals:

private:
	Ui::LIBPROClass ui;
	RegisterForm *regist;
	ForgotPass *dialog;
	UserMenu *usermenu;
	adminmenu *ad;

};
