/********************************************************************************
** Form generated from reading UI file 'scriptform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCRIPTFORM_H
#define UI_SCRIPTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScriptForm
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_scriptPath;
    QPushButton *pushButton_load;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_run;
    QPushButton *pushButton_debug;
    QPushButton *pushButton_suspend;
    QPushButton *pushButton_term;
    QLabel *label_status;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_freezeDuration;
    QSlider *horizontalSlider_freezeDuration;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBox_injuryProt;
    QCheckBox *checkBox_soulProt;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox_autorestart;
    QCheckBox *checkBox_freezestop;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_debug;

    void setupUi(QWidget *ScriptForm)
    {
        if (ScriptForm->objectName().isEmpty())
            ScriptForm->setObjectName(QString::fromUtf8("ScriptForm"));
        ScriptForm->resize(1142, 414);
        ScriptForm->setAcceptDrops(true);
        verticalLayout = new QVBoxLayout(ScriptForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(ScriptForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_scriptPath = new QLineEdit(groupBox);
        lineEdit_scriptPath->setObjectName(QString::fromUtf8("lineEdit_scriptPath"));
        lineEdit_scriptPath->setEnabled(false);

        horizontalLayout_2->addWidget(lineEdit_scriptPath);

        pushButton_load = new QPushButton(groupBox);
        pushButton_load->setObjectName(QString::fromUtf8("pushButton_load"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_load->sizePolicy().hasHeightForWidth());
        pushButton_load->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton_load);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_run = new QPushButton(groupBox);
        pushButton_run->setObjectName(QString::fromUtf8("pushButton_run"));
        pushButton_run->setEnabled(false);
        sizePolicy.setHeightForWidth(pushButton_run->sizePolicy().hasHeightForWidth());
        pushButton_run->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_run);

        pushButton_debug = new QPushButton(groupBox);
        pushButton_debug->setObjectName(QString::fromUtf8("pushButton_debug"));
        pushButton_debug->setEnabled(false);
        sizePolicy.setHeightForWidth(pushButton_debug->sizePolicy().hasHeightForWidth());
        pushButton_debug->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_debug);

        pushButton_suspend = new QPushButton(groupBox);
        pushButton_suspend->setObjectName(QString::fromUtf8("pushButton_suspend"));
        pushButton_suspend->setEnabled(false);
        sizePolicy.setHeightForWidth(pushButton_suspend->sizePolicy().hasHeightForWidth());
        pushButton_suspend->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_suspend);

        pushButton_term = new QPushButton(groupBox);
        pushButton_term->setObjectName(QString::fromUtf8("pushButton_term"));
        pushButton_term->setEnabled(false);
        sizePolicy.setHeightForWidth(pushButton_term->sizePolicy().hasHeightForWidth());
        pushButton_term->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_term);

        label_status = new QLabel(groupBox);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_status);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_freezeDuration = new QLabel(groupBox);
        label_freezeDuration->setObjectName(QString::fromUtf8("label_freezeDuration"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_freezeDuration->sizePolicy().hasHeightForWidth());
        label_freezeDuration->setSizePolicy(sizePolicy1);
        label_freezeDuration->setMinimumSize(QSize(512, 0));
        label_freezeDuration->setMaximumSize(QSize(512, 16777215));

        verticalLayout_6->addWidget(label_freezeDuration);

        horizontalSlider_freezeDuration = new QSlider(groupBox);
        horizontalSlider_freezeDuration->setObjectName(QString::fromUtf8("horizontalSlider_freezeDuration"));
        horizontalSlider_freezeDuration->setMinimum(10);
        horizontalSlider_freezeDuration->setMaximum(600);
        horizontalSlider_freezeDuration->setSingleStep(10);
        horizontalSlider_freezeDuration->setPageStep(100);
        horizontalSlider_freezeDuration->setValue(60);
        horizontalSlider_freezeDuration->setOrientation(Qt::Horizontal);
        horizontalSlider_freezeDuration->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_freezeDuration->setTickInterval(100);

        verticalLayout_6->addWidget(horizontalSlider_freezeDuration);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        checkBox_injuryProt = new QCheckBox(groupBox);
        checkBox_injuryProt->setObjectName(QString::fromUtf8("checkBox_injuryProt"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(checkBox_injuryProt->sizePolicy().hasHeightForWidth());
        checkBox_injuryProt->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(checkBox_injuryProt);

        checkBox_soulProt = new QCheckBox(groupBox);
        checkBox_soulProt->setObjectName(QString::fromUtf8("checkBox_soulProt"));
        sizePolicy2.setHeightForWidth(checkBox_soulProt->sizePolicy().hasHeightForWidth());
        checkBox_soulProt->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(checkBox_soulProt);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        checkBox_autorestart = new QCheckBox(groupBox);
        checkBox_autorestart->setObjectName(QString::fromUtf8("checkBox_autorestart"));
        checkBox_autorestart->setTristate(true);

        verticalLayout_3->addWidget(checkBox_autorestart);

        checkBox_freezestop = new QCheckBox(groupBox);
        checkBox_freezestop->setObjectName(QString::fromUtf8("checkBox_freezestop"));
        sizePolicy2.setHeightForWidth(checkBox_freezestop->sizePolicy().hasHeightForWidth());
        checkBox_freezestop->setSizePolicy(sizePolicy2);
        checkBox_freezestop->setTristate(true);

        verticalLayout_3->addWidget(checkBox_freezestop);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ScriptForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy3);
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_debug = new QVBoxLayout();
        verticalLayout_debug->setObjectName(QString::fromUtf8("verticalLayout_debug"));

        verticalLayout_5->addLayout(verticalLayout_debug);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(ScriptForm);

        QMetaObject::connectSlotsByName(ScriptForm);
    } // setupUi

    void retranslateUi(QWidget *ScriptForm)
    {
        ScriptForm->setWindowTitle(QString());
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("ScriptForm", "Script File", nullptr));
        pushButton_load->setText(QCoreApplication::translate("ScriptForm", "Load", nullptr));
        pushButton_run->setText(QCoreApplication::translate("ScriptForm", "Run", nullptr));
        pushButton_debug->setText(QCoreApplication::translate("ScriptForm", "Debug", nullptr));
        pushButton_suspend->setText(QCoreApplication::translate("ScriptForm", "Suspend", nullptr));
        pushButton_term->setText(QCoreApplication::translate("ScriptForm", "Terminate", nullptr));
        label_status->setText(QString());
        label_freezeDuration->setText(QCoreApplication::translate("ScriptForm", "Freeze Duration", nullptr));
#if QT_CONFIG(tooltip)
        horizontalSlider_freezeDuration->setToolTip(QCoreApplication::translate("ScriptForm", "Freeze Duration in Seconds.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkBox_injuryProt->setToolTip(QCoreApplication::translate("ScriptForm", "Stop script when injury.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_injuryProt->setText(QCoreApplication::translate("ScriptForm", "Injury Protect", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_soulProt->setToolTip(QCoreApplication::translate("ScriptForm", "Stop script when soul lost.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_soulProt->setText(QCoreApplication::translate("ScriptForm", "Soul Protect", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_autorestart->setToolTip(QCoreApplication::translate("ScriptForm", "<html><head/><body><p>Full-Checked: Restart script no matter what.</p><p>Partially-Checked: Restart script only when current player is not in battle status.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_autorestart->setText(QCoreApplication::translate("ScriptForm", "Auto Restart", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_freezestop->setToolTip(QCoreApplication::translate("ScriptForm", "<html><head/><body><p>Full-Checked: Stop script when current player's position stays unchanged for &lt;Freeze Duration&gt; seconds no matter what.</p><p>Partially-Checked: Stop script when current player's position stays unchanged for &lt;Freeze Duration&gt; seconds only if current player is not in battle state.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_freezestop->setText(QCoreApplication::translate("ScriptForm", "Freeze Stop", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ScriptForm", "Console / Debugger", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScriptForm: public Ui_ScriptForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCRIPTFORM_H
