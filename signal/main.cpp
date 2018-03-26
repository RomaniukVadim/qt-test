#include <QApplication>
#include <mywindow.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
     My_Window *window = new My_Window;
     window->show();

     str *n = new str;
     QObject::connect(window,SIGNAL(Simple(QString)),n,SLOT(Simple(QString)));
     QObject::connect(window,SIGNAL(Inverse(QString)),n,SLOT(Inversia(QString)));
     QObject::connect(window,SIGNAL(Register(QString)),n,SLOT(Register(QString)));
     QObject::connect(window,SIGNAL(UpperInverse(QString)),n,SLOT(UpperInverse(QString)));
    return a.exec();
}
