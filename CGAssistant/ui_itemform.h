/********************************************************************************
** Form generated from reading UI file 'itemform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMFORM_H
#define UI_ITEMFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mylistview.h"

QT_BEGIN_NAMESPACE

class Ui_ItemForm
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_Drop;
    QVBoxLayout *verticalLayout_2;
    MyListView *listView_drop;
    QLineEdit *lineEdit_drop;
    QGroupBox *groupBox_Tweak;
    QVBoxLayout *verticalLayout_3;
    MyListView *listView_tweak;
    QLineEdit *lineEdit_tweak;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;

    void setupUi(QWidget *ItemForm)
    {
        if (ItemForm->objectName().isEmpty())
            ItemForm->setObjectName(QString::fromUtf8("ItemForm"));
        ItemForm->resize(651, 417);
        horizontalLayout = new QHBoxLayout(ItemForm);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_Drop = new QGroupBox(ItemForm);
        groupBox_Drop->setObjectName(QString::fromUtf8("groupBox_Drop"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_Drop->sizePolicy().hasHeightForWidth());
        groupBox_Drop->setSizePolicy(sizePolicy);
        groupBox_Drop->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_2 = new QVBoxLayout(groupBox_Drop);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        listView_drop = new MyListView(groupBox_Drop);
        listView_drop->setObjectName(QString::fromUtf8("listView_drop"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listView_drop->sizePolicy().hasHeightForWidth());
        listView_drop->setSizePolicy(sizePolicy1);
        listView_drop->setMinimumSize(QSize(0, 0));
        listView_drop->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_2->addWidget(listView_drop);

        lineEdit_drop = new QLineEdit(groupBox_Drop);
        lineEdit_drop->setObjectName(QString::fromUtf8("lineEdit_drop"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_drop->sizePolicy().hasHeightForWidth());
        lineEdit_drop->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(lineEdit_drop);


        horizontalLayout->addWidget(groupBox_Drop);

        groupBox_Tweak = new QGroupBox(ItemForm);
        groupBox_Tweak->setObjectName(QString::fromUtf8("groupBox_Tweak"));
        verticalLayout_3 = new QVBoxLayout(groupBox_Tweak);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        listView_tweak = new MyListView(groupBox_Tweak);
        listView_tweak->setObjectName(QString::fromUtf8("listView_tweak"));
        sizePolicy1.setHeightForWidth(listView_tweak->sizePolicy().hasHeightForWidth());
        listView_tweak->setSizePolicy(sizePolicy1);
        listView_tweak->setMinimumSize(QSize(0, 0));
        listView_tweak->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_3->addWidget(listView_tweak);

        lineEdit_tweak = new QLineEdit(groupBox_Tweak);
        lineEdit_tweak->setObjectName(QString::fromUtf8("lineEdit_tweak"));
        sizePolicy2.setHeightForWidth(lineEdit_tweak->sizePolicy().hasHeightForWidth());
        lineEdit_tweak->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(lineEdit_tweak);


        horizontalLayout->addWidget(groupBox_Tweak);

        groupBox_2 = new QGroupBox(ItemForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(groupBox_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy3);
        tableView->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableView->setAlternatingRowColors(false);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableView->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableView->setShowGrid(true);

        verticalLayout->addWidget(tableView);


        horizontalLayout->addWidget(groupBox_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 5);

        retranslateUi(ItemForm);

        QMetaObject::connectSlotsByName(ItemForm);
    } // setupUi

    void retranslateUi(QWidget *ItemForm)
    {
        ItemForm->setWindowTitle(QCoreApplication::translate("ItemForm", "Form", nullptr));
        groupBox_Drop->setTitle(QCoreApplication::translate("ItemForm", "Auto Drop", nullptr));
        groupBox_Tweak->setTitle(QCoreApplication::translate("ItemForm", "Auto Tweak", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ItemForm", "Items", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemForm: public Ui_ItemForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMFORM_H
