#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LIBPRO.h"
#include "registerform.h"

class LIBPRO : public QMainWindow
{
	Q_OBJECT

public:
	LIBPRO(QWidget *parent = Q_NULLPTR);

public slots:
void openBox();
void signUp();
	
signals:

private:
	Ui::LIBPROClass ui;
	RegisterForm *regist;
};
