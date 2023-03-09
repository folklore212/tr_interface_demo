/********************************************************************************
** Form generated from reading UI file 'dst.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DST_H
#define UI_DST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DSTClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_7;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_6;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_5;
    QLabel *label;
    QLabel *label_2;
    QListWidget *listWidget;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_8;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_10;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLabel *label_8;
    QProgressBar *progressBar;
    QLabel *label_9;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_9;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_10;
    QLabel *label_11;
    QProgressBar *progressBar_2;
    QLabel *label_12;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_11;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_13;
    QLabel *label_14;
    QProgressBar *progressBar_3;
    QLabel *label_15;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_15;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_16;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_19;
    QLabel *label_20;
    QProgressBar *progressBar_5;
    QLabel *label_21;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_13;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_16;
    QLabel *label_17;
    QProgressBar *progressBar_4;
    QLabel *label_18;

    void setupUi(QMainWindow *DSTClass)
    {
        if (DSTClass->objectName().isEmpty())
            DSTClass->setObjectName(QString::fromUtf8("DSTClass"));
        DSTClass->resize(925, 587);
        DSTClass->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	font-family:\".PingFang SC\";\n"
"}\n"
"\n"
"QScrollBar:horizontal{\n"
"    height:8px;\n"
"    background:rgba(0,0,0,0%);\n"
"border-radius:4px;\n"
"\n"
"}\n"
"QScrollBar::handle:horizontal{\n"
"    background:rgba(125,125,125,50%);\n"
"border-radius:4px;\n"
"}\n"
"QScrollBar::handle:horizontal:hover{\n"
"    background:rgba(125,125,125,100%);\n"
"    min-width:0;\n"
"}\n"
"QScrollBar::add-line:horizontal{\n"
"    height:0px;width:0px;\n"
"\n"
"}\n"
"QScrollBar::sub-line:horizontal{\n"
"    height:0px;width:0px;\n"
"\n"
"}\n"
"QScrollBar::add-line:horizontal:hover{\n"
"    height:0px;width:0px;\n"
"\n"
"}\n"
"QScrollBar::sub-line:horizontal:hover{\n"
"    height:0px;width:0px;\n"
"\n"
"}\n"
"QScrollBar::add-page:horizontal,QScrollBar::sub-page:horizontal\n"
"{\n"
"    background:rgba(0,0,0,10%);\n"
"    border-radius:4px;\n"
"}\n"
"\n"
"QScrollBar:vertical{\n"
"    width:8px;\n"
"    background:rgba(0,0,0,0%);\n"
"\n"
"}\n"
"QScrollBar::handle:vertical{\n"
"    width:0px;\n"
"    background:rgba"
                        "(125,125,125,50%);\n"
"    border-radius:4px;\n"
"}\n"
"QScrollBar::handle:vertical:hover{\n"
"    width:0px;\n"
"    background:rgba(125,125,125,100%);\n"
"    border-radius:4px;\n"
"    min-width:20;\n"
"}\n"
"QScrollBar::add-line:vertical{\n"
"    height:0px;width:0px;\n"
"\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"    height:0px;width:0px;\n"
"\n"
"}\n"
"QScrollBar::add-line:vertical:hover{\n"
"    height:0px;width:0px;\n"
"\n"
"}\n"
"QScrollBar::sub-line:vertical:hover{\n"
"    height:0px;width:0px;\n"
"\n"
"}\n"
"QScrollBar::add-page:vertical,QScrollBar::sub-page:vertical\n"
"{\n"
"    background:rgba(0,0,0,10%);\n"
"    border-radius:4px;\n"
"}\n"
""));
        centralWidget = new QWidget(DSTClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_7 = new QHBoxLayout(centralWidget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame{\n"
"	background-color: rgba(255, 255, 255, 150);\n"
"	border-radius:20px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame);
        horizontalLayout_6->setSpacing(12);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame#frame_2{\n"
"	background-color: rgba(255, 255, 255, 255);\n"
"	border-radius:20px;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(12, 12, 12, 36);
        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 24, -1, -1);
        widget_5 = new QWidget(frame_5);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMinimumSize(QSize(65, 65));
        widget_5->setMaximumSize(QSize(65, 65));
        widget_5->setStyleSheet(QString::fromUtf8("image:url(:/image/img/img/image.png);\n"
"border-radius:32px;\n"
"background-color: rgb(223, 223, 223);"));

        horizontalLayout_5->addWidget(widget_5);


        verticalLayout_2->addWidget(frame_5);

        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8(".PingFang SC"));
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgb(22, 54, 53)"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8(".PingFang SC"));
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(102, 128, 127);"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        listWidget = new QListWidget(frame_2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/img/buttom/\346\266\210\346\201\257_message-one.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/img/buttom/\344\273\273\345\244\251\345\240\202\346\270\270\346\210\217_switch-nintendo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/img/buttom/\345\277\203\347\224\265\345\233\276_electrocardiogram.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/img/buttom/\344\273\252\350\241\250\347\233\230_dashboard.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setIcon(icon3);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setFont(font1);
        listWidget->setFocusPolicy(Qt::NoFocus);
        listWidget->setStyleSheet(QString::fromUtf8("QListView{\n"
"	padding-top:18px;\n"
"	border-radius:20px;\n"
"	color:rgb(106, 106, 106);\n"
"}\n"
"\n"
"QListView::item{\n"
"	background-color:transparent;\n"
"	height:40px;\n"
"	padding-left:12px;\n"
"	padding:10px;\n"
"\n"
"}\n"
"\n"
"QListView::item::hover{\n"
"	background-color: rgba(216, 216, 216, 50);\n"
"}\n"
"\n"
"QListView::item::selected{	\n"
"	background-color: rgba(90, 216, 212, 50);\n"
"	color: rgb(40, 92, 90);\n"
"	border-left: 2px solid rgb(90, 216, 212);\n"
"}"));
        listWidget->setTabKeyNavigation(false);
        listWidget->setIconSize(QSize(24, 24));
        listWidget->setViewMode(QListView::ListMode);

        verticalLayout_2->addWidget(listWidget);

        frame_6 = new QFrame(frame_2);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	\n"
"	background-color: rgb(89, 217, 212);\n"
"	border-radius:20px;\n"
"	color:rgb(255, 255, 255)\n"
"}"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_6);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(frame_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(frame_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8(""));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(frame_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout);

        widget_2 = new QWidget(frame_6);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("image:url(:/image/img/img/image.png);"));

        horizontalLayout->addWidget(widget_2);


        verticalLayout_2->addWidget(frame_6);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(3, 3);
        verticalLayout_2->setStretch(4, 1);

        horizontalLayout_6->addWidget(frame_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setStyleSheet(QString::fromUtf8(".QFrame{\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"	border-radius:20px;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 24, -1, -1);
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font2;
        font2.setFamily(QString::fromUtf8(".PingFang SC"));
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color:rgb(22, 54, 53)"));

        verticalLayout_3->addWidget(label_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(frame_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 32));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(245, 244, 246);\n"
"	border:0px solid red;\n"
"	border-radius:14px; \n"
"}"));

        horizontalLayout_2->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_5->addWidget(frame_3);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setStyleSheet(QString::fromUtf8(".QFrame{\n"
"	background-color: rgba(255, 255, 255, 128);\n"
"	border-radius:20px;\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_4);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(frame_4);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:none;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 714, 723));
        verticalLayout_10 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_10->setSpacing(24);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(36, 36, 124, 36);
        widget_3 = new QWidget(scrollAreaWidgetContents);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(0, 111));
        widget_3->setMaximumSize(QSize(16777215, 111));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border-radius:20px;\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: qlineargradient(x1:0, y1:O, x2:1, y2:0,stop:0 rgb(234,249,253), stop:1 rgba(91,218,211,50));\n"
"\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setSpacing(24);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(24, 24, 24, 24);
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setStyleSheet(QString::fromUtf8("image:url(:/image/img/img/image.png);"));

        horizontalLayout_4->addWidget(widget_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_7 = new QLabel(widget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font3;
        font3.setFamily(QString::fromUtf8(".PingFang SC"));
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("color:rgb(22, 54, 53)"));

        verticalLayout_4->addWidget(label_7);

        label_8 = new QLabel(widget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("color:rgb(22, 54, 53)"));

        verticalLayout_4->addWidget(label_8);

        progressBar = new QProgressBar(widget_3);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar::chunk{\n"
"border-top-left-radius:8px;\n"
"border-bottom-left-radius:8px;\n"
"background-color: rgb(103,216,217);\n"
"}\n"
"\n"
"QProgressBar{\n"
"border-radius:8px;\n"
"background-color: rgb(223,223,223);\n"
"}\n"
""));
        progressBar->setValue(60);
        progressBar->setTextVisible(false);

        verticalLayout_4->addWidget(progressBar);


        horizontalLayout_3->addLayout(verticalLayout_4);

        label_9 = new QLabel(widget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font4;
        font4.setFamily(QString::fromUtf8(".PingFang SC"));
        font4.setPointSize(17);
        font4.setBold(true);
        font4.setWeight(75);
        label_9->setFont(font4);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(89, 217, 212);"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_3->addWidget(label_9);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 5);

        verticalLayout_10->addWidget(widget_3);

        widget_6 = new QWidget(scrollAreaWidgetContents);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setMinimumSize(QSize(0, 111));
        widget_6->setMaximumSize(QSize(16777215, 111));
        widget_6->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border-radius:20px;\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: qlineargradient(x1:0, y1:O, x2:1, y2:0,stop:0 rgb(234,249,253), stop:1 rgba(91,218,211,50));\n"
"\n"
"}"));
        horizontalLayout_9 = new QHBoxLayout(widget_6);
        horizontalLayout_9->setSpacing(24);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(24, 24, 24, 24);
        widget_7 = new QWidget(widget_6);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setStyleSheet(QString::fromUtf8("image:url(:/image/img/img/image.png);"));

        horizontalLayout_9->addWidget(widget_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_10 = new QLabel(widget_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font3);
        label_10->setStyleSheet(QString::fromUtf8("color:rgb(22, 54, 53)"));

        verticalLayout_6->addWidget(label_10);

        label_11 = new QLabel(widget_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("color:rgb(22, 54, 53)"));

        verticalLayout_6->addWidget(label_11);

        progressBar_2 = new QProgressBar(widget_6);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setStyleSheet(QString::fromUtf8("QProgressBar::chunk{\n"
"border-top-left-radius:8px;\n"
"border-bottom-left-radius:8px;\n"
"background-color: rgb(103,216,217);\n"
"}\n"
"\n"
"QProgressBar{\n"
"border-radius:8px;\n"
"background-color: rgb(223,223,223);\n"
"}\n"
""));
        progressBar_2->setValue(60);
        progressBar_2->setTextVisible(false);

        verticalLayout_6->addWidget(progressBar_2);


        horizontalLayout_10->addLayout(verticalLayout_6);

        label_12 = new QLabel(widget_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font4);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(89, 217, 212);"));
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_10->addWidget(label_12);


        horizontalLayout_9->addLayout(horizontalLayout_10);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 5);

        verticalLayout_10->addWidget(widget_6);

        widget_8 = new QWidget(scrollAreaWidgetContents);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setMinimumSize(QSize(0, 111));
        widget_8->setMaximumSize(QSize(16777215, 111));
        widget_8->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border-radius:20px;\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: qlineargradient(x1:0, y1:O, x2:1, y2:0,stop:0 rgb(234,249,253), stop:1 rgba(91,218,211,50));\n"
"\n"
"}"));
        horizontalLayout_11 = new QHBoxLayout(widget_8);
        horizontalLayout_11->setSpacing(24);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(24, 24, 24, 24);
        widget_9 = new QWidget(widget_8);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setStyleSheet(QString::fromUtf8("image:url(:/image/img/img/image.png);"));

        horizontalLayout_11->addWidget(widget_9);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_13 = new QLabel(widget_8);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font3);
        label_13->setStyleSheet(QString::fromUtf8("color:rgb(22, 54, 53)"));

        verticalLayout_7->addWidget(label_13);

        label_14 = new QLabel(widget_8);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setStyleSheet(QString::fromUtf8("color:rgb(22, 54, 53)"));

        verticalLayout_7->addWidget(label_14);

        progressBar_3 = new QProgressBar(widget_8);
        progressBar_3->setObjectName(QString::fromUtf8("progressBar_3"));
        progressBar_3->setStyleSheet(QString::fromUtf8("QProgressBar::chunk{\n"
"border-top-left-radius:8px;\n"
"border-bottom-left-radius:8px;\n"
"background-color: rgb(103,216,217);\n"
"}\n"
"\n"
"QProgressBar{\n"
"border-radius:8px;\n"
"background-color: rgb(223,223,223);\n"
"}\n"
""));
        progressBar_3->setValue(60);
        progressBar_3->setTextVisible(false);

        verticalLayout_7->addWidget(progressBar_3);


        horizontalLayout_12->addLayout(verticalLayout_7);

        label_15 = new QLabel(widget_8);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font4);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(89, 217, 212);"));
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_12->addWidget(label_15);


        horizontalLayout_11->addLayout(horizontalLayout_12);

        horizontalLayout_11->setStretch(0, 1);
        horizontalLayout_11->setStretch(1, 5);

        verticalLayout_10->addWidget(widget_8);

        widget_12 = new QWidget(scrollAreaWidgetContents);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setMinimumSize(QSize(0, 111));
        widget_12->setMaximumSize(QSize(16777215, 111));
        widget_12->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border-radius:20px;\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: qlineargradient(x1:0, y1:O, x2:1, y2:0,stop:0 rgb(234,249,253), stop:1 rgba(91,218,211,50));\n"
"\n"
"}"));
        horizontalLayout_15 = new QHBoxLayout(widget_12);
        horizontalLayout_15->setSpacing(24);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(24, 24, 24, 24);
        widget_13 = new QWidget(widget_12);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        widget_13->setStyleSheet(QString::fromUtf8("image:url(:/image/img/img/image.png);"));

        horizontalLayout_15->addWidget(widget_13);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_19 = new QLabel(widget_12);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font3);
        label_19->setStyleSheet(QString::fromUtf8("color:rgb(22, 54, 53)"));

        verticalLayout_9->addWidget(label_19);

        label_20 = new QLabel(widget_12);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setStyleSheet(QString::fromUtf8("color:rgb(22, 54, 53)"));

        verticalLayout_9->addWidget(label_20);

        progressBar_5 = new QProgressBar(widget_12);
        progressBar_5->setObjectName(QString::fromUtf8("progressBar_5"));
        progressBar_5->setStyleSheet(QString::fromUtf8("QProgressBar::chunk{\n"
"border-top-left-radius:8px;\n"
"border-bottom-left-radius:8px;\n"
"background-color: rgb(103,216,217);\n"
"}\n"
"\n"
"QProgressBar{\n"
"border-radius:8px;\n"
"background-color: rgb(223,223,223);\n"
"}\n"
""));
        progressBar_5->setValue(60);
        progressBar_5->setTextVisible(false);

        verticalLayout_9->addWidget(progressBar_5);


        horizontalLayout_16->addLayout(verticalLayout_9);

        label_21 = new QLabel(widget_12);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font4);
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(89, 217, 212);"));
        label_21->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_16->addWidget(label_21);


        horizontalLayout_15->addLayout(horizontalLayout_16);

        horizontalLayout_15->setStretch(0, 1);
        horizontalLayout_15->setStretch(1, 5);

        verticalLayout_10->addWidget(widget_12);

        widget_10 = new QWidget(scrollAreaWidgetContents);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setMinimumSize(QSize(0, 111));
        widget_10->setMaximumSize(QSize(16777215, 111));
        widget_10->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border-radius:20px;\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: qlineargradient(x1:0, y1:O, x2:1, y2:0,stop:0 rgb(234,249,253), stop:1 rgba(91,218,211,50));\n"
"\n"
"}"));
        horizontalLayout_13 = new QHBoxLayout(widget_10);
        horizontalLayout_13->setSpacing(24);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(24, 24, 24, 24);
        widget_11 = new QWidget(widget_10);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setStyleSheet(QString::fromUtf8("image:url(:/image/img/img/image.png);"));

        horizontalLayout_13->addWidget(widget_11);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_16 = new QLabel(widget_10);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font3);
        label_16->setStyleSheet(QString::fromUtf8("color:rgb(22, 54, 53)"));

        verticalLayout_8->addWidget(label_16);

        label_17 = new QLabel(widget_10);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setStyleSheet(QString::fromUtf8("color:rgb(22, 54, 53)"));

        verticalLayout_8->addWidget(label_17);

        progressBar_4 = new QProgressBar(widget_10);
        progressBar_4->setObjectName(QString::fromUtf8("progressBar_4"));
        progressBar_4->setStyleSheet(QString::fromUtf8("QProgressBar::chunk{\n"
"border-top-left-radius:8px;\n"
"border-bottom-left-radius:8px;\n"
"background-color: rgb(103,216,217);\n"
"}\n"
"\n"
"QProgressBar{\n"
"border-radius:8px;\n"
"background-color: rgb(223,223,223);\n"
"}\n"
""));
        progressBar_4->setValue(60);
        progressBar_4->setTextVisible(false);

        verticalLayout_8->addWidget(progressBar_4);


        horizontalLayout_14->addLayout(verticalLayout_8);

        label_18 = new QLabel(widget_10);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font4);
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(89, 217, 212);"));
        label_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_14->addWidget(label_18);


        horizontalLayout_13->addLayout(horizontalLayout_14);

        horizontalLayout_13->setStretch(0, 1);
        horizontalLayout_13->setStretch(1, 5);

        verticalLayout_10->addWidget(widget_10);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_8->addWidget(scrollArea);


        verticalLayout_5->addWidget(frame_4);

        verticalLayout_5->setStretch(1, 1);

        horizontalLayout_6->addLayout(verticalLayout_5);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 4);

        horizontalLayout_7->addWidget(frame);

        DSTClass->setCentralWidget(centralWidget);

        retranslateUi(DSTClass);

        QMetaObject::connectSlotsByName(DSTClass);
    } // setupUi

    void retranslateUi(QMainWindow *DSTClass)
    {
        DSTClass->setWindowTitle(QCoreApplication::translate("DSTClass", "DST", nullptr));
        label->setText(QCoreApplication::translate("DSTClass", "Erduo", nullptr));
        label_2->setText(QCoreApplication::translate("DSTClass", "Pro member", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("DSTClass", "Streams", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("DSTClass", "Games", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("DSTClass", "New", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("DSTClass", "Library", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_3->setText(QCoreApplication::translate("DSTClass", "Join pro", nullptr));
        label_4->setText(QCoreApplication::translate("DSTClass", "for free", nullptr));
        label_5->setText(QCoreApplication::translate("DSTClass", "games.", nullptr));
        label_6->setText(QCoreApplication::translate("DSTClass", "Active Games", nullptr));
        label_7->setText(QCoreApplication::translate("DSTClass", "Assossins Creed Vathaila", nullptr));
        label_8->setText(QCoreApplication::translate("DSTClass", "PS5 version", nullptr));
        progressBar->setFormat(QCoreApplication::translate("DSTClass", "%p%", nullptr));
        label_9->setText(QCoreApplication::translate("DSTClass", "50%", nullptr));
        label_10->setText(QCoreApplication::translate("DSTClass", "Assossins Creed Vathaila", nullptr));
        label_11->setText(QCoreApplication::translate("DSTClass", "PS5 version", nullptr));
        progressBar_2->setFormat(QCoreApplication::translate("DSTClass", "%p%", nullptr));
        label_12->setText(QCoreApplication::translate("DSTClass", "50%", nullptr));
        label_13->setText(QCoreApplication::translate("DSTClass", "Assossins Creed Vathaila", nullptr));
        label_14->setText(QCoreApplication::translate("DSTClass", "PS5 version", nullptr));
        progressBar_3->setFormat(QCoreApplication::translate("DSTClass", "%p%", nullptr));
        label_15->setText(QCoreApplication::translate("DSTClass", "50%", nullptr));
        label_19->setText(QCoreApplication::translate("DSTClass", "Assossins Creed Vathaila", nullptr));
        label_20->setText(QCoreApplication::translate("DSTClass", "PS5 version", nullptr));
        progressBar_5->setFormat(QCoreApplication::translate("DSTClass", "%p%", nullptr));
        label_21->setText(QCoreApplication::translate("DSTClass", "50%", nullptr));
        label_16->setText(QCoreApplication::translate("DSTClass", "Assossins Creed Vathaila", nullptr));
        label_17->setText(QCoreApplication::translate("DSTClass", "PS5 version", nullptr));
        progressBar_4->setFormat(QCoreApplication::translate("DSTClass", "%p%", nullptr));
        label_18->setText(QCoreApplication::translate("DSTClass", "50%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DSTClass: public Ui_DSTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DST_H
