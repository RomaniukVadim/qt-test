#include <QApplication>
#include <mainwindow.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *window = new MainWindow;
    window->show();

    str *n = new str;
    QObject::connect(window,SIGNAL(TheSame(QString)),n,SLOT(TheSame(QString)));
    QObject::connect(window,SIGNAL(Different(QString)),n,SLOT(Different(QString)));
    return a.exec();
}
