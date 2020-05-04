/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_6;
    QGroupBox *scheduleGroupBox;
    QGridLayout *gridLayout_2;
    QFrame *line;
    QLabel *findLabel;
    QTableView *scheduleTableView;
    QPushButton *findPushButton;
    QPushButton *addNotePushButton;
    QPushButton *savePushButton;
    QPushButton *delNotePushButton;
    QComboBox *entityComboBox;
    QGroupBox *data;
    QGridLayout *gridLayout;
    QGroupBox *professorsGroupBox;
    QGridLayout *gridLayout_3;
    QTableView *professorsTableView;
    QGroupBox *studyGroupsGroupBox;
    QGridLayout *gridLayout_4;
    QTableView *studyGroupsTableView;
    QGroupBox *subjectsGroupBox;
    QGridLayout *gridLayout_5;
    QTableView *subjectsTableView;
    QGroupBox *subjectTypesGroupBox;
    QGridLayout *gridLayout_7;
    QTableView *subjectTypesTableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_6 = new QGridLayout(centralwidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        scheduleGroupBox = new QGroupBox(centralwidget);
        scheduleGroupBox->setObjectName(QString::fromUtf8("scheduleGroupBox"));
        gridLayout_2 = new QGridLayout(scheduleGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        line = new QFrame(scheduleGroupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 0, 3, 1, 1);

        findLabel = new QLabel(scheduleGroupBox);
        findLabel->setObjectName(QString::fromUtf8("findLabel"));

        gridLayout_2->addWidget(findLabel, 0, 0, 1, 1);

        scheduleTableView = new QTableView(scheduleGroupBox);
        scheduleTableView->setObjectName(QString::fromUtf8("scheduleTableView"));

        gridLayout_2->addWidget(scheduleTableView, 1, 0, 1, 7);

        findPushButton = new QPushButton(scheduleGroupBox);
        findPushButton->setObjectName(QString::fromUtf8("findPushButton"));

        gridLayout_2->addWidget(findPushButton, 0, 2, 1, 1);

        addNotePushButton = new QPushButton(scheduleGroupBox);
        addNotePushButton->setObjectName(QString::fromUtf8("addNotePushButton"));

        gridLayout_2->addWidget(addNotePushButton, 0, 4, 1, 1);

        savePushButton = new QPushButton(scheduleGroupBox);
        savePushButton->setObjectName(QString::fromUtf8("savePushButton"));

        gridLayout_2->addWidget(savePushButton, 0, 6, 1, 1);

        delNotePushButton = new QPushButton(scheduleGroupBox);
        delNotePushButton->setObjectName(QString::fromUtf8("delNotePushButton"));

        gridLayout_2->addWidget(delNotePushButton, 0, 5, 1, 1);

        entityComboBox = new QComboBox(scheduleGroupBox);
        entityComboBox->setObjectName(QString::fromUtf8("entityComboBox"));

        gridLayout_2->addWidget(entityComboBox, 0, 1, 1, 1);


        gridLayout_6->addWidget(scheduleGroupBox, 1, 0, 1, 1);

        data = new QGroupBox(centralwidget);
        data->setObjectName(QString::fromUtf8("data"));
        gridLayout = new QGridLayout(data);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        professorsGroupBox = new QGroupBox(data);
        professorsGroupBox->setObjectName(QString::fromUtf8("professorsGroupBox"));
        gridLayout_3 = new QGridLayout(professorsGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        professorsTableView = new QTableView(professorsGroupBox);
        professorsTableView->setObjectName(QString::fromUtf8("professorsTableView"));

        gridLayout_3->addWidget(professorsTableView, 0, 0, 1, 1);


        gridLayout->addWidget(professorsGroupBox, 0, 0, 1, 1);

        studyGroupsGroupBox = new QGroupBox(data);
        studyGroupsGroupBox->setObjectName(QString::fromUtf8("studyGroupsGroupBox"));
        gridLayout_4 = new QGridLayout(studyGroupsGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        studyGroupsTableView = new QTableView(studyGroupsGroupBox);
        studyGroupsTableView->setObjectName(QString::fromUtf8("studyGroupsTableView"));

        gridLayout_4->addWidget(studyGroupsTableView, 0, 0, 1, 1);


        gridLayout->addWidget(studyGroupsGroupBox, 0, 1, 1, 1);

        subjectsGroupBox = new QGroupBox(data);
        subjectsGroupBox->setObjectName(QString::fromUtf8("subjectsGroupBox"));
        gridLayout_5 = new QGridLayout(subjectsGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        subjectsTableView = new QTableView(subjectsGroupBox);
        subjectsTableView->setObjectName(QString::fromUtf8("subjectsTableView"));

        gridLayout_5->addWidget(subjectsTableView, 0, 0, 1, 1);


        gridLayout->addWidget(subjectsGroupBox, 0, 2, 1, 1);

        subjectTypesGroupBox = new QGroupBox(data);
        subjectTypesGroupBox->setObjectName(QString::fromUtf8("subjectTypesGroupBox"));
        gridLayout_7 = new QGridLayout(subjectTypesGroupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        subjectTypesTableView = new QTableView(subjectTypesGroupBox);
        subjectTypesTableView->setObjectName(QString::fromUtf8("subjectTypesTableView"));

        gridLayout_7->addWidget(subjectTypesTableView, 0, 0, 1, 1);


        gridLayout->addWidget(subjectTypesGroupBox, 0, 3, 1, 1);


        gridLayout_6->addWidget(data, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\320\265\320\264\320\266\320\265\321\200 \321\200\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\321\217", nullptr));
        scheduleGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\320\270\320\260\320\275\320\270\320\265", nullptr));
        findLabel->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\262\321\201\320\265\321\205 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\320\265\320\271 \320\263\321\200\321\203\320\277\320\277\321\213:", nullptr));
        findPushButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        addNotePushButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        savePushButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        delNotePushButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        data->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265", nullptr));
        professorsGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\320\270", nullptr));
        studyGroupsGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\243\321\207\320\265\320\261\320\275\321\213\320\265 \320\263\321\200\321\203\320\277\320\277\321\213", nullptr));
        subjectsGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202\321\213", nullptr));
        subjectTypesGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277\321\213 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
