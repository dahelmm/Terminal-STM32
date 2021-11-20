#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&thisPort,&QSerialPort::readyRead,this,&MainWindow::ReadDataSend);

}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pB_Con_clicked()
{
        if(thisPort.isOpen())
        {
            thisPort.clear();
            thisPort.close();
        }
        thisPort.setPortName(Settings_port.name);
        thisPort.setBaudRate(Settings_port.baudRate);
        thisPort.setParity(Settings_port.parity);
        thisPort.setDataBits(Settings_port.dataBits);
        thisPort.setFlowControl(Settings_port.flowControl);
        thisPort.setStopBits(Settings_port.stopBits);
        thisPort.open(QIODevice::ReadWrite);
        if(thisPort.isOpen())
        {
            QMessageBox::information(this,"Тебе удалось","Порт подключен, работаем");

        }
        else
        {
            thisPort.close();
            QMessageBox::warning(this,"ОШИБКА ПОДКЛЮЧЕНИЯ","Порт не подключен, попробуй снова");
        }


}

void MainWindow::ReadDataSend()
{
    QThread::msleep(100);
    QApplication::processEvents();
    thisPort.read(data,9);
    ui->tE_receive->insertPlainText(data);
    ui->tE_receive->insertPlainText("\r");

    num11[0] = data[0];
    num11[1] = data[1];
    num11[2] = data[2];
    num11[3] = data[3];

    num22[0] = data[4];
    num22[1] = data[5];
    num22[2] = data[6];
    num22[3] = data[7];

    priznak = data[8];

    num1 = *(reinterpret_cast<float*>(num11));
    num2 = *(reinterpret_cast<float*>(num22));

    a1 = num1;
    a2 = num2;
    if(priznak == (int)'!')
    {
        res = a1+a2;
        qDebug()<<res;
        ui->lE_sendText->setText(QString::number(res));
    }
        char send_arr[4];
        char * sendfloat = reinterpret_cast<char*>(&res);
            for (uint8_t k = 0;k<4;k++) {
                send_arr[k]=*sendfloat;
                sendfloat++;
            }
    QThread::msleep(100);
    QApplication::processEvents();
    thisPort.write(send_arr,4);

}
void MainWindow::writeData()
{
    //QThread::msleep(100);
    //QApplication::processEvents();
    //thisPort.waitForBytesWritten();
    //thisPort.flush();
}
void MainWindow::on_pB_Discon_clicked()
{
    if(thisPort.isOpen())
    {
        thisPort.close();
        ui->tE_receive->insertPlainText("Порт закрыт!\r");
    }
}
void MainWindow::on_pB_SaveSett_clicked()
{
    Settings_port.name = ui->lE_port->text();
    //проверка выбранного значения в скорости передачи
    switch (ui->cB_bR->currentIndex())
    {

    case 0:
        Settings_port.baudRate = QSerialPort::Baud1200;
        break;
    case 1:
        Settings_port.baudRate = QSerialPort::Baud2400;
        break;
    case 2:
        Settings_port.baudRate = QSerialPort::Baud4800;
        break;
    case 3:
        Settings_port.baudRate = QSerialPort::Baud9600;
        break;
    case 4:
        Settings_port.baudRate = QSerialPort::Baud19200;
        break;
    case 5:
        Settings_port.baudRate = QSerialPort::Baud38400;
        break;
    case 6:
        Settings_port.baudRate = QSerialPort::Baud57600;
        break;
    case 7:
        Settings_port.baudRate = QSerialPort::Baud115200;
        break;
    }
    //проверка выбранного значения в количестве битов
    switch (ui->cB_dB->currentIndex())
    {
    case 0:
        Settings_port.dataBits = QSerialPort::Data5;
        break;
    case 1:
        Settings_port.dataBits = QSerialPort::Data6;
        break;
    case 2:
        Settings_port.dataBits = QSerialPort::Data7;
        break;
    case 3:
        Settings_port.dataBits = QSerialPort::Data8;
        break;
    }
    //проверка выбранного значения в проверке на четность
    switch (ui->cB_P->currentIndex())
    {
    case 0:
        Settings_port.parity = QSerialPort::NoParity;
        break;
    case 1:
        Settings_port.parity = QSerialPort::EvenParity;
        break;
    case 2:
        Settings_port.parity = QSerialPort::OddParity;
        break;
    case 3:
        Settings_port.parity = QSerialPort::SpaceParity;
        break;
    case 4:
        Settings_port.parity = QSerialPort::MarkParity;;
        break;
    }
    //проверка выбранного значения в количестве стоп-битов
    switch (ui->cB_sB->currentIndex())
    {
    case 0:
        Settings_port.stopBits = QSerialPort::OneStop;
        break;
    case 1:
        Settings_port.stopBits = QSerialPort::OneAndHalfStop;
        break;
    case 2:
        Settings_port.stopBits = QSerialPort::TwoStop;
        break;
    }
    //проверка выбранного значения в контроле передачи
    switch (ui->cB_fC->currentIndex())
    {
    case 0:
        Settings_port.flowControl = QSerialPort::NoFlowControl;
        break;
    case 1:
        Settings_port.flowControl = QSerialPort::HardwareControl;
        break;
    case 2:
        Settings_port.flowControl = QSerialPort::SoftwareControl;
        break;
    }
}

void MainWindow::on_pB_search_clicked()
{
    const auto ports = QSerialPortInfo::availablePorts();
    for(const QSerialPortInfo &info : ports)
    {
        QStringList list;
        list<<info.portName();
        ui->lE_port->setText(list.first());
    }
}



void MainWindow::on_pushButton_clicked()
{
    thisPort.close();
    this->close();
}
