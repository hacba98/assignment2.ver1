/********************************************************************************
** Form generated from reading UI file 'RegisterForm.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERFORM_H
#define UI_REGISTERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineUser;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *linePass;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *linePassConfirm;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLineEdit *linePhone;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkBoxAccept;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *confirmButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->setWindowModality(Qt::WindowModal);
        Register->resize(349, 400);
        QIcon icon;
        icon.addFile(QStringLiteral(":/LIBPRO/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Register->setWindowIcon(icon);
        layoutWidget = new QWidget(Register);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 291, 361));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineUser = new QLineEdit(layoutWidget);
        lineUser->setObjectName(QStringLiteral("lineUser"));

        horizontalLayout->addWidget(lineUser);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        linePass = new QLineEdit(layoutWidget);
        linePass->setObjectName(QStringLiteral("linePass"));
        linePass->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(linePass);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        linePassConfirm = new QLineEdit(layoutWidget);
        linePassConfirm->setObjectName(QStringLiteral("linePassConfirm"));
        linePassConfirm->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(linePassConfirm);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setValue(84);

        horizontalLayout_4->addWidget(spinBox);

        linePhone = new QLineEdit(layoutWidget);
        linePhone->setObjectName(QStringLiteral("linePhone"));

        horizontalLayout_4->addWidget(linePhone);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        checkBoxAccept = new QCheckBox(layoutWidget);
        checkBoxAccept->setObjectName(QStringLiteral("checkBoxAccept"));

        verticalLayout->addWidget(checkBoxAccept);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        confirmButton = new QPushButton(layoutWidget);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));
        confirmButton->setEnabled(false);

        hboxLayout->addWidget(confirmButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(Register);
        QObject::connect(confirmButton, SIGNAL(clicked()), Register, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), Register, SLOT(reject()));

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Register", Q_NULLPTR));
        label->setText(QApplication::translate("Register", "User Name            ", Q_NULLPTR));
        label_2->setText(QApplication::translate("Register", "Password              ", Q_NULLPTR));
        label_4->setText(QApplication::translate("Register", "Confirm Password", Q_NULLPTR));
        label_3->setText(QApplication::translate("Register", "Phone Number    +", Q_NULLPTR));
        checkBoxAccept->setText(QApplication::translate("Register", "I have read and accepted the terms and conditions", Q_NULLPTR));
        confirmButton->setText(QApplication::translate("Register", "OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("Register", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERFORM_H
