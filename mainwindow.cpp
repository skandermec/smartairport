#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "voyageur.h"
#include <QString>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    int num_reservation=ui->num_reservationD->text().toInt();
    int N_Passeport=ui->N_PasseportD->text().toInt();
    QString prenom=ui->prenomD->text();
    QString nom=ui->nomD->text();
    int age=ui->ageD->text().toInt();
    QString genre=ui->genreD->text();
    QString e_mail=ui->e_mailD->text();
   QString nationalite=ui->nationaliteD->text();
    Voyageur V(num_reservation, N_Passeport, prenom, nom, age, genre, e_mail,nationalite );
}