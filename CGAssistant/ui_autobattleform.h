/********************************************************************************
** Form generated from reading UI file 'autobattleform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOBATTLEFORM_H
#define UI_AUTOBATTLEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoBattleForm
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_settings;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_autoBattle;
    QCheckBox *checkBox_highSpeed;
    QCheckBox *checkBox_firstRoundNoDelay;
    QCheckBox *checkBox_levelOneProtect;
    QCheckBox *checkBox_bossProtect;
    QCheckBox *checkBox_beep;
    QCheckBox *checkBox_lockCountdown;
    QCheckBox *checkBox_petDoubleAction;
    QCheckBox *checkBox_waitAfterBattle;
    QGridLayout *gridLayout;
    QLabel *label_delay_to;
    QLabel *label_delay_from_val;
    QLabel *label_delay;
    QLabel *label_delay_to_val;
    QSlider *horizontalSlider_delayTo;
    QSlider *horizontalSlider_delayFrom;
    QGroupBox *groupBox_list;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QComboBox *comboBox_petTargetSelect;
    QLabel *label_andPet;
    QComboBox *comboBox_petTarget;
    QLabel *label_playerTarget_2;
    QLabel *label_condition;
    QComboBox *comboBox_condition2_value;
    QPushButton *pushButton_del;
    QComboBox *comboBox_playerAction;
    QComboBox *comboBox_petTargetSelect_2;
    QComboBox *comboBox_condition2_type;
    QLabel *label_petSkillsFrom;
    QComboBox *comboBox_condition2_relation;
    QPushButton *pushButton_add;
    QLabel *label_condition_2;
    QComboBox *comboBox_petAction;
    QComboBox *comboBox_petAction_2;
    QComboBox *comboBox_condition_relation;
    QComboBox *comboBox_playerTargetSelect;
    QComboBox *comboBox_petTarget_2;
    QComboBox *comboBox_playerTarget;
    QLabel *label_thenPlayer;
    QPushButton *pushButton_moveDown;
    QComboBox *comboBox_condition_type;
    QPushButton *pushButton_moveUp;
    QLabel *label_playerTarget_3;
    QComboBox *comboBox_condition_value;
    QComboBox *comboBox_playerActionValue;
    QLabel *label_playerTarget;
    QLabel *label_andPet_2;
    QTableView *tableView_settings;

    void setupUi(QWidget *AutoBattleForm)
    {
        if (AutoBattleForm->objectName().isEmpty())
            AutoBattleForm->setObjectName(QString::fromUtf8("AutoBattleForm"));
        AutoBattleForm->resize(676, 418);
        horizontalLayout = new QHBoxLayout(AutoBattleForm);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_settings = new QGroupBox(AutoBattleForm);
        groupBox_settings->setObjectName(QString::fromUtf8("groupBox_settings"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_settings->sizePolicy().hasHeightForWidth());
        groupBox_settings->setSizePolicy(sizePolicy);
        groupBox_settings->setMinimumSize(QSize(128, 0));
        groupBox_settings->setMaximumSize(QSize(192, 16777215));
        verticalLayout_2 = new QVBoxLayout(groupBox_settings);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBox_autoBattle = new QCheckBox(groupBox_settings);
        checkBox_autoBattle->setObjectName(QString::fromUtf8("checkBox_autoBattle"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBox_autoBattle->sizePolicy().hasHeightForWidth());
        checkBox_autoBattle->setSizePolicy(sizePolicy1);
        checkBox_autoBattle->setChecked(true);

        verticalLayout_2->addWidget(checkBox_autoBattle);

        checkBox_highSpeed = new QCheckBox(groupBox_settings);
        checkBox_highSpeed->setObjectName(QString::fromUtf8("checkBox_highSpeed"));
        sizePolicy1.setHeightForWidth(checkBox_highSpeed->sizePolicy().hasHeightForWidth());
        checkBox_highSpeed->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(checkBox_highSpeed);

        checkBox_firstRoundNoDelay = new QCheckBox(groupBox_settings);
        checkBox_firstRoundNoDelay->setObjectName(QString::fromUtf8("checkBox_firstRoundNoDelay"));
        sizePolicy1.setHeightForWidth(checkBox_firstRoundNoDelay->sizePolicy().hasHeightForWidth());
        checkBox_firstRoundNoDelay->setSizePolicy(sizePolicy1);
        checkBox_firstRoundNoDelay->setChecked(true);

        verticalLayout_2->addWidget(checkBox_firstRoundNoDelay);

        checkBox_levelOneProtect = new QCheckBox(groupBox_settings);
        checkBox_levelOneProtect->setObjectName(QString::fromUtf8("checkBox_levelOneProtect"));
        sizePolicy1.setHeightForWidth(checkBox_levelOneProtect->sizePolicy().hasHeightForWidth());
        checkBox_levelOneProtect->setSizePolicy(sizePolicy1);
        checkBox_levelOneProtect->setChecked(false);

        verticalLayout_2->addWidget(checkBox_levelOneProtect);

        checkBox_bossProtect = new QCheckBox(groupBox_settings);
        checkBox_bossProtect->setObjectName(QString::fromUtf8("checkBox_bossProtect"));
        sizePolicy1.setHeightForWidth(checkBox_bossProtect->sizePolicy().hasHeightForWidth());
        checkBox_bossProtect->setSizePolicy(sizePolicy1);
        checkBox_bossProtect->setChecked(false);

        verticalLayout_2->addWidget(checkBox_bossProtect);

        checkBox_beep = new QCheckBox(groupBox_settings);
        checkBox_beep->setObjectName(QString::fromUtf8("checkBox_beep"));
        sizePolicy1.setHeightForWidth(checkBox_beep->sizePolicy().hasHeightForWidth());
        checkBox_beep->setSizePolicy(sizePolicy1);
        checkBox_beep->setCheckable(true);
        checkBox_beep->setChecked(false);

        verticalLayout_2->addWidget(checkBox_beep);

        checkBox_lockCountdown = new QCheckBox(groupBox_settings);
        checkBox_lockCountdown->setObjectName(QString::fromUtf8("checkBox_lockCountdown"));
        sizePolicy1.setHeightForWidth(checkBox_lockCountdown->sizePolicy().hasHeightForWidth());
        checkBox_lockCountdown->setSizePolicy(sizePolicy1);
        checkBox_lockCountdown->setChecked(false);

        verticalLayout_2->addWidget(checkBox_lockCountdown);

        checkBox_petDoubleAction = new QCheckBox(groupBox_settings);
        checkBox_petDoubleAction->setObjectName(QString::fromUtf8("checkBox_petDoubleAction"));
        sizePolicy1.setHeightForWidth(checkBox_petDoubleAction->sizePolicy().hasHeightForWidth());
        checkBox_petDoubleAction->setSizePolicy(sizePolicy1);
        checkBox_petDoubleAction->setChecked(false);

        verticalLayout_2->addWidget(checkBox_petDoubleAction);

        checkBox_waitAfterBattle = new QCheckBox(groupBox_settings);
        checkBox_waitAfterBattle->setObjectName(QString::fromUtf8("checkBox_waitAfterBattle"));
        sizePolicy1.setHeightForWidth(checkBox_waitAfterBattle->sizePolicy().hasHeightForWidth());
        checkBox_waitAfterBattle->setSizePolicy(sizePolicy1);
        checkBox_waitAfterBattle->setChecked(false);

        verticalLayout_2->addWidget(checkBox_waitAfterBattle);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_delay_to = new QLabel(groupBox_settings);
        label_delay_to->setObjectName(QString::fromUtf8("label_delay_to"));

        gridLayout->addWidget(label_delay_to, 2, 0, 1, 1);

        label_delay_from_val = new QLabel(groupBox_settings);
        label_delay_from_val->setObjectName(QString::fromUtf8("label_delay_from_val"));
        sizePolicy1.setHeightForWidth(label_delay_from_val->sizePolicy().hasHeightForWidth());
        label_delay_from_val->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_delay_from_val, 1, 1, 1, 1);

        label_delay = new QLabel(groupBox_settings);
        label_delay->setObjectName(QString::fromUtf8("label_delay"));

        gridLayout->addWidget(label_delay, 0, 0, 1, 1);

        label_delay_to_val = new QLabel(groupBox_settings);
        label_delay_to_val->setObjectName(QString::fromUtf8("label_delay_to_val"));
        sizePolicy1.setHeightForWidth(label_delay_to_val->sizePolicy().hasHeightForWidth());
        label_delay_to_val->setSizePolicy(sizePolicy1);
        label_delay_to_val->setStyleSheet(QString::fromUtf8("font-weight:bold; font-size:14px;"));

        gridLayout->addWidget(label_delay_to_val, 3, 1, 1, 1);

        horizontalSlider_delayTo = new QSlider(groupBox_settings);
        horizontalSlider_delayTo->setObjectName(QString::fromUtf8("horizontalSlider_delayTo"));
        horizontalSlider_delayTo->setMinimum(1);
        horizontalSlider_delayTo->setMaximum(10000);
        horizontalSlider_delayTo->setPageStep(100);
        horizontalSlider_delayTo->setValue(4500);
        horizontalSlider_delayTo->setSliderPosition(4500);
        horizontalSlider_delayTo->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_delayTo, 2, 1, 1, 1);

        horizontalSlider_delayFrom = new QSlider(groupBox_settings);
        horizontalSlider_delayFrom->setObjectName(QString::fromUtf8("horizontalSlider_delayFrom"));
        horizontalSlider_delayFrom->setMinimum(1);
        horizontalSlider_delayFrom->setMaximum(10000);
        horizontalSlider_delayFrom->setPageStep(100);
        horizontalSlider_delayFrom->setValue(4000);
        horizontalSlider_delayFrom->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_delayFrom, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        horizontalLayout->addWidget(groupBox_settings);

        groupBox_list = new QGroupBox(AutoBattleForm);
        groupBox_list->setObjectName(QString::fromUtf8("groupBox_list"));
        verticalLayout = new QVBoxLayout(groupBox_list);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        comboBox_petTargetSelect = new QComboBox(groupBox_list);
        comboBox_petTargetSelect->setObjectName(QString::fromUtf8("comboBox_petTargetSelect"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox_petTargetSelect->sizePolicy().hasHeightForWidth());
        comboBox_petTargetSelect->setSizePolicy(sizePolicy2);
        comboBox_petTargetSelect->setEditable(false);

        gridLayout_2->addWidget(comboBox_petTargetSelect, 5, 2, 1, 1);

        label_andPet = new QLabel(groupBox_list);
        label_andPet->setObjectName(QString::fromUtf8("label_andPet"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_andPet->sizePolicy().hasHeightForWidth());
        label_andPet->setSizePolicy(sizePolicy3);
        label_andPet->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_andPet, 4, 0, 1, 1, Qt::AlignRight);

        comboBox_petTarget = new QComboBox(groupBox_list);
        comboBox_petTarget->setObjectName(QString::fromUtf8("comboBox_petTarget"));
        sizePolicy2.setHeightForWidth(comboBox_petTarget->sizePolicy().hasHeightForWidth());
        comboBox_petTarget->setSizePolicy(sizePolicy2);
        comboBox_petTarget->setEditable(false);

        gridLayout_2->addWidget(comboBox_petTarget, 5, 1, 1, 1);

        label_playerTarget_2 = new QLabel(groupBox_list);
        label_playerTarget_2->setObjectName(QString::fromUtf8("label_playerTarget_2"));
        sizePolicy3.setHeightForWidth(label_playerTarget_2->sizePolicy().hasHeightForWidth());
        label_playerTarget_2->setSizePolicy(sizePolicy3);
        label_playerTarget_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_playerTarget_2, 5, 0, 1, 1, Qt::AlignRight);

        label_condition = new QLabel(groupBox_list);
        label_condition->setObjectName(QString::fromUtf8("label_condition"));
        sizePolicy3.setHeightForWidth(label_condition->sizePolicy().hasHeightForWidth());
        label_condition->setSizePolicy(sizePolicy3);
        label_condition->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_condition, 0, 0, 1, 1, Qt::AlignRight);

        comboBox_condition2_value = new QComboBox(groupBox_list);
        comboBox_condition2_value->setObjectName(QString::fromUtf8("comboBox_condition2_value"));
        sizePolicy2.setHeightForWidth(comboBox_condition2_value->sizePolicy().hasHeightForWidth());
        comboBox_condition2_value->setSizePolicy(sizePolicy2);
        comboBox_condition2_value->setEditable(true);

        gridLayout_2->addWidget(comboBox_condition2_value, 1, 3, 1, 1);

        pushButton_del = new QPushButton(groupBox_list);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_del->sizePolicy().hasHeightForWidth());
        pushButton_del->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(pushButton_del, 5, 3, 1, 1, Qt::AlignRight);

        comboBox_playerAction = new QComboBox(groupBox_list);
        comboBox_playerAction->setObjectName(QString::fromUtf8("comboBox_playerAction"));
        sizePolicy2.setHeightForWidth(comboBox_playerAction->sizePolicy().hasHeightForWidth());
        comboBox_playerAction->setSizePolicy(sizePolicy2);
        comboBox_playerAction->setEditable(true);

        gridLayout_2->addWidget(comboBox_playerAction, 2, 1, 1, 1);

        comboBox_petTargetSelect_2 = new QComboBox(groupBox_list);
        comboBox_petTargetSelect_2->setObjectName(QString::fromUtf8("comboBox_petTargetSelect_2"));
        sizePolicy2.setHeightForWidth(comboBox_petTargetSelect_2->sizePolicy().hasHeightForWidth());
        comboBox_petTargetSelect_2->setSizePolicy(sizePolicy2);
        comboBox_petTargetSelect_2->setEditable(false);

        gridLayout_2->addWidget(comboBox_petTargetSelect_2, 7, 2, 1, 1);

        comboBox_condition2_type = new QComboBox(groupBox_list);
        comboBox_condition2_type->setObjectName(QString::fromUtf8("comboBox_condition2_type"));
        sizePolicy2.setHeightForWidth(comboBox_condition2_type->sizePolicy().hasHeightForWidth());
        comboBox_condition2_type->setSizePolicy(sizePolicy2);
        comboBox_condition2_type->setEditable(false);

        gridLayout_2->addWidget(comboBox_condition2_type, 1, 1, 1, 1);

        label_petSkillsFrom = new QLabel(groupBox_list);
        label_petSkillsFrom->setObjectName(QString::fromUtf8("label_petSkillsFrom"));

        gridLayout_2->addWidget(label_petSkillsFrom, 4, 2, 1, 1);

        comboBox_condition2_relation = new QComboBox(groupBox_list);
        comboBox_condition2_relation->setObjectName(QString::fromUtf8("comboBox_condition2_relation"));
        sizePolicy2.setHeightForWidth(comboBox_condition2_relation->sizePolicy().hasHeightForWidth());
        comboBox_condition2_relation->setSizePolicy(sizePolicy2);
        comboBox_condition2_relation->setEditable(false);

        gridLayout_2->addWidget(comboBox_condition2_relation, 1, 2, 1, 1);

        pushButton_add = new QPushButton(groupBox_list);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        sizePolicy4.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(pushButton_add, 4, 3, 1, 1, Qt::AlignRight);

        label_condition_2 = new QLabel(groupBox_list);
        label_condition_2->setObjectName(QString::fromUtf8("label_condition_2"));
        sizePolicy3.setHeightForWidth(label_condition_2->sizePolicy().hasHeightForWidth());
        label_condition_2->setSizePolicy(sizePolicy3);
        label_condition_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_condition_2, 1, 0, 1, 1);

        comboBox_petAction = new QComboBox(groupBox_list);
        comboBox_petAction->setObjectName(QString::fromUtf8("comboBox_petAction"));
        sizePolicy2.setHeightForWidth(comboBox_petAction->sizePolicy().hasHeightForWidth());
        comboBox_petAction->setSizePolicy(sizePolicy2);
        comboBox_petAction->setEditable(true);

        gridLayout_2->addWidget(comboBox_petAction, 4, 1, 1, 1);

        comboBox_petAction_2 = new QComboBox(groupBox_list);
        comboBox_petAction_2->setObjectName(QString::fromUtf8("comboBox_petAction_2"));
        sizePolicy2.setHeightForWidth(comboBox_petAction_2->sizePolicy().hasHeightForWidth());
        comboBox_petAction_2->setSizePolicy(sizePolicy2);
        comboBox_petAction_2->setEditable(true);

        gridLayout_2->addWidget(comboBox_petAction_2, 6, 1, 1, 1);

        comboBox_condition_relation = new QComboBox(groupBox_list);
        comboBox_condition_relation->setObjectName(QString::fromUtf8("comboBox_condition_relation"));
        sizePolicy2.setHeightForWidth(comboBox_condition_relation->sizePolicy().hasHeightForWidth());
        comboBox_condition_relation->setSizePolicy(sizePolicy2);
        comboBox_condition_relation->setEditable(false);

        gridLayout_2->addWidget(comboBox_condition_relation, 0, 2, 1, 1);

        comboBox_playerTargetSelect = new QComboBox(groupBox_list);
        comboBox_playerTargetSelect->setObjectName(QString::fromUtf8("comboBox_playerTargetSelect"));
        sizePolicy2.setHeightForWidth(comboBox_playerTargetSelect->sizePolicy().hasHeightForWidth());
        comboBox_playerTargetSelect->setSizePolicy(sizePolicy2);
        comboBox_playerTargetSelect->setEditable(false);

        gridLayout_2->addWidget(comboBox_playerTargetSelect, 3, 2, 1, 1);

        comboBox_petTarget_2 = new QComboBox(groupBox_list);
        comboBox_petTarget_2->setObjectName(QString::fromUtf8("comboBox_petTarget_2"));
        sizePolicy2.setHeightForWidth(comboBox_petTarget_2->sizePolicy().hasHeightForWidth());
        comboBox_petTarget_2->setSizePolicy(sizePolicy2);
        comboBox_petTarget_2->setEditable(false);

        gridLayout_2->addWidget(comboBox_petTarget_2, 7, 1, 1, 1);

        comboBox_playerTarget = new QComboBox(groupBox_list);
        comboBox_playerTarget->setObjectName(QString::fromUtf8("comboBox_playerTarget"));
        sizePolicy2.setHeightForWidth(comboBox_playerTarget->sizePolicy().hasHeightForWidth());
        comboBox_playerTarget->setSizePolicy(sizePolicy2);
        comboBox_playerTarget->setEditable(false);

        gridLayout_2->addWidget(comboBox_playerTarget, 3, 1, 1, 1);

        label_thenPlayer = new QLabel(groupBox_list);
        label_thenPlayer->setObjectName(QString::fromUtf8("label_thenPlayer"));
        sizePolicy3.setHeightForWidth(label_thenPlayer->sizePolicy().hasHeightForWidth());
        label_thenPlayer->setSizePolicy(sizePolicy3);
        label_thenPlayer->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_thenPlayer, 2, 0, 1, 1, Qt::AlignRight);

        pushButton_moveDown = new QPushButton(groupBox_list);
        pushButton_moveDown->setObjectName(QString::fromUtf8("pushButton_moveDown"));
        sizePolicy4.setHeightForWidth(pushButton_moveDown->sizePolicy().hasHeightForWidth());
        pushButton_moveDown->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(pushButton_moveDown, 3, 3, 1, 1, Qt::AlignRight);

        comboBox_condition_type = new QComboBox(groupBox_list);
        comboBox_condition_type->setObjectName(QString::fromUtf8("comboBox_condition_type"));
        sizePolicy2.setHeightForWidth(comboBox_condition_type->sizePolicy().hasHeightForWidth());
        comboBox_condition_type->setSizePolicy(sizePolicy2);
        comboBox_condition_type->setEditable(false);

        gridLayout_2->addWidget(comboBox_condition_type, 0, 1, 1, 1);

        pushButton_moveUp = new QPushButton(groupBox_list);
        pushButton_moveUp->setObjectName(QString::fromUtf8("pushButton_moveUp"));
        sizePolicy4.setHeightForWidth(pushButton_moveUp->sizePolicy().hasHeightForWidth());
        pushButton_moveUp->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(pushButton_moveUp, 2, 3, 1, 1, Qt::AlignRight);

        label_playerTarget_3 = new QLabel(groupBox_list);
        label_playerTarget_3->setObjectName(QString::fromUtf8("label_playerTarget_3"));
        sizePolicy3.setHeightForWidth(label_playerTarget_3->sizePolicy().hasHeightForWidth());
        label_playerTarget_3->setSizePolicy(sizePolicy3);
        label_playerTarget_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_playerTarget_3, 7, 0, 1, 1);

        comboBox_condition_value = new QComboBox(groupBox_list);
        comboBox_condition_value->setObjectName(QString::fromUtf8("comboBox_condition_value"));
        sizePolicy2.setHeightForWidth(comboBox_condition_value->sizePolicy().hasHeightForWidth());
        comboBox_condition_value->setSizePolicy(sizePolicy2);
        comboBox_condition_value->setEditable(true);

        gridLayout_2->addWidget(comboBox_condition_value, 0, 3, 1, 1);

        comboBox_playerActionValue = new QComboBox(groupBox_list);
        comboBox_playerActionValue->setObjectName(QString::fromUtf8("comboBox_playerActionValue"));
        sizePolicy1.setHeightForWidth(comboBox_playerActionValue->sizePolicy().hasHeightForWidth());
        comboBox_playerActionValue->setSizePolicy(sizePolicy1);
        comboBox_playerActionValue->setEditable(true);

        gridLayout_2->addWidget(comboBox_playerActionValue, 2, 2, 1, 1);

        label_playerTarget = new QLabel(groupBox_list);
        label_playerTarget->setObjectName(QString::fromUtf8("label_playerTarget"));
        sizePolicy3.setHeightForWidth(label_playerTarget->sizePolicy().hasHeightForWidth());
        label_playerTarget->setSizePolicy(sizePolicy3);
        label_playerTarget->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_playerTarget, 3, 0, 1, 1, Qt::AlignRight);

        label_andPet_2 = new QLabel(groupBox_list);
        label_andPet_2->setObjectName(QString::fromUtf8("label_andPet_2"));
        sizePolicy3.setHeightForWidth(label_andPet_2->sizePolicy().hasHeightForWidth());
        label_andPet_2->setSizePolicy(sizePolicy3);
        label_andPet_2->setLayoutDirection(Qt::LeftToRight);
        label_andPet_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_andPet_2, 6, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        tableView_settings = new QTableView(groupBox_list);
        tableView_settings->setObjectName(QString::fromUtf8("tableView_settings"));
        tableView_settings->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_settings->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_settings->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableView_settings->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableView_settings->horizontalHeader()->setHighlightSections(false);
        tableView_settings->verticalHeader()->setHighlightSections(false);

        verticalLayout->addWidget(tableView_settings);


        horizontalLayout->addWidget(groupBox_list);

        QWidget::setTabOrder(checkBox_autoBattle, checkBox_highSpeed);
        QWidget::setTabOrder(checkBox_highSpeed, checkBox_firstRoundNoDelay);
        QWidget::setTabOrder(checkBox_firstRoundNoDelay, checkBox_levelOneProtect);
        QWidget::setTabOrder(checkBox_levelOneProtect, checkBox_lockCountdown);
        QWidget::setTabOrder(checkBox_lockCountdown, horizontalSlider_delayFrom);
        QWidget::setTabOrder(horizontalSlider_delayFrom, horizontalSlider_delayTo);
        QWidget::setTabOrder(horizontalSlider_delayTo, comboBox_condition_type);
        QWidget::setTabOrder(comboBox_condition_type, comboBox_condition_relation);
        QWidget::setTabOrder(comboBox_condition_relation, comboBox_condition_value);
        QWidget::setTabOrder(comboBox_condition_value, comboBox_condition2_type);
        QWidget::setTabOrder(comboBox_condition2_type, comboBox_condition2_relation);
        QWidget::setTabOrder(comboBox_condition2_relation, comboBox_condition2_value);
        QWidget::setTabOrder(comboBox_condition2_value, comboBox_playerAction);
        QWidget::setTabOrder(comboBox_playerAction, comboBox_playerActionValue);
        QWidget::setTabOrder(comboBox_playerActionValue, comboBox_playerTarget);
        QWidget::setTabOrder(comboBox_playerTarget, comboBox_playerTargetSelect);
        QWidget::setTabOrder(comboBox_playerTargetSelect, comboBox_petAction);
        QWidget::setTabOrder(comboBox_petAction, comboBox_petTarget);
        QWidget::setTabOrder(comboBox_petTarget, comboBox_petTargetSelect);
        QWidget::setTabOrder(comboBox_petTargetSelect, pushButton_moveUp);
        QWidget::setTabOrder(pushButton_moveUp, pushButton_moveDown);
        QWidget::setTabOrder(pushButton_moveDown, pushButton_add);
        QWidget::setTabOrder(pushButton_add, pushButton_del);
        QWidget::setTabOrder(pushButton_del, tableView_settings);

        retranslateUi(AutoBattleForm);

        QMetaObject::connectSlotsByName(AutoBattleForm);
    } // setupUi

    void retranslateUi(QWidget *AutoBattleForm)
    {
        AutoBattleForm->setWindowTitle(QCoreApplication::translate("AutoBattleForm", "Form", nullptr));
        groupBox_settings->setTitle(QString());
#if QT_CONFIG(tooltip)
        checkBox_autoBattle->setToolTip(QCoreApplication::translate("AutoBattleForm", "Enable autobattle", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_autoBattle->setText(QCoreApplication::translate("AutoBattleForm", "Auto Battle", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_highSpeed->setToolTip(QCoreApplication::translate("AutoBattleForm", "Block battle animation", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_highSpeed->setText(QCoreApplication::translate("AutoBattleForm", "High Speed", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_firstRoundNoDelay->setToolTip(QCoreApplication::translate("AutoBattleForm", "No extra delay for the first round", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_firstRoundNoDelay->setText(QCoreApplication::translate("AutoBattleForm", "First round\n"
"no delay", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_levelOneProtect->setToolTip(QCoreApplication::translate("AutoBattleForm", "Stop autobattle when meet Lv1 enemy", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_levelOneProtect->setText(QCoreApplication::translate("AutoBattleForm", "Stop when \n"
"meet Lv1 enemy", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_bossProtect->setToolTip(QCoreApplication::translate("AutoBattleForm", "Stop autobattle when meet BOSS", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_bossProtect->setText(QCoreApplication::translate("AutoBattleForm", "Stop when \n"
"meet BOSS", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_beep->setToolTip(QCoreApplication::translate("AutoBattleForm", "Play beep sound when autobattle stop", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_beep->setText(QCoreApplication::translate("AutoBattleForm", "Beep when stop", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_lockCountdown->setToolTip(QCoreApplication::translate("AutoBattleForm", "Lock countdown number in battle", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_lockCountdown->setText(QCoreApplication::translate("AutoBattleForm", "Lock countdown", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_petDoubleAction->setToolTip(QCoreApplication::translate("AutoBattleForm", "Enable \"Pet Double Action\" exploit", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_petDoubleAction->setText(QCoreApplication::translate("AutoBattleForm", "Pet Double\n"
"Action", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_waitAfterBattle->setToolTip(QCoreApplication::translate("AutoBattleForm", "Wait for X ms after battle end", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_waitAfterBattle->setText(QCoreApplication::translate("AutoBattleForm", "Wait after battle", nullptr));
        label_delay_to->setText(QCoreApplication::translate("AutoBattleForm", "Delay2", nullptr));
        label_delay_from_val->setStyleSheet(QCoreApplication::translate("AutoBattleForm", "font-weight:bold; font-size:14px;", nullptr));
        label_delay_from_val->setText(QString());
        label_delay->setText(QCoreApplication::translate("AutoBattleForm", "Delay1", nullptr));
        label_delay_to_val->setText(QString());
        groupBox_list->setTitle(QString());
        label_andPet->setText(QCoreApplication::translate("AutoBattleForm", "PET", nullptr));
        label_playerTarget_2->setText(QCoreApplication::translate("AutoBattleForm", "TO", nullptr));
        label_condition->setText(QCoreApplication::translate("AutoBattleForm", "IF", nullptr));
        pushButton_del->setText(QCoreApplication::translate("AutoBattleForm", "Delete", nullptr));
        label_petSkillsFrom->setText(QString());
        pushButton_add->setText(QCoreApplication::translate("AutoBattleForm", "Add", nullptr));
        label_condition_2->setText(QCoreApplication::translate("AutoBattleForm", "AND IF", nullptr));
        label_thenPlayer->setText(QCoreApplication::translate("AutoBattleForm", "PLAYER", nullptr));
        pushButton_moveDown->setText(QCoreApplication::translate("AutoBattleForm", "Move down", nullptr));
        pushButton_moveUp->setText(QCoreApplication::translate("AutoBattleForm", "Move up", nullptr));
        label_playerTarget_3->setText(QCoreApplication::translate("AutoBattleForm", "TO2", nullptr));
        label_playerTarget->setText(QCoreApplication::translate("AutoBattleForm", "TO", nullptr));
        label_andPet_2->setText(QCoreApplication::translate("AutoBattleForm", "PET2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AutoBattleForm: public Ui_AutoBattleForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOBATTLEFORM_H
