#include "dbmanager.h"

//конструктор по умолчанию
dbManager::dbManager()
{
    qm = new QSqlQueryModel();
    q = new QSqlQuery();
}

//метод получения списка таблиц базы данных
QStringList dbManager::getTables()
{
    return this->db.tables();
}

//метод подключения к базе данных. Возвращает 1 при успешном подключении
int dbManager::connectToDB()
{
    this->db = QSqlDatabase::addDatabase("QSQLITE");
    this->db.setDatabaseName("schedule.db");
    if(!this->db.open()){
        qDebug()<<"Connection to database failed. " + this->db.lastError().text();
        qDebug()<<db.tables();
        return 0;
    }else{
        qDebug()<<"Connection succesful. ";
        return 1;
    }
}

int dbManager::doModelRequest(const QString &request)
{
    qm->setQuery(request);
    return 1;
}

//метод, собирающий модели таблиц базы данных для табличного представления
//в QTableview
vector<QSqlRelationalTableModel*> dbManager::setupModels()
{
    vector <QSqlRelationalTableModel*> models;
    const QStringList tablesNames{getTables()};
    for(const auto &elem : tablesNames){
        QSqlRelationalTableModel *model = new QSqlRelationalTableModel();
        model->setTable(elem);
        if(elem == "schedule"){
            model->setRelation(1, QSqlRelation("study_group","id","number"));
            model->setRelation(2, QSqlRelation("subject","id","name"));
            model->setRelation(3, QSqlRelation("subject_type","id","name"));
            model->setRelation(4, QSqlRelation("professor","id","name"));
        }
        model->setEditStrategy(QSqlTableModel::OnRowChange);
        for(int i = 0, j = 0; i < model->columnCount(); i++, j++){
            model->setSort(0, Qt::AscendingOrder);
        }
        model->select();
        models.push_back(model);
    }
    return models;
}


