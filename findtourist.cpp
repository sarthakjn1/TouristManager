#include "findtourist.h"
#include "ui_findtourist.h"
#include "dbheader.h"
#include "env.h"

FindTourist::FindTourist(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FindTourist), model(nullptr)
{
    ui->setupUi(this);
}

FindTourist::~FindTourist()
{
    delete ui;
    delete model;
}

void FindTourist::on_btnFindTourist_clicked()
{
    QString touristFirstName = ui->txtTouristName->text();

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
    query.prepare("SELECT FirstName, MiddleName, LastName, ContactNo, Address, PackageName FROM tourist "
                  "WHERE FirstName LIKE :touristNameLike");
    query.bindValue(":touristNameLike", "%" + touristFirstName + "%");

    if (!query.exec()) {
        qDebug() << "Error: Could not execute query.";
        qDebug() << query.lastError().text(); // Print the specific query error
        return;
    }

    // Step 5: Set up the model and display the results in the table view
    if (model == nullptr) {
        model = new QSqlQueryModel(this); // Use `this` for proper parent-child relationship
    }

    model->setQuery(std::move(query)); // Use the query object directly
    ui->tableViewTourist->setModel(model);

    // Step 6: Adjust column widths
    ui->tableViewTourist->setColumnWidth(0, 200); // Adjust width for column 0
    ui->tableViewTourist->setColumnWidth(1, 200); // Adjust width for column 1
    ui->tableViewTourist->setColumnWidth(2, 200); // Adjust width for column 2
    ui->tableViewTourist->setColumnWidth(3, 200); // Adjust width for column 3
    ui->tableViewTourist->setColumnWidth(4, 200); // Adjust width for column 4
    ui->tableViewTourist->setColumnWidth(5, 200); // Adjust width for column 5

    db.close();

}

