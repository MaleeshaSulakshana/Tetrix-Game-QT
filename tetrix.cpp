#include "tetrix.h"
#include "ui_tetrix.h"

tetrix::tetrix(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tetrix)
{
    ui->setupUi(this);
}

tetrix::~tetrix()
{
    delete ui;
}

