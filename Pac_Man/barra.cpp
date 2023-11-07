#include "barra.h"

int Barra::getX() const
{
    return x;
}

void Barra::setX(int value)
{
    x = value;
}

int Barra::getY() const
{
    return y;
}

void Barra::setY(int value)
{
    y = value;
}

Barra::Barra()
{

}

Barra::Barra(int x_, int y_, int w_, int h_)
{
    x=x_;
    y=y_;
    w=w_;
    h=h_;
   // setPos(x,-y);
}

QRectF Barra::boundingRect() const
{
    return QRect(x,y,w,h);
}

void Barra::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(boundingRect());
}
