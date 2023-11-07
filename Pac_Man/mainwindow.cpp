#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    escen = new QGraphicsScene;
    ui->graphicsView->setScene(escen);
    escen->setSceneRect(-100,-100,200,200);
    score = new Score();
    escen->addItem(score);
    score->setPos(-300,300);
    bola=new objeto(20,10,10);
    escen->addItem(bola);
    bola->setPos(0,-40);


    barder= new Barra(-350,-370,20,300);escen->addItem(barder);
    barSup= new Barra(-350,-375,1000,10);escen->addItem(barSup);
    barizq= new Barra(330,-370,20,300);escen->addItem(barizq);
    barinf= new Barra(-350,280,1000,10);escen->addItem(barinf);
    barcen11=new Barra(-350,-80,160,10);escen->addItem(barcen11);
    barcen21=new Barra(180,-80,160,10);escen->addItem(barcen21);
    barcen12=new Barra(-350,-20,160,10);escen->addItem(barcen12);
    barcen22=new Barra(180,-20,160,10);escen->addItem(barcen22);
    barder1=new Barra(-350,-20,20,300);escen->addItem(barder1);
    barizq1=new Barra(330,-20,20,300);escen->addItem(barizq1);
    barup=new Barra(0,-365,10,100);escen->addItem(barup);
    barlat=new Barra(-330,130,60,10);escen->addItem(barlat);
    barlat1=new Barra(270,130,60,10);escen->addItem(barlat1);

    spawn0=new Barra(-100,-80,10,75);escen->addItem(spawn0);
    spawn1=new Barra(100,-80,10,75);escen->addItem(spawn1);
    spawn2=new Barra(-100,-80,200,10);escen->addItem(spawn2);
    spawn3=new Barra(-100,-15,75,10);escen->addItem(spawn3);
    spawn4=new Barra(25,-15,75,10);escen->addItem(spawn4);

    bloq0=new Barra(-270,-315,80,50);escen->addItem(bloq0);
    bloq1=new Barra(-130,-315,80,50);escen->addItem(bloq1);
    bloq2=new Barra(60,-315,80,50);escen->addItem(bloq2);
    bloq3=new Barra(200,-315,80,50);escen->addItem(bloq3);
    bloq4=new Barra(-270,-210,80,10);escen->addItem(bloq4);
    bloq5=new Barra(-80,-210,170,10);escen->addItem(bloq5);
    bloq6=new Barra(200,-210,80,10);escen->addItem(bloq6);
    bloq7=new Barra(-140,-210,10,60);escen->addItem(bloq7);
    bloq8=new Barra(140,-210,10,60);escen->addItem(bloq8);
    bloq9=new Barra(-210,-150,170,10);escen->addItem(bloq9);
    bloqA=new Barra(80,-150,170,10);escen->addItem(bloqA);
    bloqB=new Barra(-100,50,210,10);escen->addItem(bloqB);
    bloqC=new Barra(-270,50,85,10);escen->addItem(bloqC);
    bloqD=new Barra(180,50,85,10);escen->addItem(bloqD);
    bloqE=new Barra(0,50,10,100);escen->addItem(bloqE);
    bloqF=new Barra(-200,50,10,100);escen->addItem(bloqF);
    bloqG=new Barra(188,50,10,100);escen->addItem(bloqG);
    bloqH=new Barra(-200,150,70,10);escen->addItem(bloqH);
    bloqI=new Barra(130,150,70,10);escen->addItem(bloqI);
    bloqJ=new Barra(-270,210,540,10);escen->addItem(bloqJ);

    mon1=new moneda(-5,8,25,25);escen->addItem(mon1);monedas.push_back(mon1);
    mon2=new moneda(-55,8,25,25);escen->addItem(mon2);monedas.push_back(mon2);
    mon3=new moneda(-105,8,25,25);escen->addItem(mon3);monedas.push_back(mon3);
    mon4=new moneda(-155,8,25,25);escen->addItem(mon4);monedas.push_back(mon4);
    mon5=new moneda(-205,8,25,25);escen->addItem(mon5);monedas.push_back(mon5);
    mon6=new moneda(-255,8,25,25);escen->addItem(mon6);monedas.push_back(mon6);
    mon7=new moneda(-305,8,25,25);escen->addItem(mon7);monedas.push_back(mon7);
    mon8=new moneda(-305,50,25,25);escen->addItem(mon8);monedas.push_back(mon8);
    mon9=new moneda(-305,92,25,25);escen->addItem(mon9);monedas.push_back(mon9);
    mon10=new moneda(-255,92,25,25);escen->addItem(mon10);monedas.push_back(mon10);
    mon11=new moneda(-255,150,25,25);escen->addItem(mon11);monedas.push_back(mon11);//
    mon12=new moneda(-300,150,25,25);escen->addItem(mon12);monedas.push_back(mon12);
    mon13=new moneda(-300,200,25,25);escen->addItem(mon13);monedas.push_back(mon13);
    mon14=new moneda(-300,250,25,25);escen->addItem(mon14);monedas.push_back(mon14);
    mon15=new moneda(-255,250,25,25);escen->addItem(mon15);monedas.push_back(mon15);
    mon16=new moneda(-205,250,25,25);escen->addItem(mon16);monedas.push_back(mon16);
    mon17=new moneda(-155,250,25,25);escen->addItem(mon17);monedas.push_back(mon17);
    mon18=new moneda(-105,250,25,25);escen->addItem(mon18);monedas.push_back(mon18);
    mon19=new moneda(-55,250,25,25);escen->addItem(mon19);monedas.push_back(mon19);
    mon20=new moneda(0,250,25,25);escen->addItem(mon20);monedas.push_back(mon20);
    mon21=new moneda(55,250,25,25);escen->addItem(mon21);monedas.push_back(mon21);
    mon22=new moneda(105,250,25,25);escen->addItem(mon22);monedas.push_back(mon22);
    mon23=new moneda(155,250,25,25);escen->addItem(mon23);monedas.push_back(mon23);
    mon24=new moneda(205,250,25,25);escen->addItem(mon24);monedas.push_back(mon24);
    mon25=new moneda(255,250,25,25);escen->addItem(mon25);monedas.push_back(mon25);
    mon26=new moneda(300,250,25,25);escen->addItem(mon26);monedas.push_back(mon26);
    mon28=new moneda(300,200,25,25);escen->addItem(mon28);monedas.push_back(mon28);
    mon29=new moneda(300,150,25,25);escen->addItem(mon29);monedas.push_back(mon29);
    mon30=new moneda(250,150,25,25);escen->addItem(mon30);monedas.push_back(mon30);
    mon27=new moneda(250,100,25,25);escen->addItem(mon27);monedas.push_back(mon27);
    mon31=new moneda(300,100,25,25);escen->addItem(mon31);monedas.push_back(mon31);
    mon32=new moneda(300,50,25,25);escen->addItem(mon32);monedas.push_back(mon32);
    mon33=new moneda(300,8,25,25);escen->addItem(mon33);monedas.push_back(mon33);
    mon34=new moneda(250,8,25,25);escen->addItem(mon34);monedas.push_back(mon34);
    mon35=new moneda(200,8,25,25);escen->addItem(mon35);monedas.push_back(mon35);
    mon36=new moneda(150,8,25,25);escen->addItem(mon36);monedas.push_back(mon36);//
    mon37=new moneda(100,8,25,25);escen->addItem(mon37);monedas.push_back(mon37);
    mon38=new moneda(50,8,25,25);escen->addItem(mon38);monedas.push_back(mon38);
    mon39=new moneda(-155,-58,25,25);escen->addItem(mon39);monedas.push_back(mon39);
    mon40=new moneda(-155,-108,25,25);escen->addItem(mon40);monedas.push_back(mon40);
    mon41=new moneda(145,-58,25,25);escen->addItem(mon41);monedas.push_back(mon41);
    mon42=new moneda(145,-108,25,25);escen->addItem(mon42);monedas.push_back(mon42);
    mon43=new moneda(100,-118,25,25);escen->addItem(mon43);monedas.push_back(mon43);
    mon44=new moneda(50,-118,25,25);escen->addItem(mon44);monedas.push_back(mon44);
    mon45=new moneda(0,-118,25,25);escen->addItem(mon45);monedas.push_back(mon45);
    mon46=new moneda(-55,-118,25,25);escen->addItem(mon46);monedas.push_back(mon46);
    mon47=new moneda(-105,-118,25,25);escen->addItem(mon47);monedas.push_back(mon47);
    mon48=new moneda(-205,-118,25,25);escen->addItem(mon48);monedas.push_back(mon48);
    mon49=new moneda(-255,-118,25,25);escen->addItem(mon49);monedas.push_back(mon49);
    mon50=new moneda(-305,-118,25,25);escen->addItem(mon50);monedas.push_back(mon50);
    mon51=new moneda(205,-118,25,25);escen->addItem(mon51);monedas.push_back(mon51);
    mon52=new moneda(255,-118,25,25);escen->addItem(mon52);monedas.push_back(mon52);
    mon53=new moneda(294,-118,25,25);escen->addItem(mon53);monedas.push_back(mon53);//
    mon54=new moneda(294,-168,25,25);escen->addItem(mon54);monedas.push_back(mon54);
    mon55=new moneda(294,-218,25,25);escen->addItem(mon55);monedas.push_back(mon55);
    mon56=new moneda(294,-268,25,25);escen->addItem(mon56);monedas.push_back(mon56);
    mon57=new moneda(294,-318,25,25);escen->addItem(mon57);monedas.push_back(mon57);
    mon58=new moneda(294,-350,25,25);escen->addItem(mon58);monedas.push_back(mon58);
    mon59=new moneda(-305,-168,25,25);escen->addItem(mon59);monedas.push_back(mon59);
    mon60=new moneda(-305,-218,25,25);escen->addItem(mon60);monedas.push_back(mon60);
    mon61=new moneda(-305,-268,25,25);escen->addItem(mon61);monedas.push_back(mon61);
    mon62=new moneda(-305,-318,25,25);escen->addItem(mon62);monedas.push_back(mon62);
    mon63=new moneda(-305,-350,25,25);escen->addItem(mon63);monedas.push_back(mon63);
    mon64=new moneda(-255,-350,25,25);escen->addItem(mon64);monedas.push_back(mon64);
    mon65=new moneda(-205,-350,25,25);escen->addItem(mon65);monedas.push_back(mon65);
    mon66=new moneda(-155,-350,25,25);escen->addItem(mon66);monedas.push_back(mon66);
    mon67=new moneda(-105,-350,25,25);escen->addItem(mon67);monedas.push_back(mon67);
    mon68=new moneda(-55,-350,25,25);escen->addItem(mon68);monedas.push_back(mon68);
    mon69=new moneda(55,-350,25,25);escen->addItem(mon69);monedas.push_back(mon69);
    mon70=new moneda(105,-350,25,25);escen->addItem(mon70);monedas.push_back(mon70);
    mon71=new moneda(155,-350,25,25);escen->addItem(mon71);monedas.push_back(mon71);
    mon72=new moneda(205,-350,25,25);escen->addItem(mon72);monedas.push_back(mon72);
    mon73=new moneda(255,-350,25,25);escen->addItem(mon73);monedas.push_back(mon73);
    mon74=new moneda(-160,-300,25,25);escen->addItem(mon74);monedas.push_back(mon74);
    mon70=new moneda(160,-300,25,25);escen->addItem(mon70);monedas.push_back(mon70);

    monx=new moneda(1000,0,25,25);escen->addItem(monx);monedas.push_back(monx);//lo pongo como el tope para que no se bugee la lista

    tp1=new Barra(-350,-80,10,50);escen->addItem(tp1);
    tp2=new Barra(350,-80,10,50);escen->addItem(tp2);

}

MainWindow::~MainWindow()
{
    delete ui;
}

Barra& MainWindow::choca(bool pru)
{
    if(bola->collidesWithItem(barup))
        return *barup;
    else if(bola->collidesWithItem(barSup))
        return *barSup;
    else if(bola->collidesWithItem(barder))
        return *barder;
    else if(bola->collidesWithItem(barinf))
        return *barinf;
    else if(bola->collidesWithItem(barizq))
        return *barizq;
    else if(bola->collidesWithItem(barlat))
        return *barlat;
    else if(bola->collidesWithItem(barder1))
        return *barder1;
    else if(bola->collidesWithItem(barizq1))
        return *barizq1;
    else if(bola->collidesWithItem(barlat1))
        return *barlat1;
    else if(bola->collidesWithItem(barcen11))
        return *barcen11;
    else if(bola->collidesWithItem(barcen12))
        return *barcen12;
    else if(bola->collidesWithItem(barcen21))
        return *barcen21;
    else if(bola->collidesWithItem(barcen22))
        return *barcen22;
    else if(bola->collidesWithItem(spawn0))
        return *spawn0;
    else if(bola->collidesWithItem(spawn1))
        return *spawn1;
    else if(bola->collidesWithItem(spawn2))
        return *spawn2;
    else if(bola->collidesWithItem(spawn3))
        return *spawn3;
    else if(bola->collidesWithItem(spawn4))
        return *spawn4;
    else if(bola->collidesWithItem(bloq0))
        return *bloq0;
    else if(bola->collidesWithItem(bloq1))
        return *bloq1;
    else if(bola->collidesWithItem(bloq2))
        return *bloq2;
    else if(bola->collidesWithItem(bloq3))
        return *bloq3;
    else if(bola->collidesWithItem(bloq4))
        return *bloq4;
    else if(bola->collidesWithItem(bloq5))
        return *bloq5;
    else if(bola->collidesWithItem(bloq6))
        return *bloq6;
    else if(bola->collidesWithItem(bloq7))
        return *bloq7;
    else if(bola->collidesWithItem(bloq8))
        return *bloq8;
    else if(bola->collidesWithItem(bloq9))
        return *bloq9;
    else if(bola->collidesWithItem(bloqA))
        return *bloqA;
    else if(bola->collidesWithItem(bloqB))
        return *bloqB;
    else if(bola->collidesWithItem(bloqC))
        return *bloqC;
    else if(bola->collidesWithItem(bloqD))
        return *bloqD;
    else if(bola->collidesWithItem(bloqE))
        return *bloqE;
    else if(bola->collidesWithItem(bloqF))
        return *bloqF;
    else if(bola->collidesWithItem(bloqG))
        return *bloqG;
    else if(bola->collidesWithItem(bloqH))
        return *bloqH;
    else if(bola->collidesWithItem(bloqI))
        return *bloqI;
    else if(bola->collidesWithItem(bloqJ))
        return *bloqJ;
}

void MainWindow::recoger()
{
    QList<moneda*>::iterator i;
    for(i=monedas.begin();i!=monedas.end();i++){
        if(bola->collidesWithItem(*i)){
                score->increase();
                escen->removeItem(*i);
                monedas.removeOne(*i);
        }
    }
}

void MainWindow::tp()
{
    if(bola->collidesWithItem(tp1)){
        bola->setPos(300,-45);
    }
    if(bola->collidesWithItem(tp2)){
        bola->setPos(-300,-45);
    }
}

void MainWindow::keyPressEvent(QKeyEvent *evento)
{
    bool x = false;

    if(evento->key()==0x57){
        if(!bola->collidesWithItem(&choca(x))){
            bola->MoveUp();
            bola->rotation();
            bola->setRotation(qreal(270));
            tp();
        }
        else if(bola->getPosiy()-5 < choca(x).getY()){
            bola->MoveUp();
            bola->rotation();
            bola->setRotation(qreal(270));

        }
    }
    if(evento->key()==0x53){
        if(!bola->collidesWithItem(&choca(x))){
            bola->MoveDown();
            bola->rotation();
            bola->setRotation(qreal(90));
            tp();
        }
        else if(bola->getPosiy()+5 > choca(x).getY()){
            bola->MoveDown();
            bola->rotation();
            bola->setRotation(qreal(90));
        }
    }
    if(evento->key()==0x41){
        if(!bola->collidesWithItem(&choca(x))){
            bola->MoveLeft();
            bola->rotation();
            bola->setRotation(qreal(180));
            tp();
        }
        else if(bola->getPosix()-5 < choca(x).getX()){
            bola->MoveLeft();
            bola->rotation();
            bola->setRotation(qreal(180));
        }
        }


    if(evento->key()==0x44){
        if(!bola->collidesWithItem(&choca(x))){
            bola->MoveRight();
            bola->rotation();
            bola->setRotation(qreal(0));
            tp();
        }
        else if(bola->getPosix()+5 > choca(x).getX()){
            bola->MoveRight();
            bola->rotation();
            bola->setRotation(qreal(0));
        }
    }

   recoger();

}


