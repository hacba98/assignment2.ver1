#include "LIBPRO.h"
#include <QtWidgets/QApplication>
#include <qsplashscreen.h>
#include <QTimer>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QPixmap pixmap(":/LIBPRO/splashscreen.jpg");
	QSplashScreen *splash = new QSplashScreen(pixmap);
	splash->show();
	QPixmap pixmap1(":/LIBPRO/ss1.jpg");
	QSplashScreen* splash1 = new QSplashScreen(pixmap1);
	QPixmap pixmap2(":/LIBPRO/ss2.jpg");
	QSplashScreen* splash2 = new QSplashScreen(pixmap2);
	LIBPRO w;
	QTimer::singleShot(0, splash, SLOT(close()));
	QTimer::singleShot(1, splash1, SLOT(show()));
	QTimer::singleShot(500, splash1, SLOT(close()));
	QTimer::singleShot(500, splash2, SLOT(show()));
	QTimer::singleShot(1000, splash2, SLOT(close()));
	QTimer::singleShot(1000, &w, SLOT(show()));
	return a.exec();
}
