#ifndef TASKINSTANCE_H
#define TASKINSTANCE_H
#include <QRadioButton>
#include <QGroupBox>
#include <QTextStream>
#include <QLineEdit>
#include <QLayout>
#include <QPushButton>
#include "resultchecker.h"
#include "constants.h"

namespace Ui {
    class TaskInstance;
}

class TaskInstance : public QGroupBox {
    Q_OBJECT

public:
    TaskInstance();
    virtual void print() = 0;
    virtual ~TaskInstance();

protected:
    Ui::TaskInstance * ui;
    int picker;
};

class Translation : public TaskInstance {
public:
    Translation();
    void print() override {
        QTextStream(stdout) << "Translation Added";
    }
private:
    QLineEdit * translation_input;
};

class MultipleChoice : public TaskInstance {
public:
    MultipleChoice();
    void print() override {
        QTextStream(stdout) << "Multiple Choice Added";
    }

private:
    QPushButton * choice1;
    QPushButton * choice2;
    QPushButton * choice3;
    QPushButton * choice4;
};

class GapFill : public TaskInstance {
public:
    GapFill();
    void print() override {
        QTextStream(stdout) << "Gap Fill Added";
    }
private:
    QGroupBox * first_gap;
    QGroupBox * second_gap;
    QRadioButton * first_gap_choice1;
    QRadioButton * first_gap_choice2;
    QRadioButton * first_gap_choice3;
    QRadioButton * first_gap_choice4;
    QRadioButton * second_gap_choice1;
    QRadioButton * second_gap_choice2;
    QRadioButton * second_gap_choice3;
    QRadioButton * second_gap_choice4;
};

class Pair : public TaskInstance {
public:
    Pair();
    void print() override {
        QTextStream(stdout) << "Pair Added";
    }
private:
    QPushButton * toggle1;
    QPushButton * toggle2;
    QPushButton * toggle3;
    QPushButton * toggle4;
    QPushButton * toggle5;
    QPushButton * toggle6;
    QPushButton * toggle7;
    QPushButton * toggle8;
    QPushButton * toggle9;
    QPushButton * toggle10;
    QPushButton * toggle11;
    QPushButton * toggle12;

};

class TaskFactory {
public:
    static TaskInstance * makeTask(int i) {
        if (i == 0)
            return new Translation();
        if (i == 1)
            return new MultipleChoice();
        if (i == 2)
            return new GapFill();
        if (i == 3)
            return new Pair();
    }
};

#endif // TASKINSTANCE_H
