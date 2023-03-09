#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_dst.h"

QT_BEGIN_NAMESPACE
namespace Ui { class DSTClass; };
QT_END_NAMESPACE

class DST : public QMainWindow
{
    Q_OBJECT


private:
    int start_x;
    int start_y;

public:
    DST(QWidget *parent = nullptr);
    ~DST();
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void mousePressEvent(QMouseEvent* event);
    virtual void mouseReleaseEvent(QMouseEvent* event);

private:
    Ui::DSTClass *ui;
    void setDropShadowEffect(QWidget *widget);


};
