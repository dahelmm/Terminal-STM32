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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pB_search;
    QLineEdit *lE_port;
    QVBoxLayout *verticalLayout_2;
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
    QHBoxLayout *hL_fC;
    QLabel *l_fC;
    QComboBox *cB_fC;
    QPushButton *pB_SaveSett;
    QHBoxLayout *pB_control;
    QPushButton *pB_Con;
    QPushButton *pB_Discon;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *l_sendText;
    QLineEdit *lE_sendText;
    QPushButton *pB_float;
    QPushButton *pB_sendData;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *tE_receive;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(965, 292);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pB_search = new QPushButton(centralwidget);
        pB_search->setObjectName(QString::fromUtf8("pB_search"));

        horizontalLayout_2->addWidget(pB_search);

        lE_port = new QLineEdit(centralwidget);
        lE_port->setObjectName(QString::fromUtf8("lE_port"));

        horizontalLayout_2->addWidget(lE_port);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
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


        verticalLayout_2->addLayout(hL_bR);

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


        verticalLayout_2->addLayout(hL_dB);

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


        verticalLayout_2->addLayout(hL_P);

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


        verticalLayout_2->addLayout(hL_sB);

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


        verticalLayout_2->addLayout(hL_fC);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        pB_SaveSett = new QPushButton(centralwidget);
        pB_SaveSett->setObjectName(QString::fromUtf8("pB_SaveSett"));

        verticalLayout_4->addWidget(pB_SaveSett);

        pB_control = new QHBoxLayout();
        pB_control->setObjectName(QString::fromUtf8("pB_control"));
        pB_Con = new QPushButton(centralwidget);
        pB_Con->setObjectName(QString::fromUtf8("pB_Con"));

        pB_control->addWidget(pB_Con);

        pB_Discon = new QPushButton(centralwidget);
        pB_Discon->setObjectName(QString::fromUtf8("pB_Discon"));

        pB_control->addWidget(pB_Discon);


        verticalLayout_4->addLayout(pB_control);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        l_sendText = new QLabel(centralwidget);
        l_sendText->setObjectName(QString::fromUtf8("l_sendText"));

        horizontalLayout->addWidget(l_sendText);

        lE_sendText = new QLineEdit(centralwidget);
        lE_sendText->setObjectName(QString::fromUtf8("lE_sendText"));

        horizontalLayout->addWidget(lE_sendText);


        verticalLayout->addLayout(horizontalLayout);

        pB_float = new QPushButton(centralwidget);
        pB_float->setObjectName(QString::fromUtf8("pB_float"));

        verticalLayout->addWidget(pB_float);

        pB_sendData = new QPushButton(centralwidget);
        pB_sendData->setObjectName(QString::fromUtf8("pB_sendData"));

        verticalLayout->addWidget(pB_sendData);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(verticalLayout);

        tE_receive = new QTextEdit(centralwidget);
        tE_receive->setObjectName(QString::fromUtf8("tE_receive"));

        verticalLayout_5->addWidget(tE_receive);


        gridLayout->addLayout(verticalLayout_5, 0, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 965, 22));
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

        l_fC->setText(QCoreApplication::translate("MainWindow", "FlowControl (\320\232\320\276\320\275\321\202\321\200\320\276\320\273\321\214 \320\277\320\265\321\200\320\265\320\264\320\260\321\207\320\270):", nullptr));
        cB_fC->setItemText(0, QCoreApplication::translate("MainWindow", "NoFlowControl (\320\235\320\265\321\202 \320\272\320\276\320\275\321\202\321\200\320\276\320\273\321\217 \320\277\320\276\321\202\320\276\320\272\320\260)", nullptr));
        cB_fC->setItemText(1, QCoreApplication::translate("MainWindow", "HardwareControl (\320\220\320\277\320\277\320\260\321\200\320\260\321\202\320\275\320\276\320\265 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\276\321\202\320\276\320\272\320\276\320\274 RTS/CTS)", nullptr));
        cB_fC->setItemText(2, QCoreApplication::translate("MainWindow", "SoftwareControl (\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\275\320\276\320\265 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\276\321\202\320\276\320\272\320\276\320\274 XON/XOFF)", nullptr));

        pB_SaveSett->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        pB_Con->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        pB_Discon->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        l_sendText->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214 \321\202\320\265\320\272\321\201\321\202:", nullptr));
        pB_float->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \321\207\320\270\321\201\320\273\320\276 \320\262 \321\204\320\276\321\200\320\274\320\260\321\202\320\265 float", nullptr));
        pB_sendData->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214 \320\262 \320\234\320\232", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
