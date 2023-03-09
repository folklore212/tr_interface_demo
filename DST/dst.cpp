#include "dst.h"
#include <QMouseEvent>
#include <qgraphicseffect.h>
#include <QColor.h>
#include <QDebug>

DST::DST(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DSTClass())
{
    ui->setupUi(this);
    //去边框  同时保留窗口原有的属性
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    //把窗口背景设为透明
    setAttribute(Qt::WA_TranslucentBackground);
    
    //设置组件投影效果
    setDropShadowEffect(ui->widget_3);
    setDropShadowEffect(ui->widget_6);
    setDropShadowEffect(ui->widget_8);
    setDropShadowEffect(ui->widget_12);


}

DST::~DST()
{
    delete ui;
}


//重写鼠标移动事件
void DST::mouseMoveEvent(QMouseEvent* event)
{
    int dis_x, dis_y;
    
    QWidget::mouseMoveEvent(event);
    dis_x = event->x() - this->start_x;
    dis_y = event->y() - this->start_y;
    this->move(this->x() + dis_x, this->y() + dis_y);

}


//重写鼠标按下事件
void DST::mousePressEvent(QMouseEvent* event)
{
    QWidget::mousePressEvent(event);
    this->start_x = event->x();
    this->start_y = event->y();
}


//重写鼠标松开事件
void DST::mouseReleaseEvent(QMouseEvent* event)
{
    QWidget::mouseReleaseEvent(event);
    this->start_x = 0;
    this->start_y = 0;

}

void DST::setDropShadowEffect(QWidget* widget)
{
    QGraphicsDropShadowEffect *eff = new QGraphicsDropShadowEffect(this);
    eff->setOffset(12, 12);
    eff->setBlurRadius(36);
    eff->setColor(QColor(155, 230,237));
    widget->setGraphicsEffect(eff);
}
