#include <QApplication>
#include <QLabel>
int main(int argc, int **argv) {
    QApplication app(argc,argv);
    QLabel lbl("Hello World!");
    lbl.show();
    return app.exec();
}
