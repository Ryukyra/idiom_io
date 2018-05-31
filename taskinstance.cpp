#include "taskinstance.h"
#include "ui_taskinstance.h"

TaskInstance::TaskInstance() : ui(new Ui::TaskInstance) {
    ui->setupUi(this);
}

Translation::Translation() {
    ui->title->setText("TRANSLATE THIS PHRASE");
    picker = qrand() % 20;
    ui->assignment->setText(BASIC_IT_TRANSLATION_TASKS[picker]);

    translation_input = new QLineEdit(ui->selectionArea);
    translation_input->setPlaceholderText("Insert your translation here ...");
    translation_input->setAlignment(Qt::AlignTop);
    translation_input->setGeometry(0, 10, 581, 241);
}

MultipleChoice::MultipleChoice() {
    ui->title->setText("SELECT THE ANSWER");
    picker = qrand() % 20;
    ui->assignment->setText(BASIC_IT_MULTIPLE_CHOICE_TASKS[picker]);

    choice1 = new QPushButton(ui->selectionArea);
    choice2 = new QPushButton(ui->selectionArea);
    choice3 = new QPushButton(ui->selectionArea);
    choice4 = new QPushButton(ui->selectionArea);

    choice1->setText(BASIC_IT_MULTIPLE_CHOICE_OPTIONS[picker][0]);
    choice2->setText(BASIC_IT_MULTIPLE_CHOICE_OPTIONS[picker][1]);
    choice3->setText(BASIC_IT_MULTIPLE_CHOICE_OPTIONS[picker][2]);
    choice4->setText(BASIC_IT_MULTIPLE_CHOICE_OPTIONS[picker][3]);

    QGridLayout * box = new QGridLayout;

    box->addWidget(choice1, 0, 0);
    box->addWidget(choice2, 0, 1);
    box->addWidget(choice3, 1, 0);
    box->addWidget(choice4, 1, 1);

    ui->selectionArea->setLayout(box);

}

GapFill::GapFill() {
    ui->title->setText("FILL THE GAPS");
    picker = qrand() % 20;
    QFont font_size("Avenir", 24, QFont::Cursive);
    ui->assignment->setFont(font_size);
    ui->assignment->setText(BASIC_IT_GAP_FILL_TASKS[picker]);

    first_gap = new QGroupBox(ui->selectionArea);
    second_gap = new QGroupBox(ui->selectionArea);

    QHBoxLayout * align_gaps = new QHBoxLayout;

    align_gaps->addWidget(first_gap);
    align_gaps->addWidget(second_gap);
    ui->selectionArea->setLayout(align_gaps);

    first_gap_choice1 = new QRadioButton(first_gap);
    first_gap_choice2 = new QRadioButton(first_gap);
    first_gap_choice3 = new QRadioButton(first_gap);
    first_gap_choice4 = new QRadioButton(first_gap);

    second_gap_choice1 = new QRadioButton(second_gap);
    second_gap_choice2 = new QRadioButton(second_gap);
    second_gap_choice3 = new QRadioButton(second_gap);
    second_gap_choice4 = new QRadioButton(second_gap);

    first_gap_choice1->setText(BASIC_IT_FIRST_GAP_FILL_OPTIONS[picker][0]);
    first_gap_choice2->setText(BASIC_IT_FIRST_GAP_FILL_OPTIONS[picker][1]);
    first_gap_choice3->setText(BASIC_IT_FIRST_GAP_FILL_OPTIONS[picker][2]);
    first_gap_choice4->setText(BASIC_IT_FIRST_GAP_FILL_OPTIONS[picker][3]);

    second_gap_choice1->setText(BASIC_IT_SECOND_GAP_FILL_OPTIONS[picker][0]);
    second_gap_choice2->setText(BASIC_IT_SECOND_GAP_FILL_OPTIONS[picker][1]);
    second_gap_choice3->setText(BASIC_IT_SECOND_GAP_FILL_OPTIONS[picker][2]);
    second_gap_choice4->setText(BASIC_IT_SECOND_GAP_FILL_OPTIONS[picker][3]);

    QVBoxLayout * align_first_gap_choices = new QVBoxLayout;
    QVBoxLayout * align_second_gap_choices = new QVBoxLayout;

    align_first_gap_choices->addWidget(first_gap_choice1);
    align_first_gap_choices->addWidget(first_gap_choice2);
    align_first_gap_choices->addWidget(first_gap_choice3);
    align_first_gap_choices->addWidget(first_gap_choice4);

    align_second_gap_choices->addWidget(second_gap_choice1);
    align_second_gap_choices->addWidget(second_gap_choice2);
    align_second_gap_choices->addWidget(second_gap_choice3);
    align_second_gap_choices->addWidget(second_gap_choice4);

    first_gap->setLayout(align_first_gap_choices);
    second_gap->setLayout(align_second_gap_choices);

}

Pair::Pair() {
    ui->title->setText("MATCH THE WORDS");
    ui->assignment->hide();

    toggle1 = new QPushButton(ui->selectionArea);
    toggle2 = new QPushButton(ui->selectionArea);
    toggle3 = new QPushButton(ui->selectionArea);
    toggle4 = new QPushButton(ui->selectionArea);
    toggle5 = new QPushButton(ui->selectionArea);
    toggle6 = new QPushButton(ui->selectionArea);
    toggle7 = new QPushButton(ui->selectionArea);
    toggle8 = new QPushButton(ui->selectionArea);
    toggle9 = new QPushButton(ui->selectionArea);
    toggle10 = new QPushButton(ui->selectionArea);
    toggle11 = new QPushButton(ui->selectionArea);
    toggle12 = new QPushButton(ui->selectionArea);

    toggle1->setText(BASIC_IT_PAIR_TASKS[0][0]);
    toggle2->setText(BASIC_IT_PAIR_TASKS[0][1]);
    toggle3->setText(BASIC_IT_PAIR_TASKS[0][2]);
    toggle4->setText(BASIC_IT_PAIR_TASKS[0][3]);
    toggle5->setText(BASIC_IT_PAIR_TASKS[0][4]);
    toggle6->setText(BASIC_IT_PAIR_TASKS[0][5]);
    toggle7->setText(BASIC_IT_PAIR_TASKS[0][6]);
    toggle8->setText(BASIC_IT_PAIR_TASKS[0][7]);
    toggle9->setText(BASIC_IT_PAIR_TASKS[0][8]);
    toggle10->setText(BASIC_IT_PAIR_TASKS[0][9]);
    toggle11->setText(BASIC_IT_PAIR_TASKS[0][10]);
    toggle12->setText(BASIC_IT_PAIR_TASKS[0][11]);


    QGridLayout * grid = new QGridLayout;

    grid->addWidget(toggle1, 0, 0);
    grid->addWidget(toggle2, 0, 1);
    grid->addWidget(toggle3, 0, 2);
    grid->addWidget(toggle4, 0, 3);
    grid->addWidget(toggle5, 1,  0);
    grid->addWidget(toggle6, 1, 1);
    grid->addWidget(toggle7, 1, 2);
    grid->addWidget(toggle8, 1, 3);
    grid->addWidget(toggle9, 2, 0);
    grid->addWidget(toggle10, 2, 1);
    grid->addWidget(toggle11, 2, 2);
    grid->addWidget(toggle12, 2, 3);

    ui->selectionArea->setLayout(grid);

}

TaskInstance::~TaskInstance() {
    delete ui;
}
