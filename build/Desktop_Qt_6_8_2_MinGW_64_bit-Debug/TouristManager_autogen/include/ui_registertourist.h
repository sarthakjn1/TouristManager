/********************************************************************************
** Form generated from reading UI file 'registertourist.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERTOURIST_H
#define UI_REGISTERTOURIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterTourist
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtFirstName;
    QLabel *label_2;
    QLineEdit *txtMiddleName;
    QLabel *label_3;
    QLineEdit *txtLastName;
    QLabel *label_4;
    QLineEdit *txtContactNo;
    QLabel *label_6;
    QLineEdit *txtAddress;
    QLabel *label_7;
    QComboBox *cmbChoosePackage;
    QTextEdit *txtPackageDescription;
    QPushButton *btnSave;
    QPushButton *btnReset;

    void setupUi(QDialog *RegisterTourist)
    {
        if (RegisterTourist->objectName().isEmpty())
            RegisterTourist->setObjectName("RegisterTourist");
        RegisterTourist->resize(400, 350);
        RegisterTourist->setMaximumSize(QSize(400, 400));
        formLayoutWidget = new QWidget(RegisterTourist);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(30, 10, 351, 275));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(350, 250));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtFirstName = new QLineEdit(formLayoutWidget);
        txtFirstName->setObjectName("txtFirstName");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtFirstName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtMiddleName = new QLineEdit(formLayoutWidget);
        txtMiddleName->setObjectName("txtMiddleName");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtMiddleName);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtLastName = new QLineEdit(formLayoutWidget);
        txtLastName->setObjectName("txtLastName");

        formLayout->setWidget(2, QFormLayout::FieldRole, txtLastName);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        txtContactNo = new QLineEdit(formLayoutWidget);
        txtContactNo->setObjectName("txtContactNo");

        formLayout->setWidget(3, QFormLayout::FieldRole, txtContactNo);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        txtAddress = new QLineEdit(formLayoutWidget);
        txtAddress->setObjectName("txtAddress");

        formLayout->setWidget(4, QFormLayout::FieldRole, txtAddress);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        cmbChoosePackage = new QComboBox(formLayoutWidget);
        cmbChoosePackage->setObjectName("cmbChoosePackage");

        formLayout->setWidget(5, QFormLayout::FieldRole, cmbChoosePackage);

        txtPackageDescription = new QTextEdit(formLayoutWidget);
        txtPackageDescription->setObjectName("txtPackageDescription");

        formLayout->setWidget(6, QFormLayout::FieldRole, txtPackageDescription);

        btnSave = new QPushButton(RegisterTourist);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(290, 310, 93, 29));
        btnReset = new QPushButton(RegisterTourist);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(170, 310, 93, 29));

        retranslateUi(RegisterTourist);

        QMetaObject::connectSlotsByName(RegisterTourist);
    } // setupUi

    void retranslateUi(QDialog *RegisterTourist)
    {
        RegisterTourist->setWindowTitle(QCoreApplication::translate("RegisterTourist", "Register Tourist", nullptr));
        label->setText(QCoreApplication::translate("RegisterTourist", "First Name:", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterTourist", "Middle Name:", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterTourist", "Last Name:", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterTourist", "Contact No.:", nullptr));
        label_6->setText(QCoreApplication::translate("RegisterTourist", "Address:", nullptr));
        label_7->setText(QCoreApplication::translate("RegisterTourist", "Choose Package:", nullptr));
        btnSave->setText(QCoreApplication::translate("RegisterTourist", "Save", nullptr));
        btnReset->setText(QCoreApplication::translate("RegisterTourist", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterTourist: public Ui_RegisterTourist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERTOURIST_H
