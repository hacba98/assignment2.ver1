/********************************************************************************
** Form generated from reading UI file 'LIBPRO.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBPRO_H
#define UI_LIBPRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LIBPROClass
{
public:
    QWidget *centralWidget;
    QLabel *label_3;
    QLineEdit *lineEdit_user;
    QLineEdit *lineEdit_pass;
    QPushButton *pushButtonForgotPass;
    QPushButton *pushButtonRegister;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButtonLogin;

    void setupUi(QMainWindow *LIBPROClass)
    {
        if (LIBPROClass->objectName().isEmpty())
            LIBPROClass->setObjectName(QStringLiteral("LIBPROClass"));
        LIBPROClass->resize(1280, 907);
        QIcon icon;
        icon.addFile(QStringLiteral(":/LIBPRO/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        LIBPROClass->setWindowIcon(icon);
        LIBPROClass->setStyleSheet(QLatin1String("#centralWidget{	\n"
"	\n"
"	border-image: url(:/LIBPRO/18946886_1220910834687054_1896337018_o.jpg);\n"
"}\n"
"\n"
"\n"
"#pushButtonForgotPass:hover {\n"
"    text-color: #939aa5;\n"
"    color: white;\n"
"}\n"
"\n"
"#pushButtonRegister:hover {\n"
"    text-color: #939aa5;\n"
"    color: white;\n"
"}\n"
"\n"
"   "));
        centralWidget = new QWidget(LIBPROClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 820, 191, 61));
        QFont font;
        font.setFamily(QStringLiteral("Gadugi"));
        font.setPointSize(10);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("Designed by Qt"));
        label_3->setTextFormat(Qt::PlainText);
        label_3->setOpenExternalLinks(true);
        lineEdit_user = new QLineEdit(centralWidget);
        lineEdit_user->setObjectName(QStringLiteral("lineEdit_user"));
        lineEdit_user->setGeometry(QRect(470, 290, 361, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("Cambria"));
        font1.setPointSize(14);
        lineEdit_user->setFont(font1);
        lineEdit_user->setStyleSheet(QLatin1String("#lineEdit_user\n"
"{\n"
"border-radius: 10px;\n"
"   \n"
"    padding: 70px; \n"
"    width: 200px;\n"
"    height: 150px; \n"
"}\n"
"#lineEdit_user::placeholder {\n"
"  border: #000;\n"
"  padding: 10px;\n"
"  font-size: 1.2em;\n"
"  width: 100%;\n"
"}"));
        lineEdit_user->setClearButtonEnabled(false);
        lineEdit_pass = new QLineEdit(centralWidget);
        lineEdit_pass->setObjectName(QStringLiteral("lineEdit_pass"));
        lineEdit_pass->setGeometry(QRect(470, 380, 361, 71));
        lineEdit_pass->setFont(font1);
        lineEdit_pass->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"    \n"
"    padding: 70px; \n"
"    width: 200px;\n"
"    height: 150px; "));
        lineEdit_pass->setEchoMode(QLineEdit::Password);
        lineEdit_pass->setClearButtonEnabled(false);
        pushButtonForgotPass = new QPushButton(centralWidget);
        pushButtonForgotPass->setObjectName(QStringLiteral("pushButtonForgotPass"));
        pushButtonForgotPass->setGeometry(QRect(470, 460, 161, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font2.setPointSize(9);
        font2.setUnderline(true);
        pushButtonForgotPass->setFont(font2);
        pushButtonForgotPass->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonForgotPass->setMouseTracking(true);
        pushButtonForgotPass->setStyleSheet(QLatin1String("border:0px;\n"
" text-align: left;"));
        pushButtonRegister = new QPushButton(centralWidget);
        pushButtonRegister->setObjectName(QStringLiteral("pushButtonRegister"));
        pushButtonRegister->setGeometry(QRect(700, 470, 121, 23));
        QFont font3;
        font3.setUnderline(true);
        pushButtonRegister->setFont(font3);
        pushButtonRegister->setStyleSheet(QLatin1String("border:0px;\n"
" text-align: right;"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(480, 300, 51, 51));
        label->setStyleSheet(QLatin1String("border-image: url(:/LIBPRO/19021356_1220910818020389_883539199_n.png);\n"
"\n"
"opacity: 0.0;\n"
""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(480, 390, 51, 51));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/LIBPRO/18944704_1220910811353723_1709384595_n.png);"));
        pushButtonLogin = new QPushButton(centralWidget);
        pushButtonLogin->setObjectName(QStringLiteral("pushButtonLogin"));
        pushButtonLogin->setGeometry(QRect(560, 560, 171, 91));
        QFont font4;
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        pushButtonLogin->setFont(font4);
        pushButtonLogin->setStyleSheet(QLatin1String("background-color: #b3bbc6;\n"
"    border: none;\n"
"    color: black;\n"
"    padding: 25px 32px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px;\n"
"border-radius: 35px;"));
        LIBPROClass->setCentralWidget(centralWidget);

        retranslateUi(LIBPROClass);

        QMetaObject::connectSlotsByName(LIBPROClass);
    } // setupUi

    void retranslateUi(QMainWindow *LIBPROClass)
    {
        LIBPROClass->setWindowTitle(QApplication::translate("LIBPROClass", "LIBPRO", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        label_3->setWhatsThis(QApplication::translate("LIBPROClass", "<html><head/><body><p><span style=\" font-size:12pt; font-style:italic;\">Designed by </span><a href=\"https://www.qt.io/\"><span style=\" text-decoration: underline; color:#0000ff;\">Qt</span></a></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_3->setText(QApplication::translate("LIBPROClass", "Designed by ADN-046<3 team", Q_NULLPTR));
        lineEdit_user->setPlaceholderText(QApplication::translate("LIBPROClass", "Username", Q_NULLPTR));
        lineEdit_pass->setPlaceholderText(QApplication::translate("LIBPROClass", "Password", Q_NULLPTR));
        pushButtonForgotPass->setText(QApplication::translate("LIBPROClass", "Forgot Password?", Q_NULLPTR));
        pushButtonRegister->setText(QApplication::translate("LIBPROClass", "Register", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        pushButtonLogin->setText(QApplication::translate("LIBPROClass", "LOG IN", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LIBPROClass: public Ui_LIBPROClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBPRO_H
