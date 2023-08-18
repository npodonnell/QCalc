#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Set up signals and slots.
    connect(ui->buttonOne, SIGNAL(clicked(bool)), &calc, SLOT(onePushed()));
    connect(ui->buttonTwo, SIGNAL(clicked(bool)), &calc, SLOT(twoPushed()));
    connect(ui->buttonThree, SIGNAL(clicked(bool)), &calc, SLOT(threePushed()));
    connect(ui->buttonFour, SIGNAL(clicked(bool)), &calc, SLOT(fourPushed()));
    connect(ui->buttonFive, SIGNAL(clicked(bool)), &calc, SLOT(fivePushed()));
    connect(ui->buttonSix, SIGNAL(clicked(bool)), &calc, SLOT(sixPushed()));
    connect(ui->buttonSeven, SIGNAL(clicked(bool)), &calc, SLOT(sevenPushed()));
    connect(ui->buttonEight, SIGNAL(clicked(bool)), &calc, SLOT(eightPushed()));
    connect(ui->buttonNine, SIGNAL(clicked(bool)), &calc, SLOT(ninePushed()));
    connect(ui->buttonZero, SIGNAL(clicked(bool)), &calc, SLOT(zeroPushed()));
    connect(ui->buttonPlus, SIGNAL(clicked(bool)), &calc, SLOT(plusPushed()));
    connect(ui->buttonEquals, SIGNAL(clicked(bool)), &calc, SLOT(equalsPushed()));
    connect(&calc, SIGNAL(display(int)), ui->lcdNumber, SLOT(display(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
