#include "Features.h"

using namespace std;

// Function use often
bool compareString(QString a1, QString b1) {
	string a = a1.toLocal8Bit().constData();
	string b = b1.toLocal8Bit().constData();
	if (a.length() == b.length()) {
		for (int i = 0; i < a.length(); ++i) {
			if (a[i] != b[i])
				return 0;
		}
	}
	else return 0;
	return 1;
}

bool checkUser(QString user) { // check if username exist in database, if exist return 1
	bool check = 0;
	CONNECTDB
		con->setSchema(DBACC);
	stmt = con->createStatement();
	res = stmt->executeQuery("select * from user_admin.account");
	while (res->next()) {
		SQLString checkUsername = res->getString("user_name");
		if (compareString(user, checkUsername.c_str()))
			check = 1;
	}
	delete stmt;
	delete res;
	DISCONNECTDB
		return check;
}

bool checkValidString(QString pass) { // check if username or pass string is invalid or valid (1 is valid)
	string a = pass.toLocal8Bit().constData();
	if (strlen(a.c_str()) < 6) return 0;
	for (int i = 0; i < a.length(); ++i) {
		if (a[i] < 47 || (a[i] > 57 && a[i] < 65) || (a[i] > 90 && a[i] < 97) || a[i] > 122) {
			return 0;
			break;
		}
	}
	return 1;
}

// Function in register
bool checkValidPhone(QString phonenumber) {
	if (phonenumber.size() < 8 || phonenumber.size() > 15)
		return 0;
	for (int i = 0; i < phonenumber.size(); ++i)
		if (!phonenumber[i].isDigit())
			return 0;
	return 1;
}

bool phoneCorrect(QString user, QString phone) {
	bool check = 0;
	CONNECTDB
		con->setSchema(DBACC);
	pstmt = con->prepareStatement("select phone from user_admin.account where binary user_name = (?)");
	pstmt->setString(1, user.toLocal8Bit().constData());
	res = pstmt->executeQuery();
	while (res->next()){
		SQLString checkphone = res->getString("phone");
		if (compareString(phone, checkphone.c_str()))
			check = 1;
	}
	delete pstmt;
	delete res;
	DISCONNECTDB
		return check;
}

void changePhone(QString user, QString phone) {
	CONNECTDB
		con->setSchema(DBACC);
	pstmt = con->prepareStatement("update user_admin.account set phone = (?) where binary user_name = (?)");
	pstmt->setString(1, phone.toLocal8Bit().constData());
	pstmt->setString(2, user.toLocal8Bit().constData());
	pstmt->execute();
	delete pstmt;
	DISCONNECTDB
}

void changeNickname(QString user, QString name) {
	CONNECTDB
		con->setSchema(DBACC);
	pstmt = con->prepareStatement("update user_admin.account set nickname = (?) where binary user_name = (?)");
	pstmt->setString(1, name.toLocal8Bit().constData());
	pstmt->setString(2, user.toLocal8Bit().constData());
	pstmt->execute();
	delete pstmt;
	DISCONNECTDB
}

void registToDB(QString user, QString pass, QString phone) {
	CONNECTDB
		con->setSchema(DBACC);
	pstmt = con->prepareStatement("call user_admin.getAccount(?,?,?)");
	pstmt->setString(1, user.toLocal8Bit().constData());
	pstmt->setString(2, pass.toLocal8Bit().constData());
	pstmt->setString(3, phone.toLocal8Bit().constData());
	pstmt->execute();
	delete pstmt;
	DISCONNECTDB
}

bool resetPassword(QString user,QString phone, QString pass) {
	if (checkUser(user) && phoneCorrect(user, phone))
	{
		CONNECTDB
			con->setSchema(DBACC);
		pstmt = con->prepareStatement("call user_admin.updatePassword(?,?)");
		pstmt->setString(1, user.toLocal8Bit().constData());
		pstmt->setString(2, pass.toLocal8Bit().constData());
		pstmt->execute();
		delete pstmt;
		DISCONNECTDB
			return 1;
	}
	return 0;
}

void resetPassword(QString user, QString pass) {
	CONNECTDB
		con->setSchema(DBACC);
	pstmt = con->prepareStatement("call user_admin.updatePassword(?,?)");
	pstmt->setString(1, user.toLocal8Bit().constData());
	pstmt->setString(2, pass.toLocal8Bit().constData());
	pstmt->execute();
	delete pstmt;
	DISCONNECTDB
}

bool checkLogin(QString user, QString pass) {
	bool check = 0;
	CONNECTDB
		con->setSchema(DBACC);
	stmt = con->createStatement();
	res = stmt->executeQuery("select * from account");
	while (res->next()) {
		SQLString checkUsername = res->getString("user_name");
		SQLString checkPass = res->getString("pass");
		if (compareString(user, checkUsername.c_str()) && compareString(QCryptographicHash::hash(pass.toUtf8(), QCryptographicHash::Sha1).toHex(), checkPass.c_str()))
			check = 1;
	}
	delete stmt;
	delete res;
	DISCONNECTDB
		return check;
}

QString getRole(QString user) {
	QString result = "G";
	// YOUR CODE GO HERE
	CONNECTDB
		con->setSchema(DBACC);
	stmt = con->createStatement();
	res = stmt->executeQuery("select * from account");
	while (res->next()) {
		SQLString checkUsername = res->getString("user_name");
		if (compareString(user, checkUsername.c_str()))
			result = res->getString("user_id").c_str();
	}
	delete stmt;
	delete res;
	DISCONNECTDB
	///////////////////
	return result;
}

QString getInfo(QString user) {
	CONNECTDB
		con->setSchema(DBACC);
	pstmt = con->prepareStatement("select phone from account where binary user_name = (?)");
	pstmt->setString(1, user.toLocal8Bit().constData());
	res = pstmt->executeQuery();
	res->next();
	QString value = res->getString("phone").c_str();
	delete pstmt;
	delete res;
	DISCONNECTDB
		return value;
}

void writeDB(QString user_now, QString pass_now, QString phone_now) {
	CONNECTDB
		con->setSchema(DBACC);
	pstmt = con->prepareStatement("call user_admin.writeDB(?,?,?)");
	pstmt->setString(1, user_now.toLocal8Bit().constData());
	pstmt->setString(2, pass_now.toLocal8Bit().constData());
	pstmt->setString(3, phone_now.toLocal8Bit().constData());
	pstmt->execute();
	delete pstmt;
	DISCONNECTDB
}

QString getUser_now() {
	CONNECTDB
		con->setSchema(DBACC);
	stmt = con->createStatement();
	res = stmt->executeQuery("select * from accnow");
	res->next();
	QString value = res->getString("accnow").c_str();
	delete stmt;
	delete res;
	DISCONNECTDB
		return value;
}

QString getPass_now() {
	CONNECTDB
		con->setSchema(DBACC);
	stmt = con->createStatement();
	res = stmt->executeQuery("select * from accnow");
	res->next();
	QString value = res->getString("passnow").c_str();
	delete stmt;
	delete res;
	DISCONNECTDB
		return value;
}

QString getPhone_now() {
	CONNECTDB
		con->setSchema(DBACC);
	stmt = con->createStatement();
	res = stmt->executeQuery("select * from accnow");
	res->next();
	QString value = res->getString("phonenow").c_str();
	delete stmt;
	delete res;
	DISCONNECTDB
		return value;
}

QString getLast_Login(QString user) {
	QString value;
	CONNECTDB
		con->setSchema(DBACC);
	pstmt = con->prepareStatement("select * from account where binary user_name = (?)");
	pstmt->setString(1, user.toLocal8Bit().constData());
	res = pstmt->executeQuery();
	res->next();
	value = res->getString("last_login").c_str();
	delete res;
	delete pstmt;
	DISCONNECTDB
		return value;
}

void updateLogin(QString user) {
	CONNECTDB
		con->setSchema(DBACC);
	pstmt = con->prepareStatement("call updateTimeLogin(?)");
	pstmt->setString(1, user.toLocal8Bit().constData());
	pstmt->execute();
	delete pstmt;
	DISCONNECTDB
}

void showAllBook(QListWidget* a) {
	a->clear();
	CONNECTDB
		con->setSchema(DBBOOK);
	pstmt = con->prepareStatement("call book_admin.searchBook(?)");
	pstmt->setString(1, "%");
	res = pstmt->executeQuery();
	while (res->next()) {
		QString findedBook = res->getString("book_name").c_str();
		QString id = res->getString("id").c_str();
		QString author = res->getString("author_name").c_str();
		QString rating = res->getString("rating").c_str();
		QString type = res->getString("type").c_str();
		QString releaseDate = res->getString("release_date").c_str();
		QIcon icon;
		icon.addFile(":/LIBPRO/img/" + id + ".jpg", QSize(), QIcon::Normal, QIcon::Off);
		QListWidgetItem* item = new QListWidgetItem();
		item->setText(findedBook);
		item->setToolTip("Author's name: " + author + "\nType: " + type + "\nRelease date: " + releaseDate);
		item->setIcon(icon);
		a->addItem(item);
	}
	delete pstmt;
	delete res;
	DISCONNECTDB
}

void searchBook(QString keyw, QListWidget* a) {
	CONNECTDB
		con->setSchema(DBBOOK);
	pstmt = con->prepareStatement("call book_admin.searchBook(?)");
	pstmt->setString(1, keyw.toLocal8Bit().constData());
	res = pstmt->executeQuery();
	while (res->next()) {
		QString findedBook = res->getString("book_name").c_str();
		QString id = res->getString("id").c_str();
		QString author = res->getString("author_name").c_str();
		QString rating = res->getString("rating").c_str();
		QString type = res->getString("type").c_str();
		QString releaseDate = res->getString("release_date").c_str();
		QIcon icon;
		icon.addFile(":/LIBPRO/img/" + id + ".jpg", QSize(), QIcon::Normal, QIcon::Off);
		QListWidgetItem* item = new QListWidgetItem();
		item->setText(findedBook);
		item->setToolTip("Author's name: " + author + "\nType: " + type + "\nRelease date: " + releaseDate);
		item->setIcon(icon);
		a->addItem(item);
	}
	delete pstmt;
	delete res;
	DISCONNECTDB
}

void getBook(QListWidgetItem* a) {
	QString book_name;
	QString author;
	double rating;
	QString link;
	CONNECTDB
		con->setSchema(DBBOOK);
	pstmt = con->prepareStatement("select * from book_admin.book where binary book_name = (?)");
	pstmt->setString(1, a->text().toLocal8Bit().constData());
	res = pstmt->executeQuery();
	while (res->next()) {
		book_name = res->getString("book_name").c_str();
		author = res->getString("author_name").c_str();
		rating = res->getDouble("rating");
		link = res->getString("link").c_str();
	}
	delete pstmt;
	pstmt = con->prepareStatement("call book_admin.getBook(?,?,?,?,?)");
	pstmt->setString(1, book_name.toLocal8Bit().constData());
	pstmt->setString(2, author.toLocal8Bit().constData());
	pstmt->setDouble(3, rating);
	pstmt->setString(4, link.toLocal8Bit().constData());
	pstmt->setString(5, getUser_now().toLocal8Bit().constData());
	pstmt->execute();
	delete pstmt;
	delete res;
	DISCONNECTDB
}

void setTableBook(QTableWidget* a) {
	a->clearContents();
	QString book_name;
	QString author;
	double rating;
	QString link;
	QString date;
	int row = 0;
	QString day;
	QString time;
	CONNECTDB
		con->setSchema(DBBOOK);
	pstmt = con->prepareStatement("call setupTable(?)");
	pstmt->setString(1, getUser_now().toLocal8Bit().constData());
	res = pstmt->executeQuery();
	while (res->next()) {
		book_name = res->getString("book_name").c_str();
		author = res->getString("author").c_str();
		rating = res->getDouble("rating")/2;
		link = res->getString("link").c_str();
		date = res->getString("date_borrow").c_str();
		day = res->getString("floor(hour(timediff(date_add(date_borrow,interval 2 week) - 1,now())) / 24)").c_str();
		time = res->getString("timediff((timediff(date_add(date_borrow,interval 2 week),now())),sec_to_time(floor(hour(timediff(date_add(date_borrow,interval 2 week) - 1,now())) / 24)*24*60*60))").c_str();
		QTableWidgetItem* item1 = new QTableWidgetItem(book_name);
		QTableWidgetItem* item2 = new QTableWidgetItem(author);
		QTableWidgetItem* item3 = new QTableWidgetItem(rating);
		QTableWidgetItem* item4 = new QTableWidgetItem(link);
		item3->setData(0, QVariant::fromValue(StarRating(rating)));
		QTableWidgetItem* item5 = new QTableWidgetItem(date);
		QTableWidgetItem* item6 = new QTableWidgetItem(day + "-" + time);
		a->setItem(row, 0, item1);
		a->setItem(row, 1, item2);
		a->setItem(row, 2, item3);
		a->setItem(row, 3, item4);
		a->setItem(row, 4, item5);
		a->setItem(row, 5, item6);
		row++;
	}
	delete pstmt;
	delete res;
	DISCONNECTDB
}

bool checkBookExist(QString a, QString b) {
	bool value = 0;
	CONNECTDB
		con->setSchema(DBBOOK);
	pstmt = con->prepareStatement("select book_name from borrowbook where binary owner = (?)");
	pstmt->setString(1, b.toLocal8Bit().constData());
	res = pstmt->executeQuery();
	while (res->next()) {
		if (compareString(res->getString("book_name").c_str(), a)) {
			value = 1;
			break;
		}
	}
	delete pstmt;
	delete res;
	return value;
}