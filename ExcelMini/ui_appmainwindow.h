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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppMainWindow
{
public:
    QAction *actionAbrir;
    QAction *actionGuardar;
    QAction *actionSalir;
    QAction *actionColumna;
    QAction *actionFila;
    QAction *actionP_gina;
    QAction *actionAcerca_de;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *line_functionEntry;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QMenu *menuInsertar;
    QMenu *menuAyuda;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AppMainWindow)
    {
        if (AppMainWindow->objectName().isEmpty())
            AppMainWindow->setObjectName(QStringLiteral("AppMainWindow"));
        AppMainWindow->resize(576, 345);
        actionAbrir = new QAction(AppMainWindow);
        actionAbrir->setObjectName(QStringLiteral("actionAbrir"));
        actionGuardar = new QAction(AppMainWindow);
        actionGuardar->setObjectName(QStringLiteral("actionGuardar"));
        actionSalir = new QAction(AppMainWindow);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        actionColumna = new QAction(AppMainWindow);
        actionColumna->setObjectName(QStringLiteral("actionColumna"));
        actionFila = new QAction(AppMainWindow);
        actionFila->setObjectName(QStringLiteral("actionFila"));
        actionP_gina = new QAction(AppMainWindow);
        actionP_gina->setObjectName(QStringLiteral("actionP_gina"));
        actionAcerca_de = new QAction(AppMainWindow);
        actionAcerca_de->setObjectName(QStringLiteral("actionAcerca_de"));
        centralWidget = new QWidget(AppMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 2, 0, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        line_functionEntry = new QLineEdit(centralWidget);
        line_functionEntry->setObjectName(QStringLiteral("line_functionEntry"));

        horizontalLayout->addWidget(line_functionEntry);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        AppMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AppMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 576, 21));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuInsertar = new QMenu(menuBar);
        menuInsertar->setObjectName(QStringLiteral("menuInsertar"));
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName(QStringLiteral("menuAyuda"));
        AppMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AppMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AppMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AppMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AppMainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuBar->addAction(menuInsertar->menuAction());
        menuBar->addAction(menuAyuda->menuAction());
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addAction(actionGuardar);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionSalir);
        menuInsertar->addAction(actionColumna);
        menuInsertar->addAction(actionFila);
        menuInsertar->addSeparator();
        menuInsertar->addAction(actionP_gina);
        menuAyuda->addAction(actionAcerca_de);

        retranslateUi(AppMainWindow);

        QMetaObject::connectSlotsByName(AppMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AppMainWindow)
    {
        AppMainWindow->setWindowTitle(QApplication::translate("AppMainWindow", "AppMainWindow", 0));
        actionAbrir->setText(QApplication::translate("AppMainWindow", "Abrir", 0));
        actionGuardar->setText(QApplication::translate("AppMainWindow", "Guardar", 0));
        actionSalir->setText(QApplication::translate("AppMainWindow", "Salir", 0));
        actionColumna->setText(QApplication::translate("AppMainWindow", "Columna", 0));
        actionFila->setText(QApplication::translate("AppMainWindow", "Fila", 0));
        actionP_gina->setText(QApplication::translate("AppMainWindow", "P\303\241gina", 0));
        actionAcerca_de->setText(QApplication::translate("AppMainWindow", "Acerca de...", 0));
        label->setText(QApplication::translate("AppMainWindow", "Celda:", 0));
        pushButton->setText(QApplication::translate("AppMainWindow", "PushButton", 0));
        menuArchivo->setTitle(QApplication::translate("AppMainWindow", "Archivo", 0));
        menuInsertar->setTitle(QApplication::translate("AppMainWindow", "Insertar", 0));
        menuAyuda->setTitle(QApplication::translate("AppMainWindow", "Ayuda", 0));
    } // retranslateUi

};

namespace Ui {
    class AppMainWindow: public Ui_AppMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPMAINWINDOW_H
