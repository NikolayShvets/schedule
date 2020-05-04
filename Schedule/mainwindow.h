#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableView>
#include <QMenu>
#include <QString>
#include "dbmanager.h"

//https://evileg.com/ru/knowledge/qt/
//http://www.sql-tutorial.ru/ru/book_simple_select_statement.html
//в третьей нормальной форме
/*
 * CREATE TABLE study_group(
id integer primary key autoincrement,
number text not null);
CREATE TABLE sqlite_sequence(name,seq);
CREATE TABLE professor(
id integer primary key autoincrement,
name text not null);
CREATE TABLE subject(
id integer primary key autoincrement,
name text not null);
CREATE TABLE subject_type(
id integer primary key autoincrement,
name text not null);
CREATE TABLE schedule(
id integer primary key autoincrement,
study_group integer not null,
subject integer not null,
subject_type integer not null,
professor integer not null,
foreign key (study_group) references study_group(id),
foreign key (subject) references subject(id),
foreign key (subject_type) references subject_type(id),
foreign key (professor) references professor(id));

*/

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void addNote(QTableView *table);
private slots:
    void on_addNotePushButton_clicked();
    void on_delNotePushButton_clicked();
    void on_savePushButton_clicked();
    void on_findPushButton_clicked();

private:
    Ui::MainWindow *ui;
    dbManager *dbm;
    void createUI(QSqlRelationalTableModel* model, QTableView *table);
    QString buildRequest();
};
#endif // MAINWINDOW_H
