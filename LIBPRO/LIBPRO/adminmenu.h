#pragma once

#include <QWidget>
#include "ui_adminmenu.h"

class adminmenu : public QWidget, public Ui::adminmenu
{
	Q_OBJECT

public:
	adminmenu(QWidget *parent = Q_NULLPTR);
	~adminmenu();
};
