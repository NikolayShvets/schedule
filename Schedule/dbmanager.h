#ifndef DBMANAGER_H
#define DBMANAGER_H

/*
 * Класс, отвечающий за взаимодействие с базой данных
 * */

#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlRecord>
#include <vector>
using namespace std;

class dbManager
{
private:
    QSqlDatabase db;
public:
    dbManager();
    QStringList getTables();
    int connectToDB();
    int doModelRequest(const QString &request);
    vector<QSqlRelationalTableModel*> setupModels();
    QSqlQueryModel *qm;
    QSqlQuery *q;
    QSqlRecord rec;
};

#endif // DBMANAGER_H
