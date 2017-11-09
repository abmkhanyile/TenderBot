#ifndef LOGIN_DAILOGUE_H
#define LOGIN_DAILOGUE_H

#include <QDialog>

namespace Ui {
class Login_dailogue;
}

class Login_dailogue : public QDialog
{
    Q_OBJECT

public:
    explicit Login_dailogue(QWidget *parent = 0);
    ~Login_dailogue();

private:
    Ui::Login_dailogue *ui;
};

#endif // LOGIN_DAILOGUE_H
