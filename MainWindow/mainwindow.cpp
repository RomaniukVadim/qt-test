#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenuBar>
#include <QToolBar>
#include <mywindow.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    QMenu *file = menuBar()->addMenu("File");
//    QMenu *edit = menuBar()->addMenu("Edit");

//    QAction *newFile = new QAction(tr("New"),this);
//    newFile->setShortcut(QKeySequence::New);

//    QAction *close = new QAction(tr("Close"),this);
//    newFile->setShortcut(QKeySequence::Close);

//    connect(newFile,SIGNAL(triggered()),this,SLOT(action()));
//    connect(close,SIGNAL(triggered(bool)),this,SLOT(close()));

//    file->addAction(newFile);
//    file->addMenu(edit);
//    file->addAction(close);


//    QGridLayout *grd = new QGridLayout(this);
//    grd->addWidget(ui->pushButton,0,0);
//    grd->addWidget(ui->pushButton_2,1,1);

//    QWidget *as = new QWidget;
//    as->setLayout(grd);
//    setCentralWidget(as);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionClose_triggered()
{
    close();
}

void MainWindow::on_actionNewWindow_triggered()
{
    My_Window *window = new My_Window(this);
         window->show();

         str *n = new str;
         QObject::connect(window,SIGNAL(Simple(QString)),n,SLOT(Simple(QString)));
         QObject::connect(window,SIGNAL(Inverse(QString)),n,SLOT(Inversia(QString)));
         QObject::connect(window,SIGNAL(Register(QString)),n,SLOT(Register(QString)));
         QObject::connect(window,SIGNAL(UpperInverse(QString)),n,SLOT(UpperInverse(QString)));
}
