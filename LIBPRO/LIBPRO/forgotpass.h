#pragma once

#include <QDialog>
#include "ui_forgotpass.h"
#include "Features.h"

class ForgotPass : public QDialog, public Ui::ForgotPass
{
	Q_OBJECT

public:
	ForgotPass(QWidget *parent = Q_NULLPTR);
	~ForgotPass();

	public slots:
	void on_resetButton_clicked();

private:
	Ui::ForgotPass ui;
};
