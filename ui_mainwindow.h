/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pB_search;
    QLineEdit *lE_port;
    QPushButton *pB_swap;
    QPushButton *pB_Con;
    QPushButton *pB_Discon;
    QGridLayout *gridLayout;
    QHBoxLayout *hL_bR;
    QLabel *l_bR;
    QComboBox *cB_bR;
    QHBoxLayout *hL_dB;
    QLabel *l_dB;
    QComboBox *cB_dB;
    QHBoxLayout *hL_P;
    QLabel *l_P;
    QComboBox *cB_P;
    QHBoxLayout *hL_sB;
    QLabel *l_sB;
    QComboBox *cB_sB;
    QPushButton *pB_SaveSett;
    QHBoxLayout *hL_fC;
    QLabel *l_fC;
    QComboBox *cB_fC;
    QPushButton *pB_float;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lE_recieveData;
    QHBoxLayout *horizontalLayout;
    QLabel *l_sendText;
    QLineEdit *lE_sendText;
    QPushButton *pB_sendData;
    QPushButton *pushButton;
    QTextEdit *tE_receive;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1274, 754);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pB_search = new QPushButton(centralwidget);
        pB_search->setObjectName(QString::fromUtf8("pB_search"));

        horizontalLayout_2->addWidget(pB_search);

        lE_port = new QLineEdit(centralwidget);
        lE_port->setObjectName(QString::fromUtf8("lE_port"));

        horizontalLayout_2->addWidget(lE_port);

        pB_swap = new QPushButton(centralwidget);
        pB_swap->setObjectName(QString::fromUtf8("pB_swap"));

        horizontalLayout_2->addWidget(pB_swap);

        pB_Con = new QPushButton(centralwidget);
        pB_Con->setObjectName(QString::fromUtf8("pB_Con"));

        horizontalLayout_2->addWidget(pB_Con);

        pB_Discon = new QPushButton(centralwidget);
        pB_Discon->setObjectName(QString::fromUtf8("pB_Discon"));

        horizontalLayout_2->addWidget(pB_Discon);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hL_bR = new QHBoxLayout();
        hL_bR->setObjectName(QString::fromUtf8("hL_bR"));
        l_bR = new QLabel(centralwidget);
        l_bR->setObjectName(QString::fromUtf8("l_bR"));

        hL_bR->addWidget(l_bR);

        cB_bR = new QComboBox(centralwidget);
        cB_bR->addItem(QString());
        cB_bR->addItem(QString());
        cB_bR->addItem(QString());
        cB_bR->addItem(QString());
        cB_bR->addItem(QString());
        cB_bR->addItem(QString());
        cB_bR->addItem(QString());
        cB_bR->addItem(QString());
        cB_bR->setObjectName(QString::fromUtf8("cB_bR"));

        hL_bR->addWidget(cB_bR);


        gridLayout->addLayout(hL_bR, 0, 0, 1, 1);

        hL_dB = new QHBoxLayout();
        hL_dB->setObjectName(QString::fromUtf8("hL_dB"));
        l_dB = new QLabel(centralwidget);
        l_dB->setObjectName(QString::fromUtf8("l_dB"));

        hL_dB->addWidget(l_dB);

        cB_dB = new QComboBox(centralwidget);
        cB_dB->addItem(QString());
        cB_dB->addItem(QString());
        cB_dB->addItem(QString());
        cB_dB->addItem(QString());
        cB_dB->setObjectName(QString::fromUtf8("cB_dB"));

        hL_dB->addWidget(cB_dB);


        gridLayout->addLayout(hL_dB, 1, 0, 1, 1);

        hL_P = new QHBoxLayout();
        hL_P->setObjectName(QString::fromUtf8("hL_P"));
        l_P = new QLabel(centralwidget);
        l_P->setObjectName(QString::fromUtf8("l_P"));

        hL_P->addWidget(l_P);

        cB_P = new QComboBox(centralwidget);
        cB_P->addItem(QString());
        cB_P->addItem(QString());
        cB_P->addItem(QString());
        cB_P->addItem(QString());
        cB_P->addItem(QString());
        cB_P->setObjectName(QString::fromUtf8("cB_P"));

        hL_P->addWidget(cB_P);


        gridLayout->addLayout(hL_P, 2, 0, 1, 2);

        hL_sB = new QHBoxLayout();
        hL_sB->setObjectName(QString::fromUtf8("hL_sB"));
        l_sB = new QLabel(centralwidget);
        l_sB->setObjectName(QString::fromUtf8("l_sB"));

        hL_sB->addWidget(l_sB);

        cB_sB = new QComboBox(centralwidget);
        cB_sB->addItem(QString());
        cB_sB->addItem(QString());
        cB_sB->addItem(QString());
        cB_sB->setObjectName(QString::fromUtf8("cB_sB"));

        hL_sB->addWidget(cB_sB);


        gridLayout->addLayout(hL_sB, 3, 0, 1, 1);

        pB_SaveSett = new QPushButton(centralwidget);
        pB_SaveSett->setObjectName(QString::fromUtf8("pB_SaveSett"));

        gridLayout->addWidget(pB_SaveSett, 3, 1, 2, 1);

        hL_fC = new QHBoxLayout();
        hL_fC->setObjectName(QString::fromUtf8("hL_fC"));
        l_fC = new QLabel(centralwidget);
        l_fC->setObjectName(QString::fromUtf8("l_fC"));

        hL_fC->addWidget(l_fC);

        cB_fC = new QComboBox(centralwidget);
        cB_fC->addItem(QString());
        cB_fC->addItem(QString());
        cB_fC->addItem(QString());
        cB_fC->setObjectName(QString::fromUtf8("cB_fC"));

        hL_fC->addWidget(cB_fC);


        gridLayout->addLayout(hL_fC, 4, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 5, 1);

        pB_float = new QPushButton(centralwidget);
        pB_float->setObjectName(QString::fromUtf8("pB_float"));

        gridLayout_3->addWidget(pB_float, 0, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_4->addWidget(label);

        lE_recieveData = new QLineEdit(centralwidget);
        lE_recieveData->setObjectName(QString::fromUtf8("lE_recieveData"));

        horizontalLayout_4->addWidget(lE_recieveData);


        gridLayout_3->addLayout(horizontalLayout_4, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        l_sendText = new QLabel(centralwidget);
        l_sendText->setObjectName(QString::fromUtf8("l_sendText"));

        horizontalLayout->addWidget(l_sendText);

        lE_sendText = new QLineEdit(centralwidget);
        lE_sendText->setObjectName(QString::fromUtf8("lE_sendText"));

        horizontalLayout->addWidget(lE_sendText);


        gridLayout_3->addLayout(horizontalLayout, 2, 1, 1, 1);

        pB_sendData = new QPushButton(centralwidget);
        pB_sendData->setObjectName(QString::fromUtf8("pB_sendData"));

        gridLayout_3->addWidget(pB_sendData, 3, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_3->addWidget(pushButton, 4, 1, 1, 1);

        tE_receive = new QTextEdit(centralwidget);
        tE_receive->setObjectName(QString::fromUtf8("tE_receive"));
        tE_receive->setMinimumSize(QSize(500, 500));
        tE_receive->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(tE_receive, 5, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1274, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        cB_bR->setCurrentIndex(3);
        cB_dB->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pB_search->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        pB_swap->setText(QCoreApplication::translate("MainWindow", "Swap", nullptr));
        pB_Con->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        pB_Discon->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        l_bR->setText(QCoreApplication::translate("MainWindow", "BaudRate (\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214):", nullptr));
        cB_bR->setItemText(0, QCoreApplication::translate("MainWindow", "1200", nullptr));
        cB_bR->setItemText(1, QCoreApplication::translate("MainWindow", "2400", nullptr));
        cB_bR->setItemText(2, QCoreApplication::translate("MainWindow", "4800", nullptr));
        cB_bR->setItemText(3, QCoreApplication::translate("MainWindow", "9600", nullptr));
        cB_bR->setItemText(4, QCoreApplication::translate("MainWindow", "19200", nullptr));
        cB_bR->setItemText(5, QCoreApplication::translate("MainWindow", "38400", nullptr));
        cB_bR->setItemText(6, QCoreApplication::translate("MainWindow", "57600", nullptr));
        cB_bR->setItemText(7, QCoreApplication::translate("MainWindow", "115200", nullptr));

        l_dB->setText(QCoreApplication::translate("MainWindow", "DataBits (\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\261\320\270\321\202\320\276\320\262 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270):", nullptr));
        cB_dB->setItemText(0, QCoreApplication::translate("MainWindow", "5", nullptr));
        cB_dB->setItemText(1, QCoreApplication::translate("MainWindow", "6", nullptr));
        cB_dB->setItemText(2, QCoreApplication::translate("MainWindow", "7", nullptr));
        cB_dB->setItemText(3, QCoreApplication::translate("MainWindow", "8", nullptr));

        l_P->setText(QCoreApplication::translate("MainWindow", "Parity (\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \320\275\320\260 \321\207\320\265\321\202\320\275\320\276\321\201\321\202\321\214):", nullptr));
        cB_P->setItemText(0, QCoreApplication::translate("MainWindow", "NoParity (\320\235\320\265\321\202 \320\261\320\270\321\202\320\260 \321\207\320\265\321\202\320\275\320\276\321\201\321\202\320\270)", nullptr));
        cB_P->setItemText(1, QCoreApplication::translate("MainWindow", "EvenParity (1 \320\261\320\270\321\202 \321\207\320\265\321\202\320\275\320\276\321\201\321\202\320\270, \320\276\320\261\321\211\320\265\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\261\320\270\321\202\320\276\320\262 \320\262\321\201\320\265\320\263\320\264\320\260 \321\207\320\265\321\202\320\275\320\276\320\265)", nullptr));
        cB_P->setItemText(2, QCoreApplication::translate("MainWindow", "OddParity (1 \320\261\320\270\321\202 \321\207\320\265\321\202\320\275\320\276\321\201\321\202\320\270, \320\276\320\261\321\211\320\265\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\261\320\270\321\202\320\276\320\262 \320\262\321\201\320\265\320\263\320\264\320\260 \320\275\320\265\321\207\320\265\321\202\320\275\320\276\320\265)", nullptr));
        cB_P->setItemText(3, QCoreApplication::translate("MainWindow", "SpaceParity (\320\221\320\270\321\202 \321\207\320\265\321\202\320\275\320\276\321\201\321\202\320\270 \320\262 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\270 \321\201\320\270\320\263\320\275\320\260\320\273\320\260 \320\277\321\200\320\276\320\261\320\265\320\273\320\260, \320\275\320\265\321\202 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270 \320\276\320\261 \320\276\321\210\320\270\320\261\320\272\320\260\321\205)", nullptr));
        cB_P->setItemText(4, QCoreApplication::translate("MainWindow", "MarkParity", nullptr));

        l_sB->setText(QCoreApplication::translate("MainWindow", "StopBits (\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\320\276\320\277-\320\261\320\270\321\202\320\276\320\262):", nullptr));
        cB_sB->setItemText(0, QCoreApplication::translate("MainWindow", "OneStop (1 \321\201\321\202\320\276\320\277\320\276\320\262\321\213\320\271 \320\261\320\270\321\202)", nullptr));
        cB_sB->setItemText(1, QCoreApplication::translate("MainWindow", "OneAndHalfStop (1,5 \321\201\321\202\320\276\320\277\320\276\320\262\321\213\321\205 \320\261\320\270\321\202\320\260)", nullptr));
        cB_sB->setItemText(2, QCoreApplication::translate("MainWindow", "TwoStop (2 \321\201\321\202\320\276\320\277\320\276\320\262\321\213\321\205 \320\261\320\270\321\202\320\260)", nullptr));

        pB_SaveSett->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        l_fC->setText(QCoreApplication::translate("MainWindow", "FlowControl (\320\232\320\276\320\275\321\202\321\200\320\276\320\273\321\214 \320\277\320\265\321\200\320\265\320\264\320\260\321\207\320\270):", nullptr));
        cB_fC->setItemText(0, QCoreApplication::translate("MainWindow", "NoFlowControl (\320\235\320\265\321\202 \320\272\320\276\320\275\321\202\321\200\320\276\320\273\321\217 \320\277\320\276\321\202\320\276\320\272\320\260)", nullptr));
        cB_fC->setItemText(1, QCoreApplication::translate("MainWindow", "HardwareControl (\320\220\320\277\320\277\320\260\321\200\320\260\321\202\320\275\320\276\320\265 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\276\321\202\320\276\320\272\320\276\320\274 RTS/CTS)", nullptr));
        cB_fC->setItemText(2, QCoreApplication::translate("MainWindow", "SoftwareControl (\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\275\320\276\320\265 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\276\321\202\320\276\320\272\320\276\320\274 XON/XOFF)", nullptr));

        pB_float->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \321\207\320\270\321\201\320\273\320\276 \320\262 \321\204\320\276\321\200\320\274\320\260\321\202\320\265 float", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\275\320\270\320\274\320\260\320\265\320\274\320\276\320\265 \321\207\320\270\321\201\320\273\320\276:", nullptr));
        l_sendText->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214 \321\207\320\270\321\201\320\273\320\276:", nullptr));
        pB_sendData->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214 \320\262 \320\234\320\232", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
