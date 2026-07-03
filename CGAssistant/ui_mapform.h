/********************************************************************************
** Form generated from reading UI file 'mapform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPFORM_H
#define UI_MAPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mypaintmap.h"

QT_BEGIN_NAMESPACE

class Ui_MapForm
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_index;
    QLabel *label_xy;
    QLabel *label_xy_2;
    QLabel *label_mapname;
    QLabel *label_key;
    QCheckBox *checkBox_showcrosshair;
    QPushButton *pushButton_loadmap;
    MyPaintMap *widget_paintmap;

    void setupUi(QWidget *MapForm)
    {
        if (MapForm->objectName().isEmpty())
            MapForm->setObjectName(QString::fromUtf8("MapForm"));
        MapForm->resize(558, 370);
        horizontalLayout = new QHBoxLayout(MapForm);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_index = new QLabel(MapForm);
        label_index->setObjectName(QString::fromUtf8("label_index"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_index->sizePolicy().hasHeightForWidth());
        label_index->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_index);

        label_xy = new QLabel(MapForm);
        label_xy->setObjectName(QString::fromUtf8("label_xy"));
        sizePolicy.setHeightForWidth(label_xy->sizePolicy().hasHeightForWidth());
        label_xy->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_xy);

        label_xy_2 = new QLabel(MapForm);
        label_xy_2->setObjectName(QString::fromUtf8("label_xy_2"));
        sizePolicy.setHeightForWidth(label_xy_2->sizePolicy().hasHeightForWidth());
        label_xy_2->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_xy_2);

        label_mapname = new QLabel(MapForm);
        label_mapname->setObjectName(QString::fromUtf8("label_mapname"));
        sizePolicy.setHeightForWidth(label_mapname->sizePolicy().hasHeightForWidth());
        label_mapname->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_mapname);

        label_key = new QLabel(MapForm);
        label_key->setObjectName(QString::fromUtf8("label_key"));

        verticalLayout->addWidget(label_key);

        checkBox_showcrosshair = new QCheckBox(MapForm);
        checkBox_showcrosshair->setObjectName(QString::fromUtf8("checkBox_showcrosshair"));
        checkBox_showcrosshair->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(checkBox_showcrosshair);

        pushButton_loadmap = new QPushButton(MapForm);
        pushButton_loadmap->setObjectName(QString::fromUtf8("pushButton_loadmap"));
        pushButton_loadmap->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(pushButton_loadmap);


        horizontalLayout->addLayout(verticalLayout);

        widget_paintmap = new MyPaintMap(MapForm);
        widget_paintmap->setObjectName(QString::fromUtf8("widget_paintmap"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_paintmap->sizePolicy().hasHeightForWidth());
        widget_paintmap->setSizePolicy(sizePolicy1);
        widget_paintmap->setFocusPolicy(Qt::NoFocus);
        widget_paintmap->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout->addWidget(widget_paintmap);


        retranslateUi(MapForm);

        QMetaObject::connectSlotsByName(MapForm);
    } // setupUi

    void retranslateUi(QWidget *MapForm)
    {
        MapForm->setWindowTitle(QCoreApplication::translate("MapForm", "Form", nullptr));
        label_index->setText(QString());
        label_xy->setText(QString());
        label_xy_2->setText(QString());
        label_mapname->setText(QString());
        label_key->setText(QCoreApplication::translate("MapForm", "<html><head/><body><p>S: Stop navigation</p><p>C: Center the map view</p><p>R: Reset the map view</p><p>G: Manual navigation by input</p><p>M1: Show NPCs</p><p>M2: Manual navigation by click</p><p>M3: Scaleup the map view</p></body></html>", nullptr));
        checkBox_showcrosshair->setText(QCoreApplication::translate("MapForm", "Show Crosshair", nullptr));
        pushButton_loadmap->setText(QCoreApplication::translate("MapForm", "Download Map", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MapForm: public Ui_MapForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPFORM_H
