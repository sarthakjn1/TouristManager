#include "addpackage.h"
#include "ui_addpackage.h"
#include "dbheader.h"
#include "env.h"


AddPackage::AddPackage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddPackage)
{
    ui->setupUi(this);
}

AddPackage::~AddPackage()
{
    delete ui;
}

void AddPackage::on_btnSave_clicked()
{
    QString packageName = ui->txtPackageName->text();
    QString packageDescription = ui->txtDescription->toPlainText();
    QString amount = ui->txtAmount->text();

    qDebug() << "PackageName: " << packageName;

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

    QSqlQuery query(db);

    query.prepare("INSERT INTO package (packageName, packageDescription, Amount) "
                  "VALUES (:packageName, :packageDescription, :amount)");

    query.bindValue(":packageName", packageName);
    query.bindValue(":packageDescription", packageDescription);
    query.bindValue(":amount", amount);

    query.exec();

    qDebug() << "Error: " << query.lastError().text();
    db.close();

}

