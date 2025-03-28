#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_countButton_clicked();

    void on_resetButton_clicked();

    void on_numberLineEdit_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    int number = 0;
signals:
    void numberIncreaseSignal();
};
#endif // MAINWINDOW_H
