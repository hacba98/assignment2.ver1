/********************************************************************************
** Form generated from reading UI file 'adminmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENU_H
#define UI_ADMINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminmenu
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *page_2;
    QListWidget *listWidget;
    QCommandLinkButton *searchButton;
    QLineEdit *searchLine;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;

    void setupUi(QWidget *adminmenu)
    {
        if (adminmenu->objectName().isEmpty())
            adminmenu->setObjectName(QStringLiteral("adminmenu"));
        adminmenu->resize(1280, 907);
        stackedWidget = new QStackedWidget(adminmenu);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1281, 911));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 250, 151, 71));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 410, 151, 71));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        listWidget = new QListWidget(page_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 80, 1251, 551));
        searchButton = new QCommandLinkButton(page_2);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(740, 10, 61, 61));
        searchButton->setCursor(QCursor(Qt::PointingHandCursor));
        searchButton->setMouseTracking(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/LIBPRO/search.ico"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon);
        searchButton->setIconSize(QSize(50, 50));
        searchLine = new QLineEdit(page_2);
        searchLine->setObjectName(QStringLiteral("searchLine"));
        searchLine->setGeometry(QRect(20, 30, 721, 41));
        QFont font;
        font.setFamily(QStringLiteral("Lucida Calligraphy"));
        font.setPointSize(20);
        searchLine->setFont(font);
        searchLine->setFocusPolicy(Qt::StrongFocus);
        searchLine->setClearButtonEnabled(true);
        pushButton_7 = new QPushButton(page_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(850, 770, 151, 51));
        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(850, 670, 151, 51));
        pushButton_8 = new QPushButton(page_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(1050, 770, 151, 51));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(650, 670, 151, 51));
        pushButton_6 = new QPushButton(page_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(1050, 670, 151, 51));
        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(450, 670, 151, 51));
        stackedWidget->addWidget(page_2);

        retranslateUi(adminmenu);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(adminmenu);
    } // setupUi

    void retranslateUi(QWidget *adminmenu)
    {
        adminmenu->setWindowTitle(QApplication::translate("adminmenu", "adminmenu", Q_NULLPTR));
        pushButton->setText(QApplication::translate("adminmenu", "PushButton", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("adminmenu", "PushButton", Q_NULLPTR));
        searchButton->setText(QString());
        searchLine->setText(QString());
        pushButton_7->setText(QApplication::translate("adminmenu", "Promote", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("adminmenu", "Remove", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("adminmenu", "Demote", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("adminmenu", "Unblock", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("adminmenu", "Reset Password", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("adminmenu", "Block", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class adminmenu: public Ui_adminmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_H
