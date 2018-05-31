#include "courseinstance.h"
#include "ui_courseinstance.h"
#include "taskinstance.h"


float progress = 0;

CourseInstance::CourseInstance(QWidget *parent) : QDialog(parent), ui(new Ui::CourseInstance) {
    ui->setupUi(this);

    progress = 0;
    ui->progressBar->setValue(progress);

    cross = QPixmap(CROSS);
    quit = QIcon(cross);
    full_heart = QPixmap(FULL_HEART);

    ui->quitButton->setIcon(quit);
    ui->quitButton->setIconSize(cross.rect().size());

    ui->heart1->setPixmap(full_heart);
    ui->heart2->setPixmap(full_heart);
    ui->heart3->setPixmap(full_heart);

    task = TaskFactory::makeTask(picker);
    task->setParent(ui->taskSlot);
    task->show();

}

CourseInstance::~CourseInstance() {
    delete ui;
}


void CourseInstance::on_pushButton_clicked() {

    if (progress >= 93.3332) {
        ui->progressBar->setValue(progress + 6.666666667);
        progress = 100;
        QMessageBox message;
        message.setText("You're done! Congratulations!");
        message.exec();
        return;
    }

    delete task;

    picker = qrand() % 4;
    while(picker == no_repeat)
        picker = qrand() % 4;
    task = TaskFactory::makeTask(picker);
    task->setParent(ui->taskSlot);
    task->show();
    no_repeat = picker;

    ui->progressBar->setValue(progress + 6.666666667);
    progress += 6.666666667;
}

void CourseInstance::on_quitButton_clicked() {
    progress = 0;
}
