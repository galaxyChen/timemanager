#ifndef TASKBOX_H
#define TASKBOX_H

#include <QGroupBox>

namespace Ui {
class taskbox;
}
//a
class taskbox : public QGroupBox
{
    Q_OBJECT

public:
    explicit taskbox(QWidget *parent = 0);
    ~taskbox();

private:
    Ui::taskbox *ui;
};

#endif // TASKBOX_H
