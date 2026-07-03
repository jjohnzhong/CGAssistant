/********************************************************************************
** Form generated from reading UI file 'processform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSFORM_H
#define UI_PROCESSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableView *tableView_process;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_syncwnd;
    QComboBox *comboBox_size;
    QPushButton *pushButton_attach;

    void setupUi(QWidget *ProcessForm)
    {
        if (ProcessForm->objectName().isEmpty())
            ProcessForm->setObjectName(QString::fromUtf8("ProcessForm"));
        ProcessForm->resize(657, 439);
        verticalLayout_2 = new QVBoxLayout(ProcessForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(ProcessForm);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        tableView_process = new QTableView(ProcessForm);
        tableView_process->setObjectName(QString::fromUtf8("tableView_process"));
        tableView_process->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_process->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_process->horizontalHeader()->setHighlightSections(false);
        tableView_process->verticalHeader()->setHighlightSections(false);

        verticalLayout_2->addWidget(tableView_process);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox_syncwnd = new QCheckBox(ProcessForm);
        checkBox_syncwnd->setObjectName(QString::fromUtf8("checkBox_syncwnd"));
        checkBox_syncwnd->setChecked(true);

        horizontalLayout->addWidget(checkBox_syncwnd);

        comboBox_size = new QComboBox(ProcessForm);
        comboBox_size->setObjectName(QString::fromUtf8("comboBox_size"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_size->sizePolicy().hasHeightForWidth());
        comboBox_size->setSizePolicy(sizePolicy);
        comboBox_size->setMaximumSize(QSize(128, 16777215));

        horizontalLayout->addWidget(comboBox_size);

        pushButton_attach = new QPushButton(ProcessForm);
        pushButton_attach->setObjectName(QString::fromUtf8("pushButton_attach"));
        sizePolicy.setHeightForWidth(pushButton_attach->sizePolicy().hasHeightForWidth());
        pushButton_attach->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_attach);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(ProcessForm);

        QMetaObject::connectSlotsByName(ProcessForm);
    } // setupUi

    void retranslateUi(QWidget *ProcessForm)
    {
        ProcessForm->setWindowTitle(QCoreApplication::translate("ProcessForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("ProcessForm", "Select a game window to attach", nullptr));
        checkBox_syncwnd->setText(QCoreApplication::translate("ProcessForm", "Syncronize Window", nullptr));
        pushButton_attach->setText(QCoreApplication::translate("ProcessForm", "Attach", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProcessForm: public Ui_ProcessForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSFORM_H
