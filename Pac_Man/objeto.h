#ifndef OBJETO_H
#define OBJETO_H
#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPixmap>
#include <QPainter>
class objeto: public QGraphicsItem
{
    int r,posix,posiy,vel=4;
public:
    objeto();
    objeto(int r_,int x,int y);
    int getR() const;
    void setR(int value);
    int getPosix() const;
    void setPosix(int value);
    int getPosiy() const;
    void setPosiy(int value);
    void MoveUp();
    void MoveDown();
    void MoveLeft();
    void MoveRight();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    int getVel() const;
    void setVel(int value);
};

#endif // OBJETO_H
