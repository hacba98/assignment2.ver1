#include "LIBPRO.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	LIBPRO w;
	w.show();
	return a.exec();
}
