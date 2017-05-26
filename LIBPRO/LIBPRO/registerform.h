#pragma once

#include <QDialog>
#include "ui_RegisterForm.h"

namespace Ui {
	class RegisterForm;
}

class RegisterForm : public QDialog
{
	Q_OBJECT

public:
	RegisterForm(QWidget *parent = 0);

public slots:
void checkRegister();

private:
	Ui::Register ui;
};

