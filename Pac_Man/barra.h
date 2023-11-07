#ifndef BARRA_H
#define BARRA_H
#include <QGraphicsItem>
#include <QPainter>


class Barra: public QGraphicsItem

{
    int x;
    int y;
    int w;
    int h;


public:
    Barra();
    Barra(int x_,int y_, int w_, int h_);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = Q_NULLPTR);
    int getX() const;
    void setX(int value);
    int getY() const;
    void setY(int value);
};

#endif // BARRA_H
