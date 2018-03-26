#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>

class MainWindow : public QDialog
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
private:
    QLabel *lbl;
    QLineEdit *line;
    QPushButton *check;
    QPushButton *close;
private slots:
    void CheckClicked();
    void TextChanged(QString str);
signals:
    void TheSame(QString str);
    void Different(QString str);
};

class str : public QObject
{
    Q_OBJECT
public slots:
    void TheSame(QString str){
        QMessageBox msg;
        msg.setText("<font color=green>Password "+ str + " is right</font>");
        msg.exec();
    }
    void Different(QString str){
        QMessageBox msg;
        msg.setText("<font color=red>Password "+ str + " is wrong!</font>");
        msg.exec();
    }
};

#endif // MAINWINDOW_H
