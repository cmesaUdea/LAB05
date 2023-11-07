#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsItem>
#include "objeto.h"
#include <QTimer>
#include <QKeyEvent>
#include "barra.h"
#include <QPainter>
#include <QDebug>
#include <QRectF>
#include "score.h"
#include "moneda.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Score * score;
    QGraphicsScene *escen;
    objeto *bola;

    Barra *barder,*barcen11,*barinf,*barSup,*barizq,*barcen12,*barcen21,*barcen22,*barder1,*barizq1,*barup,*barlat,*barlat1; //muros exteriores
    Barra *bloq0,*bloq1,*bloq2,*bloq3,*bloq4,*bloq5,*bloq6,*bloq7,*bloq8,*bloq9,*bloqA,*bloqB,*bloqC,*bloqD,*bloqE,*bloqF,*bloqG,*bloqH,*bloqI,*bloqJ,*bloqK;
    Barra *spawn0,*spawn1,*spawn2,*spawn3,*spawn4,*spawn5;
    Barra *tp1,*tp2;
    Barra& choca(bool pru);
    void recoger();
    void tp();
    moneda *monx,*mon1,*mon2,*mon3,*mon4,*mon5,*mon6,*mon7,*mon8,*mon9,*mon10,*mon11,*mon12,*mon13,*mon14,*mon15,*mon16,*mon17,*mon18,*mon19,*mon20,*mon21;
    moneda *mon22,*mon23,*mon24,*mon25,*mon26,*mon27,*mon28,*mon29,*mon30,*mon31,*mon32,*mon33,*mon34,*mon35,*mon36,*mon37,*mon38,*mon39,*mon40;
    moneda *mon41,*mon42,*mon43,*mon44,*mon45,*mon46,*mon47,*mon48,*mon49,*mon50,*mon51,*mon52,*mon53,*mon54,*mon55,*mon56,*mon57,*mon58,*mon59,*mon60;
    moneda *mon61,*mon62,*mon63,*mon64,*mon65,*mon66,*mon67,*mon68,*mon69,*mon70,*mon71,*mon72,*mon73,*mon74,*mon75,*mon76,*mon77,*mon78,*mon79,*mon80;
    QList<moneda*> monedas;


private slots:


private:
    Ui::MainWindow *ui;


    void keyPressEvent(QKeyEvent *evento);
signals:
    void keyCaught(QKeyEvent *e);
};
#endif // MAINWINDOW_H
