/********************************************************************************
** Form generated from reading UI file 'ForgotPass.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOTPASS_H
#define UI_FORGOTPASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ForgotPass
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineUser;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *linePhone;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *resetButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ForgotPass)
    {
        if (ForgotPass->objectName().isEmpty())
            ForgotPass->setObjectName(QStringLiteral("ForgotPass"));
        ForgotPass->resize(276, 180);
        QIcon icon;
        icon.addFile(QStringLiteral(":/LIBPRO/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        ForgotPass->setWindowIcon(icon);
        layoutWidget = new QWidget(ForgotPass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 0, 241, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineUser = new QLineEdit(layoutWidget);
        lineUser->setObjectName(QStringLiteral("lineUser"));

        horizontalLayout->addWidget(lineUser);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        linePhone = new QLineEdit(layoutWidget);
        linePhone->setObjectName(QStringLiteral("linePhone"));

        horizontalLayout_2->addWidget(linePhone);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        resetButton = new QPushButton(layoutWidget);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        horizontalLayout_3->addWidget(resetButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout_3->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(ForgotPass);
        QObject::connect(resetButton, SIGNAL(clicked()), ForgotPass, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), ForgotPass, SLOT(reject()));

        QMetaObject::connectSlotsByName(ForgotPass);
    } // setupUi

    void retranslateUi(QDialog *ForgotPass)
    {
        ForgotPass->setWindowTitle(QApplication::translate("ForgotPass", "Reset Password", Q_NULLPTR));
        label->setText(QApplication::translate("ForgotPass", "   Input correct phone number to reset password", Q_NULLPTR));
        label_2->setText(QApplication::translate("ForgotPass", "Username       ", Q_NULLPTR));
        label_3->setText(QApplication::translate("ForgotPass", "Phone Number", Q_NULLPTR));
        resetButton->setText(QApplication::translate("ForgotPass", "Reset", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("ForgotPass", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ForgotPass: public Ui_ForgotPass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASS_H
