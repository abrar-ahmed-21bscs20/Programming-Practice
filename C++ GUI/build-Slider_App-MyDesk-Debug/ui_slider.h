/********************************************************************************
** Form generated from reading UI file 'slider.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDER_H
#define UI_SLIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Slider
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QProgressBar *progressBar;
    QSlider *horizontalSlider;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Slider)
    {
        if (Slider->objectName().isEmpty())
            Slider->setObjectName(QString::fromUtf8("Slider"));
        Slider->resize(800, 600);
        centralwidget = new QWidget(Slider);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(230, 200, 291, 111));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        progressBar = new QProgressBar(widget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        Slider->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Slider);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Slider->setMenuBar(menubar);
        statusbar = new QStatusBar(Slider);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Slider->setStatusBar(statusbar);

        retranslateUi(Slider);

        QMetaObject::connectSlotsByName(Slider);
    } // setupUi

    void retranslateUi(QMainWindow *Slider)
    {
        Slider->setWindowTitle(QCoreApplication::translate("Slider", "Slider", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Slider: public Ui_Slider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDER_H
