#include "dialog.h"
#include "ui_dialog.h"
#include <QtWidgets>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include "mainwindow.h"
#include "qfile.h"
#include "qdir.h"
#include "QMainWindow"
#include <cstring>
#include "second.h"
#include "form.h"
#include "newdialog.h"

int value;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{   
    mainLayout = new QHBoxLayout();
    mainLayout2= new QHBoxLayout();
    mainLayout3 = new QHBoxLayout();
    mainLayout4= new QHBoxLayout();
    mainLayout5= new QHBoxLayout();
    mainLayout6 = new QHBoxLayout();
    mainLayout7= new QHBoxLayout();
    helpLayout = new QVBoxLayout();

   for(int i=0;i<70;i++)
   {
    const char filename[70][20]={"apple.gif","bat.gif","beetle.gif","bell.gif",
                                 "bird.gif","bone.gif","bottle.gif","brick.gif",
                                "butterfly.gif","camel.gif","car.gif","carriage.gif"
                                ,"cattle.gif","cellular_phone.gif","chicken.gif"
                                ,"children.gif","chopper.gif","classic.gif",
                                 "comma.gif","crown.gif","cup.gif","deer.gif","device0.gif",
                                "device1.gif","device2.gif","device3.gif","device4.gif"
                                ,"device5.gif","device6.gif","device7.gif","device8.gif"
                                ,"device9.gif","dog.gif","elephant.gif","face.gif"
                                ,"fish.gif","flatfish.gif","fly.gif","fork.gif"
                                ,"fountain.gif","frog.gif","glas.gif","guitar.gif"
                                ,"hammer.gif","hat.gif","hcircle.gif"
                                ,"heart.gif","horse.gif","horseshoe.gif",
                                "jar.gif","key.gif","lizzard.gif","lmfish.gif"
                                ,"misk.gif","octopus.gif","pencil.gif","personal_car.gif"
                                ,"pocket.gif","rat.gif","ray.gif","sea_snake.gif"
                                ,"shoe.gif","spoon.gif","spring.gif","stef.gif","teddy.gif"
                                ,"tree.gif","truck.gif","turtle.gif","watch.gif"};
    char name[100]="/home/alico/Masaüstü/70/";

    strcat(name,filename[i]);

   cv::VideoCapture cap(name);
   cap>>img;

   cv::resize(img, img, cv::Size(),162.11/(img.rows),45.00/img.cols);

   imageLabel[i]= new QLabel();
   QImage newImg(img.data, img.cols, img.rows, QImage::Format_RGB888);
   QImage image2 = newImg.scaled(QSize(45,45),Qt::KeepAspectRatio);

   imageLabel[i]->setScaledContents(true);
   imageLabel[i]->setPixmap(QPixmap::fromImage(image2));

   if (img.empty()) {
       imageLabel[i]->setText("Cannot load the input image!");
   } else {
   cv::cvtColor(img, img, cv::COLOR_BGR2RGB);
   QImage _img(img.data, img.cols, img.rows, QImage::Format_RGB888);
   imageLabel[i]->setPixmap(QPixmap::fromImage(_img));
   }

   imageLabel[i]->resize(1000,1000);
   imageLabel[i]->move(3,3);
   imageLabel[i]->setMinimumWidth(85);
   imageLabel[i]->setMinimumHeight(85);

      if(i<10)
      {
      mainLayout->addWidget(imageLabel[i]);
      }
      if(i>=10&&i<20)
      {
      mainLayout2->addWidget(imageLabel[i]);
       }
      if(i>=20&&i<30)
      {
      mainLayout3->addWidget(imageLabel[i]);
       }
      if(i>=30&&i<40)
      {
      mainLayout4->addWidget(imageLabel[i]);
       }
      if(i>=40&&i<50)
      {
      mainLayout5->addWidget(imageLabel[i]);

       }
      if(i>=50&&i<60)
      {
      mainLayout6->addWidget(imageLabel[i]);

       }
      if(i>=60&&i<70)
      {
      mainLayout7->addWidget(imageLabel[i]);
      }

     }

   helpLayout->addLayout(mainLayout);
   helpLayout->addLayout(mainLayout2);
   helpLayout->addLayout(mainLayout3);
   helpLayout->addLayout(mainLayout4);
   helpLayout->addLayout(mainLayout5);
   helpLayout->addLayout(mainLayout6);
   helpLayout->addLayout(mainLayout7);


    setWindowTitle("SHAPE DESCRIPTOR");

    setLayout(helpLayout);

    ui->setupUi(this);



}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
     value=0;
    nd= new NewDialog(this);
    nd->show();


}

void Dialog::on_pushButton_2_clicked()
{
    value=1;
    nd= new NewDialog(this);
    nd->show();


}

void Dialog::on_pushButton_3_clicked()
{

    value=2;
    nd= new NewDialog(this);
    nd->show();

}

void Dialog::on_pushButton_4_clicked()
{
    value=3;
    nd= new NewDialog(this);
    nd->show();
}
void Dialog::on_pushButton_5_clicked()
{
    value=4;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_6_clicked()
{
    value=5;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_7_clicked()
{
    value=6;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_8_clicked()
{
    value=7;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_9_clicked()
{
    value=8;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_10_clicked()
{
    value=9;
    nd= new NewDialog(this);
    nd->show();
}



void Dialog::on_pushButton_11_clicked()
{
    value=10;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_12_clicked()
{

    value=11;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_13_clicked()
{
    value=12;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_14_clicked()
{
    value=13;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_15_clicked()
{
    value=14;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_16_clicked()
{
    value=15;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_17_clicked()
{
    value=16;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_19_clicked()
{
    value=18;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_20_clicked()
{

    value=19;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_21_clicked()
{

    value=20;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_18_clicked()
{

    value=17;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_22_clicked()
{

    value=21;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_23_clicked()
{
    value=22;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_24_clicked()
{
    value=23;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_25_clicked()
{
    value=24;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_26_clicked()
{
    value=25;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_27_clicked()
{
    value=26;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_28_clicked()
{
    value=27;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_29_clicked()
{

    value=28;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_30_clicked()
{
    value=29;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_31_clicked()
{
    value=30;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_32_clicked()
{
    value=31;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_33_clicked()
{
    value=32;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_34_clicked()
{

    value=33;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_35_clicked()
{
    value=34;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_36_clicked()
{
    value=35;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_37_clicked()
{

    value=36;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_38_clicked()
{
    value=37;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_39_clicked()
{
    value=38;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_40_clicked()
{
    value=39;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_41_clicked()
{
    value=40;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_42_clicked()
{
    value=41;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_43_clicked()
{
    value=42;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_44_clicked()
{
    value=43;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_45_clicked()
{
    value=44;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_46_clicked()
{
    value=45;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_47_clicked()
{
    value=46;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_51_clicked()
{
    value=50;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_52_clicked()
{
    value=51;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_53_clicked()
{
    value=52;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_54_clicked()
{
    value=53;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_55_clicked()
{
    value=54;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_56_clicked()
{
    value=55;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_57_clicked()
{
    value=56;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_58_clicked()
{
    value=57;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_59_clicked()
{
    value=58;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_60_clicked()
{
    value=59;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_61_clicked()
{
    value=60;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_62_clicked()
{
    value=61;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_63_clicked()
{
    value=62;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_64_clicked()
{
    value=63;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_65_clicked()
{
    value=64;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_66_clicked()
{
    value=65;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_67_clicked()
{
    value=66;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_68_clicked()
{
    value=67;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_69_clicked()
{
    value=68;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_70_clicked()
{
    value=69;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_48_clicked()
{
    value=47;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_49_clicked()
{
    value=48;
    nd= new NewDialog(this);
    nd->show();
}

void Dialog::on_pushButton_50_clicked()
{
    value=49;
    nd= new NewDialog(this);
    nd->show();
}
