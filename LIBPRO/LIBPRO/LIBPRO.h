#pragma once

#include "ui_LIBPRO.h"
#include "registerform.h"
#include "ForgotPass.h"
#include "usermenu.h"

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

};
