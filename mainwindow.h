#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QMessageBox>
#include <QSerialPortInfo>
#include <QList>
#include <QStringList>
#include <QThread>
#include <QDebug>
#include <QString>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    unsigned char Read;
    char ReadData[127];
struct {
    QString name;
    qint32 baudRate;
    QSerialPort::Parity parity;
    QSerialPort::DataBits dataBits;
    QSerialPort::FlowControl flowControl;
    QSerialPort::StopBits stopBits;
} Settings_port;

QSerialPort thisPort;


void port_ini(QString name, int baudRate, int parity, int dataBits, int flowControl, int stopBits);
float a1;
float a2;
float res;



float num1;
float num2;

char num11[4]={0};
char num22[4]={0};
uint8_t priznak;

char data[10]={0};

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pB_Con_clicked();
    void on_pB_Discon_clicked();
    void on_pB_SaveSett_clicked();
    void on_pB_search_clicked();
    void ReadDataSend();
    void writeData();
    void on_pB_float_clicked();
    void on_pB_sendData_clicked();
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
