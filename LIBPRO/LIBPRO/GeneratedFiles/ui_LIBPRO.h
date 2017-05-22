/********************************************************************************
** Form generated from reading UI file 'LIBPRO.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBPRO_H
#define UI_LIBPRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LIBPROClass
{
public:
    QWidget *centralWidget;
    QLabel *label_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_user;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_pass;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonLogin;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonRegister;
    QPushButton *pushButtonForgotPass;

    void setupUi(QMainWindow *LIBPROClass)
    {
        if (LIBPROClass->objectName().isEmpty())
            LIBPROClass->setObjectName(QStringLiteral("LIBPROClass"));
        LIBPROClass->resize(1062, 758);
        QIcon icon;
        icon.addFile(QStringLiteral(":/LIBPRO/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        LIBPROClass->setWindowIcon(icon);
        LIBPROClass->setStyleSheet(QLatin1String("#centralWidget{	\n"
"	border-image: url(:/LIBPRO/menu.jpg);\n"
"}"));
        centralWidget = new QWidget(LIBPROClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 700, 111, 31));
        label_3->setStyleSheet(QStringLiteral("Designed by Qt"));
        label_3->setTextFormat(Qt::PlainText);
        label_3->setOpenExternalLinks(true);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(70, 250, 231, 161));
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_user = new QLineEdit(frame);
        lineEdit_user->setObjectName(QStringLiteral("lineEdit_user"));

        horizontalLayout_2->addWidget(lineEdit_user);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_pass = new QLineEdit(frame);
        lineEdit_pass->setObjectName(QStringLiteral("lineEdit_pass"));
        lineEdit_pass->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit_pass);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        pushButtonLogin = new QPushButton(frame);
        pushButtonLogin->setObjectName(QStringLiteral("pushButtonLogin"));
        pushButtonLogin->setMinimumSize(QSize(75, 23));
        pushButtonLogin->setStyleSheet(QStringLiteral("border-image: url(:/LIBPRO/loginbutton.png);"));

        horizontalLayout_4->addWidget(pushButtonLogin);

        horizontalSpacer_3 = new QSpacerItem(28, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonRegister = new QPushButton(frame);
        pushButtonRegister->setObjectName(QStringLiteral("pushButtonRegister"));

        horizontalLayout_3->addWidget(pushButtonRegister);

        pushButtonForgotPass = new QPushButton(frame);
        pushButtonForgotPass->setObjectName(QStringLiteral("pushButtonForgotPass"));

        horizontalLayout_3->addWidget(pushButtonForgotPass);


        verticalLayout_3->addLayout(horizontalLayout_3);

        LIBPROClass->setCentralWidget(centralWidget);
        frame->raise();
        label_3->raise();
        pushButtonLogin->raise();
        pushButtonLogin->raise();

        retranslateUi(LIBPROClass);

        QMetaObject::connectSlotsByName(LIBPROClass);
    } // setupUi

    void retranslateUi(QMainWindow *LIBPROClass)
    {
        LIBPROClass->setWindowTitle(QApplication::translate("LIBPROClass", "LIBPRO", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        label_3->setWhatsThis(QApplication::translate("LIBPROClass", "<html><head/><body><p><span style=\" font-size:12pt; font-style:italic;\">Designed by </span><a href=\"https://www.qt.io/\"><span style=\" text-decoration: underline; color:#0000ff;\">Qt</span></a></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_3->setText(QApplication::translate("LIBPROClass", "Designed by Qt", Q_NULLPTR));
        label->setText(QApplication::translate("LIBPROClass", "User        ", Q_NULLPTR));
        label_2->setText(QApplication::translate("LIBPROClass", "Password", Q_NULLPTR));
        pushButtonLogin->setText(QString());
        pushButtonRegister->setText(QApplication::translate("LIBPROClass", "Register", Q_NULLPTR));
        pushButtonForgotPass->setText(QApplication::translate("LIBPROClass", "Forgot Password", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LIBPROClass: public Ui_LIBPROClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBPRO_H
