#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <dialog.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->textEdit);
    ui->statusBar->showMessage("Ready to work!");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionRead_triggered()
{
    Dialog *wnd = new Dialog(this);
    wnd->show();

    connect(wnd,SIGNAL(FilePath(QString)),this,SLOT(ReadToFile(QString)));
}

void MainWindow::ReadToFile(const QString &filePath){
     QFile mFile(filePath);

     if(!mFile.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this,"Error","Path not correct");
        ui->statusBar->showMessage("Error!");
        return;
     }
     QTextStream stream(&mFile);
     ui->statusBar->showMessage("Read to file: " + filePath);
     QString buffer = stream.readAll();
     ui->textEdit->setText(buffer);
     mFile.flush();
     mFile.close();
}

void MainWindow::on_actionWrite_triggered()
{
    QFile mFile("/home/reverse_tcp/text.txt");

    if(!mFile.open(QFile::WriteOnly | QFile::Text)){
       QMessageBox::information(this,"Error","Path not correct");
       ui->statusBar->showMessage("Error!");
       return;
    }
    QTextStream stream(&mFile);
ui->statusBar->showMessage("Write to text.txt");
    stream << ui->textEdit->toPlainText();
    mFile.close();
}

void MainWindow::on_actionPrint_Dir_triggered()
{
    Dialog *wnd = new Dialog(this);
    wnd->show();

    connect(wnd,SIGNAL(FilePath(QString)),this,SLOT(PrintDir(QString)));
}

void MainWindow::PrintDir(const QString &filePath){
    QDir myDir(filePath);
    QString buffer;

    for(QFileInfo temp: myDir.entryInfoList()){
        buffer += temp.absoluteFilePath() + '\n';
    }
    ui->textEdit->setText(buffer);
}

