#include "dice_poker.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dice_poker w;
    w.show();

    return a.exec();
}
