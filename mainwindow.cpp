#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>

int symb=0;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->b00,SIGNAL(clicked()),this,SLOT(buttonclicked()));
    connect(ui->b01,SIGNAL(clicked()),this,SLOT(buttonclicked()));
    connect(ui->b02,SIGNAL(clicked()),this,SLOT(buttonclicked()));
    connect(ui->b10,SIGNAL(clicked()),this,SLOT(buttonclicked()));
    connect(ui->b11,SIGNAL(clicked()),this,SLOT(buttonclicked()));
    connect(ui->b12,SIGNAL(clicked()),this,SLOT(buttonclicked()));
    connect(ui->b20,SIGNAL(clicked()),this,SLOT(buttonclicked()));
    connect(ui->b21,SIGNAL(clicked()),this,SLOT(buttonclicked()));
    connect(ui->b22,SIGNAL(clicked()),this,SLOT(buttonclicked()));
     symb=0;// 0 for player who plays for zero and 1 for the player who plays for cross.
}

void MainWindow::buttonclicked(){
    if(symb==0) {
        if(this->sender()->objectName()=="b00"){
            ui->b00->setText("0");
            checkpattern();
        }
        if(this->sender()->objectName()=="b01"){
            ui->b01->setText("0");
            checkpattern();
        }
        if(this->sender()->objectName()=="b02"){
            ui->b02->setText("0");
            checkpattern();
        }
        if(this->sender()->objectName()=="b10"){
            ui->b10->setText("0");
            checkpattern();
        }
        if(this->sender()->objectName()=="b11"){
            ui->b11->setText("0");
            checkpattern();
        }
        if(this->sender()->objectName()=="b12"){
            ui->b12->setText("0");
            checkpattern();
        }
        if(this->sender()->objectName()=="b20"){
            ui->b20->setText("0");
            checkpattern();
        }
        if(this->sender()->objectName()=="b21"){
            ui->b21->setText("0");
            checkpattern();
        }
        if(this->sender()->objectName()=="b22"){
            ui->b22->setText("0");
            checkpattern();
        }
   }       // put 0 in the respective button and move to checkpattern();
    else {
        if(this->sender()->objectName()=="b00"){
            ui->b00->setText("X");
            checkpattern();
        }
        if(this->sender()->objectName()=="b01"){
            ui->b01->setText("X");
            checkpattern();
        }
        if(this->sender()->objectName()=="b02"){
            ui->b02->setText("X");
            checkpattern();
        }
        if(this->sender()->objectName()=="b10"){
            ui->b10->setText("X");
            checkpattern();
        }
        if(this->sender()->objectName()=="b11"){
            ui->b11->setText("X");
            checkpattern();
        }
        if(this->sender()->objectName()=="b12"){
            ui->b12->setText("X");
            checkpattern();
        }
        if(this->sender()->objectName()=="b20"){
            ui->b20->setText("X");
            checkpattern();
        }
        if(this->sender()->objectName()=="b21"){
            ui->b21->setText("X");
            checkpattern();
        }
        if(this->sender()->objectName()=="b22"){
            ui->b22->setText("X");
            checkpattern();
        }
    }            // put cross in the respective button and move to checkpattern();
}

void MainWindow::checkpattern(){
    if(symb==0){
    //check for 0 pattern
        if(ui->b00->text()=="0" && ui->b01->text()=="0" && ui->b02->text()=="0"){
            QMessageBox::information(this , "Game Ended" , "Player 0 has won" );
        }
        else if(ui->b10->text()=="0" && ui->b11->text()=="0" && ui->b12->text()=="0"){
            QMessageBox::information(this , "Game Ended" , "Player 0 has won" );
        }
        else if(ui->b20->text()=="0" && ui->b21->text()=="0" && ui->b22->text()=="0"){
             QMessageBox::information(this , "Game Ended" , "Player 0 has won" );
        }
        else if(ui->b00->text()=="0" && ui->b10->text()=="0" && ui->b20->text()=="0"){
             QMessageBox::information(this , "Game Ended" , "Player 0 has won" );
        }
        else if(ui->b01->text()=="0" && ui->b11->text()=="0" && ui->b21->text()=="0"){
             QMessageBox::information(this , "Game Ended" , "Player 0 has won" );
        }
        else if(ui->b02->text()=="0" && ui->b12->text()=="0" && ui->b22->text()=="0"){
             QMessageBox::information(this , "Game Ended" , "Player 0 has won" );
        }
        else if(ui->b00->text()=="0" && ui->b11->text()=="0" && ui->b22->text()=="0"){
             QMessageBox::information(this , "Game Ended" , "Player 0 has won" );
        }
        else if(ui->b20->text()=="0" && ui->b11->text()=="0" && ui->b02->text()=="0"){
             QMessageBox::information(this , "Game Ended" , "Player 0 has won" );
        }
    symb=1;
    }
    else {
    // check for X pattern
        if(ui->b00->text()=="X" && ui->b01->text()=="X" && ui->b02->text()=="X"){
            QMessageBox::information(this , "Game Ended" , "Player X has won" );
        }
        else if(ui->b10->text()=="X" && ui->b11->text()=="X" && ui->b12->text()=="X"){
            QMessageBox::information(this , "Game Ended" , "Player X has won" );
        }
        else if(ui->b20->text()=="X" && ui->b21->text()=="X" && ui->b22->text()=="X"){
             QMessageBox::information(this , "Game Ended" , "Player X has won" );
        }
        else if(ui->b00->text()=="X" && ui->b10->text()=="X" && ui->b20->text()=="X"){
             QMessageBox::information(this , "Game Ended" , "Player X has won" );
        }
        else if(ui->b01->text()=="X" && ui->b11->text()=="X" && ui->b21->text()=="X"){
             QMessageBox::information(this , "Game Ended" , "Player X has won" );
        }
        else if(ui->b02->text()=="X" && ui->b12->text()=="X" && ui->b22->text()=="X"){
             QMessageBox::information(this , "Game Ended" , "Player X has won" );
        }
        else if(ui->b00->text()=="X" && ui->b11->text()=="X" && ui->b22->text()=="X"){
             QMessageBox::information(this , "Game Ended" , "Player X has won" );
        }
        else if(ui->b20->text()=="X" && ui->b11->text()=="X" && ui->b02->text()=="X"){
             QMessageBox::information(this , "Game Ended" , "Player X has won" );
        }
        symb=0;
    }// check for pattern and chose who wins or not
// move to other player
}

MainWindow::~MainWindow()
{
    delete ui;
}
