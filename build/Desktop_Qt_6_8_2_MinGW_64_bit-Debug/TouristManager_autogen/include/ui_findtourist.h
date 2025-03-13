/********************************************************************************
** Form generated from reading UI file 'findtourist.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDTOURIST_H
#define UI_FINDTOURIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_FindTourist
{
public:
    QLabel *label;
    QLineEdit *txtTouristName;
    QPushButton *btnFindTourist;
    QTableView *tableViewTourist;

    void setupUi(QDialog *FindTourist)
    {
        if (FindTourist->objectName().isEmpty())
            FindTourist->setObjectName("FindTourist");
        FindTourist->resize(400, 300);
        FindTourist->setMaximumSize(QSize(400, 300));
        label = new QLabel(FindTourist);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 101, 20));
        txtTouristName = new QLineEdit(FindTourist);
        txtTouristName->setObjectName("txtTouristName");
        txtTouristName->setGeometry(QRect(130, 20, 141, 26));
        btnFindTourist = new QPushButton(FindTourist);
        btnFindTourist->setObjectName("btnFindTourist");
        btnFindTourist->setGeometry(QRect(290, 20, 93, 29));
        tableViewTourist = new QTableView(FindTourist);
        tableViewTourist->setObjectName("tableViewTourist");
        tableViewTourist->setGeometry(QRect(30, 80, 331, 192));

        retranslateUi(FindTourist);

        QMetaObject::connectSlotsByName(FindTourist);
    } // setupUi

    void retranslateUi(QDialog *FindTourist)
    {
        FindTourist->setWindowTitle(QCoreApplication::translate("FindTourist", "Find Tourist", nullptr));
        label->setText(QCoreApplication::translate("FindTourist", "Tourist Name:", nullptr));
        btnFindTourist->setText(QCoreApplication::translate("FindTourist", "Find Tourist", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindTourist: public Ui_FindTourist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDTOURIST_H
