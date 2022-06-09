#ifndef TETRIX_H
#define TETRIX_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class tetrix; }
QT_END_NAMESPACE

class tetrix : public QMainWindow
{
    Q_OBJECT

public:
    tetrix(QWidget *parent = nullptr);
    ~tetrix();

private:
    Ui::tetrix *ui;
};
#endif // TETRIX_H
