/********************************************************************************
** Form generated from reading UI file 'addpackage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPACKAGE_H
#define UI_ADDPACKAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPackage
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtPackageName;
    QLabel *label_2;
    QTextEdit *txtDescription;
    QLabel *label_3;
    QLineEdit *txtAmount;
    QPushButton *btnSave;
    QPushButton *btnReset;

    void setupUi(QDialog *AddPackage)
    {
        if (AddPackage->objectName().isEmpty())
            AddPackage->setObjectName("AddPackage");
        AddPackage->setWindowModality(Qt::WindowModality::WindowModal);
        AddPackage->resize(400, 300);
        AddPackage->setMaximumSize(QSize(400, 300));
        formLayoutWidget = new QWidget(AddPackage);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 30, 361, 143));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtPackageName = new QLineEdit(formLayoutWidget);
        txtPackageName->setObjectName("txtPackageName");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtPackageName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtDescription = new QTextEdit(formLayoutWidget);
        txtDescription->setObjectName("txtDescription");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtDescription);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtAmount = new QLineEdit(formLayoutWidget);
        txtAmount->setObjectName("txtAmount");

        formLayout->setWidget(2, QFormLayout::FieldRole, txtAmount);

        btnSave = new QPushButton(AddPackage);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(290, 220, 93, 29));
        btnReset = new QPushButton(AddPackage);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(180, 220, 93, 29));

        retranslateUi(AddPackage);

        QMetaObject::connectSlotsByName(AddPackage);
    } // setupUi

    void retranslateUi(QDialog *AddPackage)
    {
        AddPackage->setWindowTitle(QCoreApplication::translate("AddPackage", "Add Package", nullptr));
        label->setText(QCoreApplication::translate("AddPackage", "Package Name:", nullptr));
        label_2->setText(QCoreApplication::translate("AddPackage", "Description:", nullptr));
        label_3->setText(QCoreApplication::translate("AddPackage", "Amount:", nullptr));
        btnSave->setText(QCoreApplication::translate("AddPackage", "Save", nullptr));
        btnReset->setText(QCoreApplication::translate("AddPackage", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPackage: public Ui_AddPackage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPACKAGE_H
