#ifndef CREDITS_H
#define CREDITS_H

#include <QDialog>

namespace Ui {
class credits;
}

class credits : public QDialog
{
    Q_OBJECT

public:
    explicit credits(QWidget *parent = nullptr);
    ~credits();

private:
    Ui::credits *ui;
};

#endif // CREDITS_H
