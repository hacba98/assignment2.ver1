/********************************************************************************
** Form generated from reading UI file 'usermenu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMENU_H
#define UI_USERMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserMenu
{
public:
    QStackedWidget *stackedWidget;
    QWidget *menuPage;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelHello;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *findBookButton;
    QSpacerItem *verticalSpacer;
    QPushButton *historyButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *profileButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *exitButton;
    QListWidget *listWidget;
    QLabel *label;
    QLabel *lastLogin;
    QWidget *searchPage;
    QLineEdit *searchLine;
    QListWidget *listWidget_2;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *borrowedNumber;
    QLabel *remainNumber;
    QLabel *totalNumber;
    QListWidget *listWidget_3;
    QCommandLinkButton *returnButton;
    QCommandLinkButton *searchButton;
    QCommandLinkButton *addButton;
    QCommandLinkButton *removeButton;
    QCommandLinkButton *borrowButton;
    QLabel *label_14;
    QWidget *informationPage;
    QGroupBox *groupBox;
    QPushButton *saveButton;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_4;
    QTextEdit *note_info;
    QPushButton *changeButton;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *lineStudentNumber_info;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLineEdit *lineNickname_info;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *linePass_info;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_16;
    QLineEdit *linePhone_info;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_17;
    QLineEdit *lineEmail_info;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineUser_info;
    QCommandLinkButton *returnButton2;
    QTableWidget *tableBook;
    QWidget *bookDetail;
    QLabel *bookImg;
    QLabel *bookName;
    QLabel *author;
    QLabel *label_11;
    QListWidget *relatedItem;
    QCommandLinkButton *addButton_2;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *bookRelease;
    QCommandLinkButton *returnButton_2;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollArea_2;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents;
    QListWidget *rating;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_3;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_4;

    void setupUi(QWidget *UserMenu)
    {
        if (UserMenu->objectName().isEmpty())
            UserMenu->setObjectName(QStringLiteral("UserMenu"));
        UserMenu->setWindowModality(Qt::ApplicationModal);
        UserMenu->resize(1284, 909);
        UserMenu->setMinimumSize(QSize(150, 40));
        QIcon icon;
        icon.addFile(QStringLiteral(":/LIBPRO/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        UserMenu->setWindowIcon(icon);
        UserMenu->setStyleSheet(QStringLiteral(""));
        stackedWidget = new QStackedWidget(UserMenu);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1281, 907));
        stackedWidget->setAutoFillBackground(false);
        stackedWidget->setStyleSheet(QLatin1String("#stackedWidget{\n"
"	\n"
"	border-image: url(:/LIBPRO/usermenu.jpg);\n"
"}"));
        menuPage = new QWidget();
        menuPage->setObjectName(QStringLiteral("menuPage"));
        menuPage->setStyleSheet(QLatin1String("#menuPage{ \n"
"	border-image: url(:/LIBPRO/usermenu.jpg);}"));
        layoutWidget = new QWidget(menuPage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 150, 251, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelHello = new QLabel(layoutWidget);
        labelHello->setObjectName(QStringLiteral("labelHello"));
        QFont font;
        font.setFamily(QStringLiteral("Californian FB"));
        font.setPointSize(20);
        labelHello->setFont(font);
        labelHello->setStyleSheet(QStringLiteral("color: rgb(85, 0, 255);"));
        labelHello->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelHello);

        layoutWidget1 = new QWidget(menuPage);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(220, 240, 152, 331));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        findBookButton = new QPushButton(layoutWidget1);
        findBookButton->setObjectName(QStringLiteral("findBookButton"));
        findBookButton->setMinimumSize(QSize(150, 40));
        findBookButton->setAutoFillBackground(false);

        verticalLayout->addWidget(findBookButton);

        verticalSpacer = new QSpacerItem(147, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        historyButton = new QPushButton(layoutWidget1);
        historyButton->setObjectName(QStringLiteral("historyButton"));
        historyButton->setMinimumSize(QSize(150, 40));

        verticalLayout->addWidget(historyButton);

        verticalSpacer_2 = new QSpacerItem(147, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        profileButton = new QPushButton(layoutWidget1);
        profileButton->setObjectName(QStringLiteral("profileButton"));
        profileButton->setMinimumSize(QSize(150, 40));

        verticalLayout->addWidget(profileButton);

        verticalSpacer_3 = new QSpacerItem(147, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        exitButton = new QPushButton(layoutWidget1);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setMinimumSize(QSize(150, 40));

        verticalLayout->addWidget(exitButton);

        listWidget = new QListWidget(menuPage);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(520, 260, 661, 491));
        label = new QLabel(menuPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(730, 220, 243, 19));
        label->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lastLogin = new QLabel(menuPage);
        lastLogin->setObjectName(QStringLiteral("lastLogin"));
        lastLogin->setGeometry(QRect(920, 90, 221, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Gadugi"));
        font1.setPointSize(10);
        lastLogin->setFont(font1);
        lastLogin->setStyleSheet(QStringLiteral("color: rgb(0, 255, 0);"));
        stackedWidget->addWidget(menuPage);
        searchPage = new QWidget();
        searchPage->setObjectName(QStringLiteral("searchPage"));
        searchPage->setStyleSheet(QStringLiteral(""));
        searchLine = new QLineEdit(searchPage);
        searchLine->setObjectName(QStringLiteral("searchLine"));
        searchLine->setGeometry(QRect(60, 50, 721, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Lucida Calligraphy"));
        font2.setPointSize(20);
        searchLine->setFont(font2);
        searchLine->setFocusPolicy(Qt::StrongFocus);
        searchLine->setClearButtonEnabled(true);
        listWidget_2 = new QListWidget(searchPage);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(60, 120, 781, 621));
        QFont font3;
        font3.setFamily(QStringLiteral("Rockwell"));
        font3.setPointSize(20);
        listWidget_2->setFont(font3);
        listWidget_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        listWidget_2->setMouseTracking(true);
        listWidget_2->setToolTipDuration(10);
        listWidget_2->setLayoutDirection(Qt::LeftToRight);
        listWidget_2->setStyleSheet(QStringLiteral(""));
        listWidget_2->setFrameShape(QFrame::NoFrame);
        listWidget_2->setFrameShadow(QFrame::Sunken);
        listWidget_2->setIconSize(QSize(80, 150));
        listWidget_2->setTextElideMode(Qt::ElideRight);
        listWidget_2->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget_2->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget_2->setSortingEnabled(true);
        pushButton = new QPushButton(searchPage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(880, 240, 91, 81));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/LIBPRO/cart.png);"));
        groupBox_2 = new QGroupBox(searchPage);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(910, 110, 291, 111));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 30, 47, 13));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 50, 47, 13));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(120, 80, 47, 13));
        borrowedNumber = new QLabel(groupBox_2);
        borrowedNumber->setObjectName(QStringLiteral("borrowedNumber"));
        borrowedNumber->setGeometry(QRect(110, 30, 21, 16));
        remainNumber = new QLabel(groupBox_2);
        remainNumber->setObjectName(QStringLiteral("remainNumber"));
        remainNumber->setGeometry(QRect(110, 50, 21, 16));
        totalNumber = new QLabel(groupBox_2);
        totalNumber->setObjectName(QStringLiteral("totalNumber"));
        totalNumber->setGeometry(QRect(160, 80, 21, 16));
        listWidget_3 = new QListWidget(searchPage);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(890, 310, 361, 431));
        QFont font4;
        font4.setFamily(QStringLiteral("Rockwell"));
        font4.setPointSize(15);
        listWidget_3->setFont(font4);
        listWidget_3->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        listWidget_3->setMouseTracking(true);
        listWidget_3->setFrameShape(QFrame::NoFrame);
        listWidget_3->setIconSize(QSize(50, 50));
        listWidget_3->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget_3->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget_3->setWordWrap(false);
        listWidget_3->setSortingEnabled(true);
        returnButton = new QCommandLinkButton(searchPage);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(50, 770, 131, 101));
        returnButton->setCursor(QCursor(Qt::PointingHandCursor));
        returnButton->setMouseTracking(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/LIBPRO/back.ico"), QSize(), QIcon::Normal, QIcon::Off);
        returnButton->setIcon(icon1);
        returnButton->setIconSize(QSize(100, 100));
        searchButton = new QCommandLinkButton(searchPage);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(780, 30, 61, 61));
        searchButton->setCursor(QCursor(Qt::PointingHandCursor));
        searchButton->setMouseTracking(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/LIBPRO/search.ico"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon2);
        searchButton->setIconSize(QSize(50, 50));
        addButton = new QCommandLinkButton(searchPage);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setEnabled(false);
        addButton->setGeometry(QRect(670, 750, 91, 91));
        addButton->setCursor(QCursor(Qt::PointingHandCursor));
        addButton->setMouseTracking(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/LIBPRO/add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon3);
        addButton->setIconSize(QSize(100, 80));
        removeButton = new QCommandLinkButton(searchPage);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setEnabled(false);
        removeButton->setGeometry(QRect(1140, 750, 91, 91));
        removeButton->setCursor(QCursor(Qt::PointingHandCursor));
        removeButton->setMouseTracking(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/LIBPRO/remove.ico"), QSize(), QIcon::Normal, QIcon::Off);
        removeButton->setIcon(icon4);
        removeButton->setIconSize(QSize(100, 80));
        borrowButton = new QCommandLinkButton(searchPage);
        borrowButton->setObjectName(QStringLiteral("borrowButton"));
        borrowButton->setGeometry(QRect(970, 750, 101, 101));
        borrowButton->setCursor(QCursor(Qt::PointingHandCursor));
        borrowButton->setMouseTracking(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/LIBPRO/borrow.ico"), QSize(), QIcon::Normal, QIcon::Off);
        borrowButton->setIcon(icon5);
        borrowButton->setIconSize(QSize(100, 80));
        label_14 = new QLabel(searchPage);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(980, 260, 141, 51));
        QFont font5;
        font5.setPointSize(15);
        label_14->setFont(font5);
        stackedWidget->addWidget(searchPage);
        informationPage = new QWidget();
        informationPage->setObjectName(QStringLiteral("informationPage"));
        groupBox = new QGroupBox(informationPage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 50, 411, 611));
        saveButton = new QPushButton(groupBox);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setEnabled(false);
        saveButton->setGeometry(QRect(270, 540, 81, 31));
        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 440, 301, 73));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_5->addWidget(label_6);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_4);


        horizontalLayout_8->addLayout(verticalLayout_5);

        note_info = new QTextEdit(layoutWidget2);
        note_info->setObjectName(QStringLiteral("note_info"));
        note_info->setMaximumSize(QSize(221, 71));
        note_info->setReadOnly(true);

        horizontalLayout_8->addWidget(note_info);

        changeButton = new QPushButton(groupBox);
        changeButton->setObjectName(QStringLiteral("changeButton"));
        changeButton->setGeometry(QRect(170, 540, 81, 31));
        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 290, 309, 62));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_7->addWidget(label_5);

        lineStudentNumber_info = new QLineEdit(layoutWidget3);
        lineStudentNumber_info->setObjectName(QStringLiteral("lineStudentNumber_info"));
        lineStudentNumber_info->setReadOnly(true);

        horizontalLayout_7->addWidget(lineStudentNumber_info);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 150, 309, 62));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_9->addWidget(label_10);

        lineNickname_info = new QLineEdit(layoutWidget_2);
        lineNickname_info->setObjectName(QStringLiteral("lineNickname_info"));
        lineNickname_info->setReadOnly(true);

        horizontalLayout_9->addWidget(lineNickname_info);

        layoutWidget4 = new QWidget(groupBox);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(30, 90, 311, 51));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);

        linePass_info = new QLineEdit(layoutWidget4);
        linePass_info->setObjectName(QStringLiteral("linePass_info"));
        linePass_info->setEchoMode(QLineEdit::Password);
        linePass_info->setReadOnly(true);

        horizontalLayout_6->addWidget(linePass_info);

        layoutWidget_3 = new QWidget(groupBox);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 220, 309, 62));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_3);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_11->addWidget(label_16);

        linePhone_info = new QLineEdit(layoutWidget_3);
        linePhone_info->setObjectName(QStringLiteral("linePhone_info"));
        linePhone_info->setReadOnly(true);

        horizontalLayout_11->addWidget(linePhone_info);

        layoutWidget_4 = new QWidget(groupBox);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(30, 360, 309, 62));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget_4);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_12->addWidget(label_17);

        lineEmail_info = new QLineEdit(layoutWidget_4);
        lineEmail_info->setObjectName(QStringLiteral("lineEmail_info"));
        lineEmail_info->setReadOnly(true);

        horizontalLayout_12->addWidget(lineEmail_info);

        layoutWidget5 = new QWidget(groupBox);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(30, 40, 311, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget5);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineUser_info = new QLineEdit(layoutWidget5);
        lineUser_info->setObjectName(QStringLiteral("lineUser_info"));
        lineUser_info->setReadOnly(true);

        horizontalLayout_2->addWidget(lineUser_info);

        returnButton2 = new QCommandLinkButton(informationPage);
        returnButton2->setObjectName(QStringLiteral("returnButton2"));
        returnButton2->setGeometry(QRect(80, 710, 131, 121));
        returnButton2->setCursor(QCursor(Qt::PointingHandCursor));
        returnButton2->setMouseTracking(true);
        returnButton2->setIcon(icon1);
        returnButton2->setIconSize(QSize(100, 100));
        tableBook = new QTableWidget(informationPage);
        if (tableBook->columnCount() < 6)
            tableBook->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableBook->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableBook->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableBook->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableBook->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableBook->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableBook->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableBook->rowCount() < 50)
            tableBook->setRowCount(50);
        tableBook->setObjectName(QStringLiteral("tableBook"));
        tableBook->setGeometry(QRect(510, 50, 761, 791));
        tableBook->setFont(font1);
        tableBook->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        tableBook->setMouseTracking(true);
        tableBook->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableBook->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableBook->setGridStyle(Qt::SolidLine);
        tableBook->setSortingEnabled(true);
        tableBook->setRowCount(50);
        tableBook->horizontalHeader()->setCascadingSectionResizes(true);
        tableBook->horizontalHeader()->setDefaultSectionSize(120);
        stackedWidget->addWidget(informationPage);
        bookDetail = new QWidget();
        bookDetail->setObjectName(QStringLiteral("bookDetail"));
        bookDetail->setStyleSheet(QStringLiteral("background-image: url(:/LIBPRO/hd-white-wallpaper-11.jpg);"));
        bookImg = new QLabel(bookDetail);
        bookImg->setObjectName(QStringLiteral("bookImg"));
        bookImg->setGeometry(QRect(20, 20, 221, 331));
        bookImg->setFrameShape(QFrame::NoFrame);
        bookName = new QLabel(bookDetail);
        bookName->setObjectName(QStringLiteral("bookName"));
        bookName->setGeometry(QRect(260, 10, 991, 71));
        QFont font6;
        font6.setFamily(QStringLiteral("Gadugi"));
        font6.setPointSize(30);
        font6.setBold(true);
        font6.setWeight(75);
        bookName->setFont(font6);
        bookName->setFrameShape(QFrame::NoFrame);
        bookName->setScaledContents(true);
        author = new QLabel(bookDetail);
        author->setObjectName(QStringLiteral("author"));
        author->setGeometry(QRect(260, 80, 721, 41));
        QFont font7;
        font7.setFamily(QStringLiteral("Sitka Display"));
        font7.setPointSize(18);
        author->setFont(font7);
        author->setFrameShape(QFrame::NoFrame);
        author->setFrameShadow(QFrame::Plain);
        label_11 = new QLabel(bookDetail);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(1000, 130, 161, 41));
        label_11->setFont(font5);
        label_11->setStyleSheet(QStringLiteral("color: rgb(0, 85, 255);"));
        relatedItem = new QListWidget(bookDetail);
        relatedItem->setObjectName(QStringLiteral("relatedItem"));
        relatedItem->setGeometry(QRect(1000, 180, 271, 251));
        QFont font8;
        font8.setPointSize(12);
        relatedItem->setFont(font8);
        relatedItem->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        relatedItem->setMouseTracking(true);
        relatedItem->setFocusPolicy(Qt::StrongFocus);
        relatedItem->setToolTipDuration(10);
        relatedItem->setAutoFillBackground(false);
        relatedItem->setFrameShape(QFrame::NoFrame);
        relatedItem->setFrameShadow(QFrame::Plain);
        relatedItem->setIconSize(QSize(50, 50));
        relatedItem->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        relatedItem->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        relatedItem->setWordWrap(true);
        relatedItem->setSortingEnabled(true);
        addButton_2 = new QCommandLinkButton(bookDetail);
        addButton_2->setObjectName(QStringLiteral("addButton_2"));
        addButton_2->setGeometry(QRect(890, 480, 101, 101));
        addButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        addButton_2->setMouseTracking(false);
        addButton_2->setAutoFillBackground(false);
        addButton_2->setIcon(icon3);
        addButton_2->setIconSize(QSize(100, 80));
        label_12 = new QLabel(bookDetail);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(90, 610, 261, 31));
        QFont font9;
        font9.setFamily(QStringLiteral("Centaur"));
        font9.setPointSize(25);
        label_12->setFont(font9);
        label_12->setStyleSheet(QStringLiteral("color: rgb(0, 85, 255);"));
        label_13 = new QLabel(bookDetail);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(0, 570, 91, 81));
        label_13->setFrameShape(QFrame::NoFrame);
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/LIBPRO/1.ico")));
        label_13->setScaledContents(true);
        bookRelease = new QLabel(bookDetail);
        bookRelease->setObjectName(QStringLiteral("bookRelease"));
        bookRelease->setGeometry(QRect(10, 350, 231, 31));
        QFont font10;
        font10.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font10.setPointSize(15);
        bookRelease->setFont(font10);
        bookRelease->setFrameShape(QFrame::NoFrame);
        bookRelease->setAlignment(Qt::AlignCenter);
        returnButton_2 = new QCommandLinkButton(bookDetail);
        returnButton_2->setObjectName(QStringLiteral("returnButton_2"));
        returnButton_2->setGeometry(QRect(30, 810, 71, 71));
        returnButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        returnButton_2->setMouseTracking(true);
        returnButton_2->setIcon(icon1);
        returnButton_2->setIconSize(QSize(50, 100));
        line = new QFrame(bookDetail);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(260, 130, 731, 5));
        line->setAutoFillBackground(false);
        line->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        scrollArea = new QScrollArea(bookDetail);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(20, 650, 941, 171));
        QFont font11;
        font11.setFamily(QStringLiteral("Gadugi"));
        font11.setPointSize(12);
        scrollArea->setFont(font11);
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollArea_2 = new QWidget();
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(0, 0, 991, 171));
        scrollArea->setWidget(scrollArea_2);
        scrollArea_3 = new QScrollArea(bookDetail);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(260, 140, 731, 351));
        scrollArea_3->setFont(font11);
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea_3->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 731, 271));
        scrollArea_3->setWidget(scrollAreaWidgetContents);
        rating = new QListWidget(bookDetail);
        rating->setObjectName(QStringLiteral("rating"));
        rating->setGeometry(QRect(70, 420, 111, 51));
        rating->setFont(font5);
        rating->setStyleSheet(QStringLiteral("color: rgb(255, 255, 0);"));
        rating->setFrameShape(QFrame::NoFrame);
        rating->setLayoutMode(QListView::SinglePass);
        stackedWidget->addWidget(bookDetail);
        layoutWidget6 = new QWidget(UserMenu);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        layoutWidget7 = new QWidget(UserMenu);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(listWidget);
#endif // QT_NO_SHORTCUT

        retranslateUi(UserMenu);
        QObject::connect(exitButton, SIGNAL(clicked()), UserMenu, SLOT(close()));

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(UserMenu);
    } // setupUi

    void retranslateUi(QWidget *UserMenu)
    {
        UserMenu->setWindowTitle(QApplication::translate("UserMenu", "Menu", Q_NULLPTR));
        findBookButton->setText(QApplication::translate("UserMenu", "Find Book", Q_NULLPTR));
        historyButton->setText(QApplication::translate("UserMenu", "My Book", Q_NULLPTR));
        profileButton->setText(QApplication::translate("UserMenu", "Profile", Q_NULLPTR));
        exitButton->setText(QApplication::translate("UserMenu", "Log Out", Q_NULLPTR));
        label->setText(QApplication::translate("UserMenu", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff0000;\">                   Annouce New Books Releases</span></p></body></html>", Q_NULLPTR));
        lastLogin->setText(QString());
        searchLine->setText(QString());
        pushButton->setText(QString());
        groupBox_2->setTitle(QString());
        label_7->setText(QApplication::translate("UserMenu", "Borowed", Q_NULLPTR));
        label_8->setText(QApplication::translate("UserMenu", "Remain", Q_NULLPTR));
        label_9->setText(QApplication::translate("UserMenu", "Total", Q_NULLPTR));
        borrowedNumber->setText(QString());
        remainNumber->setText(QString());
        totalNumber->setText(QString());
        returnButton->setText(QString());
        searchButton->setText(QString());
        addButton->setText(QString());
        removeButton->setText(QString());
        borrowButton->setText(QString());
        label_14->setText(QApplication::translate("UserMenu", "Current Items:", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("UserMenu", "Information", Q_NULLPTR));
        saveButton->setText(QApplication::translate("UserMenu", "Save Changes", Q_NULLPTR));
        label_6->setText(QApplication::translate("UserMenu", "Note               ", Q_NULLPTR));
        changeButton->setText(QApplication::translate("UserMenu", "Changes", Q_NULLPTR));
        label_5->setText(QApplication::translate("UserMenu", "Student Number     ", Q_NULLPTR));
        label_10->setText(QApplication::translate("UserMenu", "Nickname                ", Q_NULLPTR));
        label_4->setText(QApplication::translate("UserMenu", "Password                ", Q_NULLPTR));
        label_16->setText(QApplication::translate("UserMenu", "PhoneNumber         ", Q_NULLPTR));
        label_17->setText(QApplication::translate("UserMenu", "Email                       ", Q_NULLPTR));
        label_3->setText(QApplication::translate("UserMenu", "UserName               ", Q_NULLPTR));
        returnButton2->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableBook->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("UserMenu", "Book", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableBook->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("UserMenu", "Author", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableBook->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("UserMenu", "Rating", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableBook->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("UserMenu", "Link", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableBook->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("UserMenu", "Date-borrow", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableBook->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("UserMenu", "Time-remaining", Q_NULLPTR));
        bookImg->setText(QString());
        bookName->setText(QString());
        author->setText(QString());
        label_11->setText(QApplication::translate("UserMenu", "Related Item", Q_NULLPTR));
        addButton_2->setText(QString());
        label_12->setText(QApplication::translate("UserMenu", "Community Reviews:", Q_NULLPTR));
        label_13->setText(QString());
        bookRelease->setText(QString());
        returnButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserMenu: public Ui_UserMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMENU_H
