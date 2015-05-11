#ifndef DICE_POKER_H
#define DICE_POKER_H

#include <QMainWindow>

namespace Ui {
class Dice_poker;
}

class Dice_poker : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dice_poker(QWidget *parent = 0);
    ~Dice_poker();

private:
    Ui::Dice_poker *ui;
};

#endif // DICE_POKER_H
