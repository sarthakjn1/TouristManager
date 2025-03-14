#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addpackage.h"
#include "registertourist.h"
#include "findpackage.h"
#include "findtourist.h"
#include "dbheader.h"

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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    QSqlQueryModel *model;
    AddPackage *ptrAddPackage;
    RegisterTourist *ptrRegisterTourist;
    FindPackage *ptrFindPackage;
    FindTourist *ptrFindTourist;
};
#endif // MAINWINDOW_H
