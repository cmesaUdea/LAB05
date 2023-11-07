#include "moneda.h"


int moneda::getX() const
{
    return x;
}

void moneda::setX(int value)
{
    x = value;
}

int moneda::getY() const
{
    return y;
}

void moneda::setY(int value)
{
    y = value;
}

moneda::moneda()
{

}

moneda::moneda(int x_, int y_, int w_, int h_)
{
    x=x_;
    y=y_;
    w=w_;
    h=h_;
   // setPos(x,-y);
}

QRectF moneda::boundingRect() const
{
    return QRect(x,y,w,h);
}

void moneda::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pixmap;
    pixmap.load(":/imagen/mon.png");
    painter->drawPixmap(boundingRect(),pixmap,pixmap.rect());
}
