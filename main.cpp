#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    //Ye
    w.setWindowTitle("Hello Github");
    w.show();
    return a.exec();
}
