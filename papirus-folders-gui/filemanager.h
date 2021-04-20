#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QDialog>

namespace Ui {
class filemanager;
}

class filemanager : public QDialog
{
    Q_OBJECT

public:
    explicit filemanager(QWidget *parent = nullptr);
    ~filemanager();

private:
    Ui::filemanager *ui;
};

#endif // FILEMANAGER_H
