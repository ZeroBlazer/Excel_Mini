/********************************************************************************
** Form generated from reading UI file 'appmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPMAINWINDOW_H
#define UI_APPMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppMainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AppMainWindow)
    {
        if (AppMainWindow->objectName().isEmpty())
            AppMainWindow->setObjectName(QStringLiteral("AppMainWindow"));
        AppMainWindow->resize(576, 345);
        centralWidget = new QWidget(AppMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 1);

        AppMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AppMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 576, 21));
        AppMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AppMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AppMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AppMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AppMainWindow->setStatusBar(statusBar);

        retranslateUi(AppMainWindow);

        QMetaObject::connectSlotsByName(AppMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AppMainWindow)
    {
        AppMainWindow->setWindowTitle(QApplication::translate("AppMainWindow", "AppMainWindow", 0));
        label->setText(QApplication::translate("AppMainWindow", "Celda:", 0));
    } // retranslateUi

};

namespace Ui {
    class AppMainWindow: public Ui_AppMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPMAINWINDOW_H
