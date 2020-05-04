#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->dbm = new dbManager();
    dbm->connectToDB();
    qDebug()<<dbm->getTables();
    vector<QSqlRelationalTableModel *> models = dbm->setupModels();
    createUI(models.at(0), this->ui->studyGroupsTableView);
    createUI(models.at(2), this->ui->professorsTableView);
    createUI(models.at(3), this->ui->subjectsTableView);
    createUI(models.at(4), this->ui->subjectTypesTableView);
    createUI(models.at(5), this->ui->scheduleTableView);
    for(int i = 0; i < models.at(0)->rowCount(); i++){
        ui->entityComboBox->addItem(models.at(0)->index(i,1).data().toString());
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addNote(QTableView *table)
{
    int row = table->selectionModel()->currentIndex().row() + 1;
    table->model()->insertRow(row);
}

//метод, настраивающий таблицы на форме в соответствии с моделью из БД
void MainWindow::createUI(QSqlRelationalTableModel* model, QTableView *table)
{
    table->setModel(model);
    table->setItemDelegate(new QSqlRelationalDelegate(table));
    table->setColumnHidden(0, true);
    table->setSelectionBehavior(QAbstractItemView::SelectRows);
    table->setSelectionMode(QAbstractItemView::SingleSelection);
    table->setEditTriggers(QAbstractItemView::SelectedClicked);
    table->horizontalHeader()->setStretchLastSection(true);
    model->select();
    table->resizeColumnsToContents();
}

QString MainWindow::buildRequest()
{
    return  "SELECT id, name FROM professor WHERE id IN (SELECT professor FROM schedule WHERE study_group = '" + QString::number(this->ui->entityComboBox->currentIndex() + 1) + "')";
}


void MainWindow::on_addNotePushButton_clicked()
{
    int row = ui->scheduleTableView->selectionModel()->currentIndex().row() + 1;
    ui->scheduleTableView->model()->insertRow(row);
    ui->scheduleTableView->resizeColumnsToContents();
}

void MainWindow::on_delNotePushButton_clicked()
{
    this->ui->scheduleTableView->model()->removeRow(ui->scheduleTableView->selectionModel()->currentIndex().row());
    ui->scheduleTableView->resizeColumnsToContents();
}

void MainWindow::on_savePushButton_clicked()
{
    if(!this->ui->scheduleTableView->model()->submit()){
        qDebug()<<"Error";
    }
    ui->scheduleTableView->resizeColumnsToContents();
}

void MainWindow::on_findPushButton_clicked()
{
    QSqlQueryModel *qm = new QSqlQueryModel();
    qm->setQuery(buildRequest());
    this->ui->scheduleTableView->setModel(qm);
    this->ui->scheduleTableView->resizeColumnsToContents();
}
