#include "mainarea.h"
#include "ui_mainarea.h"
#include "courseinstance.h"

MainArea::MainArea(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainArea) {
    ui->setupUi(this);
}

MainArea::~MainArea() {
    delete ui;
}

void MainArea::on_startButton_clicked() {
    CourseInstance courseInstance;
    courseInstance.setModal(true);
    courseInstance.exec();

}
