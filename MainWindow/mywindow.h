#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>

class My_Window : public QDialog
{
    Q_OBJECT

public:
    My_Window(QWidget *parent=0);
private:
    QLabel *lbl;
    QLineEdit *line;
    QCheckBox *cb1;
    QCheckBox *cb2;
    QPushButton *ok;
    QPushButton *close;
private slots:
    void OkClicked();
    void TextChanged(QString str);
signals:
    void Register(QString str);
    void Inverse(QString str);
    void Simple(QString str);
    void UpperInverse(QString str);
};

class str: public QObject{
    Q_OBJECT
public  slots:
    void Simple(QString str){
        QMessageBox msg;
        msg.setText(str);
        msg.exec();
    }
    void Inversia(QString str){
        QString result = str;
        for(int i=str.size()-1,j=0;i>=0;i--,j++){
            result[j]=str[i];
        }
        QMessageBox msg;
        msg.setText(result);
        msg.exec();
    }
    void Register(QString str){
        QMessageBox msg;
        msg.setText(str.toUpper());
        msg.exec();
    }
    void UpperInverse(QString str){
        QString result = str;
        for(int i=str.size()-1,j=0;i>=0;i--,j++){
            result[j]=str[i];
        }
        QMessageBox msg;
        msg.setText(result.toUpper());
        msg.exec();
    }

};

#endif // MYWINDOW_H
