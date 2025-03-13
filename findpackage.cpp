#include "findpackage.h"
#include "ui_findpackage.h"
#include "dbheader.h"
#include "env.h"

FindPackage::FindPackage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FindPackage), model(nullptr)
{
    ui->setupUi(this);
}

FindPackage::~FindPackage()
{
    delete ui;
    delete model;
}

void FindPackage::on_btnFindPackage_clicked()
{
    QString packageName = ui->txtPackageName->text();
    qDebug() << "PackageName: " << packageName;

    // Step 1: Set up the database connection
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(DB_PATH); // Database path

    // Step 2: Check if the database file exists
    if (QFile::exists(DB_PATH)) {
        qDebug() << "DB file exists.";
    } else {
        qDebug() << "DB file does not exist.";
        return; // Exit if the database file doesn't exist
    }

    // Step 3: Open the database connection
    if (!db.open()) {
        qDebug() << "Error: Unable to open database.";
        qDebug() << db.lastError().text(); // Print the specific database error
        return;
    }

    // Step 4: Prepare and execute the query
    QSqlQuery query;
    query.prepare("SELECT packageName, packageDescription, Amount FROM package "
                  "WHERE packageName LIKE :packageNameLike");
    query.bindValue(":packageNameLike", "%" + packageName + "%");

    if (!query.exec()) {
        qDebug() << "Error: Could not execute query.";
        qDebug() << query.lastError().text(); // Print the specific query error
        return;
    }

    // Step 5: Set up the model and display the results in the table view
    if (model == nullptr) {
        model = new QSqlQueryModel(this); // Use `this` for proper parent-child relationship
    }

    model->setQuery(query); // Use the query object directly
    ui->tableViewPackage->setModel(model);

    // Step 6: Adjust column widths
    ui->tableViewPackage->setColumnWidth(0, 200); // Adjust width for column 0 (packageName)
    ui->tableViewPackage->setColumnWidth(1, 200); // Adjust width for column 1 (packageDescription)
    ui->tableViewPackage->setColumnWidth(2, 200); // Adjust width for column 2 (Amount)

    db.close();

}

