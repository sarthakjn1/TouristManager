#include "registertourist.h"
#include "ui_registertourist.h"
#include "dbheader.h"
#include <QDebug>
#include "env.h"

RegisterTourist::RegisterTourist(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterTourist), model(nullptr)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(DB_PATH);     // Database name

    // Step 2: Open the database connection
    if (QFile::exists(DB_PATH)) {
        qDebug() << "DB file exists.";
    }
    else{
        qDebug() << "DB file does not exists.";
    }

    if (!db.open()){
        qDebug() << "Error: Unable to open database.";
        return;
    }

    QSqlQuery packagequery(db);

    packagequery.prepare("SELECT packageName FROM package");

    if (!packagequery.exec()) {
        qDebug() << "Error: Could not execute query.";
        qDebug() << packagequery.lastError().text(); // Print the specific query error
        return;
    }


    // Iterate through the query results and add items to the combo box
    while (packagequery.next()) {
        QString itemName = packagequery.value("packageName").toString();
        qDebug() << itemName;
        ui->cmbChoosePackage->addItem(itemName);
    }
}

RegisterTourist::~RegisterTourist()
{
    delete ui;
}

void RegisterTourist::on_btnSave_clicked()
{
    QString firstName = ui->txtFirstName->text();
    QString middleName = ui->txtMiddleName->text();
    QString lastName = ui->txtLastName->text();
    QString address = ui->txtAddress->text();
    QString contactNo = ui->txtContactNo->text();

    QString packageName = ui->cmbChoosePackage->currentText();

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(DB_PATH);

    if (QFile::exists(DB_PATH)) {
        qDebug() << "DB file exists.";
    }
    else{
        qDebug() << "DB file does not exists.";
    }

    if (!db.open()){
        qDebug() << "Error: Unable to open database.";
        return;
    }

    QSqlQuery query(db);
    query.prepare("INSERT INTO tourist (FirstName, MiddleName, LastName, Address, ContactNo, packageName) "
                  "VALUES (:firstName, :middleName, :lastName, :address, :contactNo, :packageName)");

    query.bindValue(":firstName", firstName);
    query.bindValue(":middleName", middleName);
    query.bindValue(":lastName", lastName);
    query.bindValue(":address", address);
    query.bindValue(":contactNo", contactNo);
    query.bindValue(":packageName", packageName);

    query.exec();

    qDebug() << "Error: " << query.lastError().text();
    db.close();
}

