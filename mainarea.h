#ifndef MAINAREA_H
#define MAINAREA_H
#include <QMainWindow>
#include <QPixmap>
#include "constants.h"

namespace Ui {
    class MainArea;
}

class MainArea : public QMainWindow {
    Q_OBJECT

public:
    explicit MainArea(QWidget *parent = 0);
    ~MainArea();

private slots:
    void on_startButton_clicked();

private:
    Ui::MainArea *ui;
    QPixmap it;
    QPixmap fr;
    QPixmap de;
    QPixmap es;
    QIcon first_course;
    QIcon second_course;
    QIcon third_course;
    QIcon fourth_course;
    int score;

};

#endif // MAINAREA_H
