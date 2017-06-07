#pragma once

#include <iostream>
#include <string>
#include <QString>
#include <qmessagebox.h>
#include <driver.h>
#include <connection.h>
#include <statement.h>
#include <prepared_statement.h>
#include <resultset.h>
#include <exception.h>
#include <QCryptographicHash>
#include <QtWidgets>
#include "starrating.h"
#include "stardelegate.h"
#include "stareditor.h"

#define DBHOST "tcp://127.0.0.1:3307"
#define USER "root"
#define PASSWORD "anhkhoaq1w2"
#define DBACC "user_admin"
#define DBBOOK "book_admin"
#define CONNECTDB Driver* driver; \
Connection* con; \
Statement* stmt; \
PreparedStatement* pstmt; \
ResultSet* res; \
driver = get_driver_instance(); \
con = driver->connect(DBHOST, USER, PASSWORD); 
#define DISCONNECTDB con->close(); \
delete con;
#define BOOKDETAIL while (res->next()) { \
QString findedBook = res->getString("book_name").c_str(); \
QString id = res->getString("id").c_str(); \
QString author = res->getString("author_name").c_str(); \
int rating = res->getDouble("rating"); \
QString type = res->getString("type").c_str(); \
QString releaseDate = res->getString("release_date").c_str(); \
QString summary = res->getString("summary").c_str(); \
QString review = res->getString("review").c_str(); \
ui.bookImg->setPixmap(":/LIBPRO/img/" + id + ".jpg"); \
ui.bookImg->setScaledContents(true); \
ui.bookName->setText(findedBook); \
ui.author->setText(author + " - " + type); \
bookSummary->setText(summary); \
ui.bookRelease->setText("Release date: " + releaseDate); \
reviewArea->setText(review); \
ratingPoint = rating / 2; \
relatedItem = type.toLocal8Bit(); \
	} \
	delete pstmt; \
	delete res; \
	DISCONNECTDB \
		bookSummary->setWordWrap(true); \
	reviewArea->setWordWrap(true); \
	bookSummary->setMaximumWidth(680); \
	reviewArea->setMaximumWidth(900); \
	QWidget* window1 = new QWidget; \
	QVBoxLayout* layout1 = new QVBoxLayout(window1); \
	layout1->addWidget(bookSummary); \
	ui.scrollArea_3->setWidget(window1); \
	ui.scrollArea_3->show(); \
	QWidget* window2 = new QWidget; \
	QVBoxLayout* layout2 = new QVBoxLayout(window2); \
	layout2->addWidget(reviewArea); \
	ui.scrollArea->setWidget(window2); \
	ui.scrollArea->show(); \
	ui.rating->clear(); \
	ui.rating->setItemDelegate(new StarDelegate); \
	ui.rating->setEditTriggers(QAbstractItemView::DoubleClicked \
		| QAbstractItemView::SelectedClicked); \
	ui.rating->setSelectionBehavior(QAbstractItemView::SelectRows); \
	QListWidgetItem* ratingItem = new QListWidgetItem; \
	ratingItem->setData(0, QVariant::fromValue(StarRating(ratingPoint))); \
	ui.rating->addItem(ratingItem); \
	ui.relatedItem->clear(); \
	con = driver->connect(DBHOST, USER, PASSWORD); \
	con->setSchema(DBBOOK); \
	pstmt = con->prepareStatement("call book_admin.findRelatedBook(?)"); \
	pstmt->setString(1, relatedItem.c_str()); \
	res = pstmt->executeQuery(); \
	while (res->next()) { \
		QString findedBook = res->getString("book_name").c_str(); \
		QString id = res->getString("id").c_str(); \
		QString author = res->getString("author_name").c_str(); \
		int rating = res->getDouble("rating"); \
		QString type = res->getString("type").c_str(); \
		QString releaseDate = res->getString("release_date").c_str(); \
		QIcon icon; \
		icon.addFile(":/LIBPRO/img/" + id + ".jpg", QSize(), QIcon::Normal, QIcon::Off); \
		QListWidgetItem* item = new QListWidgetItem(); \
		item->setText(findedBook); \
		item->setToolTip("Author's name: " + author + "\nType: " + type + "\nRelease date: " + releaseDate); \
		item->setIcon(icon); \
		if (!compareString(findedBook, itemAdd->text())) \
			ui.relatedItem->addItem(item); \
	} \
	delete pstmt; \
	delete res; \
	DISCONNECTDB


using namespace std;
using namespace sql;

// Function check Valid, use often
bool checkUser(QString);
bool checkValidString(QString);
bool compareString(QString, QString);
bool checkBookExist(QString, QString);

// Fucntion in register
bool checkValidPhone(QString);
bool phoneCorrect(QString, QString);
void changePhone(QString, QString);
void changeNickname(QString, QString);
void registToDB(QString, QString, QString);

bool resetPassword(QString, QString, QString);
void resetPassword(QString, QString);

// Login function
QString getRole(QString);
bool checkLogin(QString, QString);

QString getInfo(QString);

void writeDB(QString, QString, QString);
QString getUser_now();
QString getPass_now();
QString getPhone_now();
QString getLast_Login(QString);
void updateLogin(QString);

void showAllBook(QListWidget*);
void searchBook(QString, QListWidget*);
void getBook(QListWidgetItem*);
void setTableBook(QTableWidget*);