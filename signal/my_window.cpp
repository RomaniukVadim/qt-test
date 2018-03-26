#include <mywindow.h>

My_Window::My_Window(QWidget *parent) : QDialog(parent){
    lbl = new QLabel("&Enter");

    line = new QLineEdit;
    lbl->setBuddy(line);

    cb1 = new QCheckBox("Upper");
    cb2 = new QCheckBox("Inverse");

    ok = new QPushButton("Okey");
    ok->setDefault(true);
    ok->setEnabled(false);
    close = new QPushButton("Exit");

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(lbl);
    layout->addWidget(line);

    QVBoxLayout *right = new QVBoxLayout;
    right->addLayout(layout);
    right->addWidget(cb1);
    right->addWidget(cb2);

    QVBoxLayout *left = new QVBoxLayout;
    left->addWidget(ok);
    left->addWidget(close);

    QHBoxLayout *main = new QHBoxLayout;
    main->addLayout(right);
    main->addLayout(left);

    connect(line,SIGNAL(textChanged(QString)),this,SLOT(TextChanged(QString)));
    connect(close,SIGNAL(clicked(bool)),this,SLOT(close()));
    connect(ok,SIGNAL(clicked(bool)),this,SLOT(OkClicked()));

    setLayout(main);
    setWindowTitle("MessageBox");
}

void My_Window::TextChanged(QString str){
    ok->setEnabled(!str.isEmpty());
}

void My_Window::OkClicked(){
    if((!cb1->isChecked()) && (!cb2->isChecked()))
        emit Simple(line->text());
    else if((cb1->isChecked()) && (cb2->isChecked()))
        emit UpperInverse(line->text());
    else if(cb1->isChecked())
        emit Register(line->text());
    else if(cb2->isChecked())
        emit Inverse(line->text());
}
