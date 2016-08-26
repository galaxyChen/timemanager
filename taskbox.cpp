#include "taskbox.h"
#include "ui_taskbox.h"

taskbox::taskbox(QWidget *parent) :
    QGroupBox(parent),
    ui(new Ui::taskbox)
{
    ui->setupUi(this);
}

taskbox::~taskbox()
{
    delete ui;
}
