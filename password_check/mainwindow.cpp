#include <mainwindow.h>

MainWindow::MainWindow(QWidget *parent) : QDialog(parent){
    lbl = new QLabel("&Enter Password");

    line = new QLineEdit;
    lbl->setBuddy(line);

    check = new QPushButton("Check");
    check->setDefault(true);
    check->setEnabled(false);
    close = new QPushButton("Exit");

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(lbl);
    layout->addWidget(line);

    QVBoxLayout *left = new QVBoxLayout;
    left->addWidget(check);
    left->addWidget(close);

    QHBoxLayout *main = new QHBoxLayout;
    main->addLayout(layout);
    main->addLayout(left);

    connect(line,SIGNAL(textChanged(QString)),this,SLOT(TextChanged(QString)));
    connect(close,SIGNAL(clicked()),this,SLOT(close()));
    connect(check,SIGNAL(clicked()),this,SLOT(CheckClicked()));

    setLayout(main);
    setWindowTitle("Password Checker");
}

void MainWindow::TextChanged(QString str){
    check->setEnabled(!str.isEmpty());
}

void MainWindow::CheckClicked(){
    if(line->text()=="pass")
        emit TheSame(line->text());
    else
        emit Different(line->text());
}
