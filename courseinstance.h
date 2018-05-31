#ifndef COURSEINSTANCE_H
#define COURSEINSTANCE_H
#include <QDialog>
#include <QPixmap>
#include <QRandomGenerator>
#include <QMessageBox>
#include "taskinstance.h"
#include "resultchecker.h"
#include "constants.h"

namespace Ui {
    class CourseInstance;
}

class CourseInstance : public QDialog {
    Q_OBJECT

public:
    explicit CourseInstance(QWidget * parent = 0);
    ~CourseInstance();

private slots:
    void on_pushButton_clicked();
    void on_quitButton_clicked();

private:
    Ui::CourseInstance * ui;
    TaskInstance * task;
    QPixmap cross;
    QPixmap full_heart;
    QPixmap empty_heart;
    QIcon quit;
    int picker = 0;
    int no_repeat;
    int life_counter;
};

#endif // COURSEINSTANCE_H
