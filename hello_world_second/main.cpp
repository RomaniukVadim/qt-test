#include <QApplication>
#include <QLabel>

int main(int argc, char **argv) {
    QApplication app(argc,argv);
    QLabel lbl("<h2>Hello <font color=red>World!</font></h2>");
    lbl.show();
    return app.exec();
}
