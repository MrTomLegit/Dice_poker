#include "dice_poker.h"
#include "ui_dice_poker.h"

Dice_poker::Dice_poker(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dice_poker)
{
    ui->setupUi(this);
}

Dice_poker::~Dice_poker()
{
    delete ui;
}
