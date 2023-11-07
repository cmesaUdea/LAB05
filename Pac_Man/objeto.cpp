#include "objeto.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include <QList>
#include <stdlib.h>
#include "mainwindow.h"
#include "moneda.h"
#include "score.h"
#include <QGraphicsItem>

MainWindow* MainWindow;

int objeto::getR() const
{
    return r;
}

void objeto::setR(int value)
{
    r = value;
}

int objeto::getPosix() const
{
    return posix;
}

void objeto::setPosix(int value)
{
    posix = value;
}

int objeto::getPosiy() const
{
    return posiy;
}

void objeto::setPosiy(int value)
{
    posiy = value;
}

void objeto::MoveUp()
{
    posiy-=2*vel;
    setPos(posix,posiy);
}

void objeto::MoveDown()
{
    posiy+=2*vel;
    setPos(posix,posiy);
}

void objeto::MoveLeft()
{
    posix-=2*vel;
    setPos(posix,posiy);
}

void objeto::MoveRight()
{
    posix+=2*vel;
    setPos(posix,posiy);
}

QRectF objeto::boundingRect() const
{
    return QRectF(-r,-r,r*2,r*2);
}

void objeto::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pixmap;
    pixmap.load(":/imagen/pac.png");
    painter->drawPixmap(boundingRect(),pixmap,pixmap.rect());
}

int objeto::getVel() const
{
    return vel;
}

void objeto::setVel(int value)
{
    vel = value;
}


objeto::objeto()
{

}

objeto::objeto(int r_,int x,int y)
{
    r=r_;
    posix=x;
    posiy=y;
}
