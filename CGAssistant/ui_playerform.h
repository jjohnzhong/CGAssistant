/********************************************************************************
** Form generated from reading UI file 'playerform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERFORM_H
#define UI_PLAYERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayerForm
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_player;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_map;
    QLineEdit *lineEdit_mapxy;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_playerName;
    QLineEdit *lineEdit_playerName;
    QLabel *label_job;
    QLineEdit *lineEdit_job;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_lv;
    QLineEdit *lineEdit_level;
    QLabel *label_cardtime;
    QLineEdit *lineEdit_punchClock;
    QLabel *label_gold;
    QLineEdit *lineEdit_gold;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_hp;
    QLineEdit *lineEdit_hp;
    QLabel *label_mp;
    QLineEdit *lineEdit_mp;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_xp;
    QLineEdit *lineEdit_xp;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_xp_remain;
    QLineEdit *lineEdit_xp_remain;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *checkBox_useFood;
    QCheckBox *checkBox_petFood;
    QCheckBox *checkBox_autoSupply;
    QHBoxLayout *horizontalLayout_14;
    QCheckBox *checkBox_useMed;
    QCheckBox *checkBox_petMed;
    QCheckBox *checkBox_SwitchAnim;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_GameTextUI;
    QCheckBox *checkBox_AntiAFKKick;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_useFoodAt;
    QComboBox *comboBox_useFoodAt;
    QLabel *label_petFoodAt;
    QComboBox *comboBox_petFoodAt;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_useMedAt;
    QComboBox *comboBox_useMedAt;
    QLabel *label_petMedAt;
    QComboBox *comboBox_petMedAt;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_workacc;
    QSlider *horizontalSlider_workacc;
    QLabel *label_workaccval;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_workdelay;
    QSlider *horizontalSlider_workdelay;
    QLabel *label_workdelayval;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_movespd;
    QSlider *horizontalSlider_movespd;
    QLabel *label_spdvalue;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButton_save;
    QPushButton *pushButton_load;
    QGroupBox *groupBox_skills;
    QVBoxLayout *verticalLayout;
    QTreeView *treeView_skills;
    QGroupBox *groupBox_pets;
    QVBoxLayout *verticalLayout_2;
    QTreeView *treeView_pets;

    void setupUi(QWidget *PlayerForm)
    {
        if (PlayerForm->objectName().isEmpty())
            PlayerForm->setObjectName(QString::fromUtf8("PlayerForm"));
        PlayerForm->resize(727, 544);
        horizontalLayout = new QHBoxLayout(PlayerForm);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_player = new QGroupBox(PlayerForm);
        groupBox_player->setObjectName(QString::fromUtf8("groupBox_player"));
        verticalLayout_3 = new QVBoxLayout(groupBox_player);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lineEdit_map = new QLineEdit(groupBox_player);
        lineEdit_map->setObjectName(QString::fromUtf8("lineEdit_map"));
        lineEdit_map->setMinimumSize(QSize(0, 32));
        lineEdit_map->setMaximumSize(QSize(16777215, 32));
        lineEdit_map->setAcceptDrops(false);
        lineEdit_map->setStyleSheet(QString::fromUtf8("background:transparent; border:none;font-size:16px;font-weight:bold;"));
        lineEdit_map->setAlignment(Qt::AlignCenter);
        lineEdit_map->setReadOnly(false);

        verticalLayout_4->addWidget(lineEdit_map);

        lineEdit_mapxy = new QLineEdit(groupBox_player);
        lineEdit_mapxy->setObjectName(QString::fromUtf8("lineEdit_mapxy"));
        lineEdit_mapxy->setMinimumSize(QSize(0, 24));
        lineEdit_mapxy->setMaximumSize(QSize(16777215, 24));
        lineEdit_mapxy->setAcceptDrops(false);
        lineEdit_mapxy->setStyleSheet(QString::fromUtf8("background:transparent; border:none;font-size:14px;"));
        lineEdit_mapxy->setAlignment(Qt::AlignCenter);
        lineEdit_mapxy->setReadOnly(false);

        verticalLayout_4->addWidget(lineEdit_mapxy);


        verticalLayout_3->addLayout(verticalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_playerName = new QLabel(groupBox_player);
        label_playerName->setObjectName(QString::fromUtf8("label_playerName"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_playerName->sizePolicy().hasHeightForWidth());
        label_playerName->setSizePolicy(sizePolicy);
        label_playerName->setMinimumSize(QSize(32, 0));
        label_playerName->setMaximumSize(QSize(16777215, 16777215));
        label_playerName->setTextFormat(Qt::PlainText);
        label_playerName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_playerName);

        lineEdit_playerName = new QLineEdit(groupBox_player);
        lineEdit_playerName->setObjectName(QString::fromUtf8("lineEdit_playerName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_playerName->sizePolicy().hasHeightForWidth());
        lineEdit_playerName->setSizePolicy(sizePolicy1);
        lineEdit_playerName->setReadOnly(false);

        horizontalLayout_2->addWidget(lineEdit_playerName);

        label_job = new QLabel(groupBox_player);
        label_job->setObjectName(QString::fromUtf8("label_job"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_job->sizePolicy().hasHeightForWidth());
        label_job->setSizePolicy(sizePolicy2);
        label_job->setMinimumSize(QSize(0, 0));
        label_job->setMaximumSize(QSize(16777215, 16777215));
        label_job->setTextFormat(Qt::PlainText);
        label_job->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_job);

        lineEdit_job = new QLineEdit(groupBox_player);
        lineEdit_job->setObjectName(QString::fromUtf8("lineEdit_job"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_job->sizePolicy().hasHeightForWidth());
        lineEdit_job->setSizePolicy(sizePolicy3);
        lineEdit_job->setMinimumSize(QSize(96, 0));
        lineEdit_job->setMaximumSize(QSize(96, 16777215));
        lineEdit_job->setReadOnly(false);

        horizontalLayout_2->addWidget(lineEdit_job);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_lv = new QLabel(groupBox_player);
        label_lv->setObjectName(QString::fromUtf8("label_lv"));
        sizePolicy.setHeightForWidth(label_lv->sizePolicy().hasHeightForWidth());
        label_lv->setSizePolicy(sizePolicy);
        label_lv->setMinimumSize(QSize(32, 0));
        label_lv->setMaximumSize(QSize(16777215, 16777215));
        label_lv->setTextFormat(Qt::PlainText);
        label_lv->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_lv);

        lineEdit_level = new QLineEdit(groupBox_player);
        lineEdit_level->setObjectName(QString::fromUtf8("lineEdit_level"));
        sizePolicy3.setHeightForWidth(lineEdit_level->sizePolicy().hasHeightForWidth());
        lineEdit_level->setSizePolicy(sizePolicy3);
        lineEdit_level->setMinimumSize(QSize(32, 0));
        lineEdit_level->setMaximumSize(QSize(32, 16777215));
        lineEdit_level->setReadOnly(false);

        horizontalLayout_3->addWidget(lineEdit_level);

        label_cardtime = new QLabel(groupBox_player);
        label_cardtime->setObjectName(QString::fromUtf8("label_cardtime"));
        sizePolicy.setHeightForWidth(label_cardtime->sizePolicy().hasHeightForWidth());
        label_cardtime->setSizePolicy(sizePolicy);
        label_cardtime->setMinimumSize(QSize(32, 0));
        label_cardtime->setMaximumSize(QSize(16777215, 16777215));
        label_cardtime->setTextFormat(Qt::PlainText);
        label_cardtime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_cardtime);

        lineEdit_punchClock = new QLineEdit(groupBox_player);
        lineEdit_punchClock->setObjectName(QString::fromUtf8("lineEdit_punchClock"));
        sizePolicy3.setHeightForWidth(lineEdit_punchClock->sizePolicy().hasHeightForWidth());
        lineEdit_punchClock->setSizePolicy(sizePolicy3);
        lineEdit_punchClock->setMinimumSize(QSize(64, 0));
        lineEdit_punchClock->setMaximumSize(QSize(64, 16777215));
        lineEdit_punchClock->setReadOnly(false);

        horizontalLayout_3->addWidget(lineEdit_punchClock);

        label_gold = new QLabel(groupBox_player);
        label_gold->setObjectName(QString::fromUtf8("label_gold"));
        sizePolicy2.setHeightForWidth(label_gold->sizePolicy().hasHeightForWidth());
        label_gold->setSizePolicy(sizePolicy2);
        label_gold->setMinimumSize(QSize(0, 0));
        label_gold->setMaximumSize(QSize(16777215, 16777215));
        label_gold->setTextFormat(Qt::PlainText);
        label_gold->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_gold);

        lineEdit_gold = new QLineEdit(groupBox_player);
        lineEdit_gold->setObjectName(QString::fromUtf8("lineEdit_gold"));
        sizePolicy3.setHeightForWidth(lineEdit_gold->sizePolicy().hasHeightForWidth());
        lineEdit_gold->setSizePolicy(sizePolicy3);
        lineEdit_gold->setMinimumSize(QSize(96, 0));
        lineEdit_gold->setMaximumSize(QSize(96, 16777215));
        lineEdit_gold->setReadOnly(false);

        horizontalLayout_3->addWidget(lineEdit_gold);

        horizontalLayout_3->setStretch(0, 1);

        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_hp = new QLabel(groupBox_player);
        label_hp->setObjectName(QString::fromUtf8("label_hp"));
        sizePolicy.setHeightForWidth(label_hp->sizePolicy().hasHeightForWidth());
        label_hp->setSizePolicy(sizePolicy);
        label_hp->setMinimumSize(QSize(32, 0));
        label_hp->setMaximumSize(QSize(16777215, 16777215));
        label_hp->setTextFormat(Qt::PlainText);
        label_hp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_hp);

        lineEdit_hp = new QLineEdit(groupBox_player);
        lineEdit_hp->setObjectName(QString::fromUtf8("lineEdit_hp"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEdit_hp->sizePolicy().hasHeightForWidth());
        lineEdit_hp->setSizePolicy(sizePolicy4);
        lineEdit_hp->setReadOnly(false);

        horizontalLayout_5->addWidget(lineEdit_hp);

        label_mp = new QLabel(groupBox_player);
        label_mp->setObjectName(QString::fromUtf8("label_mp"));
        sizePolicy.setHeightForWidth(label_mp->sizePolicy().hasHeightForWidth());
        label_mp->setSizePolicy(sizePolicy);
        label_mp->setMinimumSize(QSize(32, 0));
        label_mp->setMaximumSize(QSize(16777215, 16777215));
        label_mp->setTextFormat(Qt::PlainText);
        label_mp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_mp);

        lineEdit_mp = new QLineEdit(groupBox_player);
        lineEdit_mp->setObjectName(QString::fromUtf8("lineEdit_mp"));
        sizePolicy4.setHeightForWidth(lineEdit_mp->sizePolicy().hasHeightForWidth());
        lineEdit_mp->setSizePolicy(sizePolicy4);
        lineEdit_mp->setReadOnly(false);

        horizontalLayout_5->addWidget(lineEdit_mp);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_xp = new QLabel(groupBox_player);
        label_xp->setObjectName(QString::fromUtf8("label_xp"));
        sizePolicy.setHeightForWidth(label_xp->sizePolicy().hasHeightForWidth());
        label_xp->setSizePolicy(sizePolicy);
        label_xp->setMinimumSize(QSize(32, 0));
        label_xp->setMaximumSize(QSize(16777215, 16777215));
        label_xp->setTextFormat(Qt::PlainText);
        label_xp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_xp);

        lineEdit_xp = new QLineEdit(groupBox_player);
        lineEdit_xp->setObjectName(QString::fromUtf8("lineEdit_xp"));
        sizePolicy1.setHeightForWidth(lineEdit_xp->sizePolicy().hasHeightForWidth());
        lineEdit_xp->setSizePolicy(sizePolicy1);
        lineEdit_xp->setReadOnly(false);

        horizontalLayout_6->addWidget(lineEdit_xp);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_xp_remain = new QLabel(groupBox_player);
        label_xp_remain->setObjectName(QString::fromUtf8("label_xp_remain"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_xp_remain->sizePolicy().hasHeightForWidth());
        label_xp_remain->setSizePolicy(sizePolicy5);
        label_xp_remain->setMinimumSize(QSize(0, 0));
        label_xp_remain->setMaximumSize(QSize(16777215, 16777215));
        label_xp_remain->setTextFormat(Qt::PlainText);
        label_xp_remain->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_xp_remain);

        lineEdit_xp_remain = new QLineEdit(groupBox_player);
        lineEdit_xp_remain->setObjectName(QString::fromUtf8("lineEdit_xp_remain"));
        sizePolicy1.setHeightForWidth(lineEdit_xp_remain->sizePolicy().hasHeightForWidth());
        lineEdit_xp_remain->setSizePolicy(sizePolicy1);
        lineEdit_xp_remain->setReadOnly(false);

        horizontalLayout_7->addWidget(lineEdit_xp_remain);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        checkBox_useFood = new QCheckBox(groupBox_player);
        checkBox_useFood->setObjectName(QString::fromUtf8("checkBox_useFood"));
        checkBox_useFood->setEnabled(true);
        checkBox_useFood->setCheckable(true);
        checkBox_useFood->setTristate(false);

        horizontalLayout_9->addWidget(checkBox_useFood);

        checkBox_petFood = new QCheckBox(groupBox_player);
        checkBox_petFood->setObjectName(QString::fromUtf8("checkBox_petFood"));
        checkBox_petFood->setEnabled(true);
        checkBox_petFood->setCheckable(true);
        checkBox_petFood->setTristate(false);

        horizontalLayout_9->addWidget(checkBox_petFood);

        checkBox_autoSupply = new QCheckBox(groupBox_player);
        checkBox_autoSupply->setObjectName(QString::fromUtf8("checkBox_autoSupply"));
        sizePolicy4.setHeightForWidth(checkBox_autoSupply->sizePolicy().hasHeightForWidth());
        checkBox_autoSupply->setSizePolicy(sizePolicy4);
        checkBox_autoSupply->setLayoutDirection(Qt::LeftToRight);
        checkBox_autoSupply->setTristate(false);

        horizontalLayout_9->addWidget(checkBox_autoSupply, 0, Qt::AlignRight);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        checkBox_useMed = new QCheckBox(groupBox_player);
        checkBox_useMed->setObjectName(QString::fromUtf8("checkBox_useMed"));
        checkBox_useMed->setEnabled(true);
        checkBox_useMed->setCheckable(true);
        checkBox_useMed->setTristate(false);

        horizontalLayout_14->addWidget(checkBox_useMed);

        checkBox_petMed = new QCheckBox(groupBox_player);
        checkBox_petMed->setObjectName(QString::fromUtf8("checkBox_petMed"));
        checkBox_petMed->setEnabled(true);
        checkBox_petMed->setCheckable(true);
        checkBox_petMed->setTristate(false);

        horizontalLayout_14->addWidget(checkBox_petMed);

        checkBox_SwitchAnim = new QCheckBox(groupBox_player);
        checkBox_SwitchAnim->setObjectName(QString::fromUtf8("checkBox_SwitchAnim"));
        sizePolicy4.setHeightForWidth(checkBox_SwitchAnim->sizePolicy().hasHeightForWidth());
        checkBox_SwitchAnim->setSizePolicy(sizePolicy4);
        checkBox_SwitchAnim->setLayoutDirection(Qt::LeftToRight);
        checkBox_SwitchAnim->setTristate(false);

        horizontalLayout_14->addWidget(checkBox_SwitchAnim);


        verticalLayout_3->addLayout(horizontalLayout_14);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        checkBox_GameTextUI = new QCheckBox(groupBox_player);
        checkBox_GameTextUI->setObjectName(QString::fromUtf8("checkBox_GameTextUI"));
        sizePolicy4.setHeightForWidth(checkBox_GameTextUI->sizePolicy().hasHeightForWidth());
        checkBox_GameTextUI->setSizePolicy(sizePolicy4);
        checkBox_GameTextUI->setLayoutDirection(Qt::LeftToRight);
        checkBox_GameTextUI->setTristate(false);

        horizontalLayout_4->addWidget(checkBox_GameTextUI);

        checkBox_AntiAFKKick = new QCheckBox(groupBox_player);
        checkBox_AntiAFKKick->setObjectName(QString::fromUtf8("checkBox_AntiAFKKick"));
        sizePolicy4.setHeightForWidth(checkBox_AntiAFKKick->sizePolicy().hasHeightForWidth());
        checkBox_AntiAFKKick->setSizePolicy(sizePolicy4);
        checkBox_AntiAFKKick->setLayoutDirection(Qt::LeftToRight);
        checkBox_AntiAFKKick->setTristate(false);

        horizontalLayout_4->addWidget(checkBox_AntiAFKKick);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_useFoodAt = new QLabel(groupBox_player);
        label_useFoodAt->setObjectName(QString::fromUtf8("label_useFoodAt"));

        horizontalLayout_15->addWidget(label_useFoodAt);

        comboBox_useFoodAt = new QComboBox(groupBox_player);
        comboBox_useFoodAt->setObjectName(QString::fromUtf8("comboBox_useFoodAt"));
        sizePolicy4.setHeightForWidth(comboBox_useFoodAt->sizePolicy().hasHeightForWidth());
        comboBox_useFoodAt->setSizePolicy(sizePolicy4);
        comboBox_useFoodAt->setEditable(true);

        horizontalLayout_15->addWidget(comboBox_useFoodAt);

        label_petFoodAt = new QLabel(groupBox_player);
        label_petFoodAt->setObjectName(QString::fromUtf8("label_petFoodAt"));

        horizontalLayout_15->addWidget(label_petFoodAt);

        comboBox_petFoodAt = new QComboBox(groupBox_player);
        comboBox_petFoodAt->setObjectName(QString::fromUtf8("comboBox_petFoodAt"));
        sizePolicy4.setHeightForWidth(comboBox_petFoodAt->sizePolicy().hasHeightForWidth());
        comboBox_petFoodAt->setSizePolicy(sizePolicy4);
        comboBox_petFoodAt->setEditable(true);

        horizontalLayout_15->addWidget(comboBox_petFoodAt);


        verticalLayout_3->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_useMedAt = new QLabel(groupBox_player);
        label_useMedAt->setObjectName(QString::fromUtf8("label_useMedAt"));

        horizontalLayout_16->addWidget(label_useMedAt);

        comboBox_useMedAt = new QComboBox(groupBox_player);
        comboBox_useMedAt->setObjectName(QString::fromUtf8("comboBox_useMedAt"));
        sizePolicy4.setHeightForWidth(comboBox_useMedAt->sizePolicy().hasHeightForWidth());
        comboBox_useMedAt->setSizePolicy(sizePolicy4);
        comboBox_useMedAt->setEditable(true);

        horizontalLayout_16->addWidget(comboBox_useMedAt);

        label_petMedAt = new QLabel(groupBox_player);
        label_petMedAt->setObjectName(QString::fromUtf8("label_petMedAt"));

        horizontalLayout_16->addWidget(label_petMedAt);

        comboBox_petMedAt = new QComboBox(groupBox_player);
        comboBox_petMedAt->setObjectName(QString::fromUtf8("comboBox_petMedAt"));
        sizePolicy4.setHeightForWidth(comboBox_petMedAt->sizePolicy().hasHeightForWidth());
        comboBox_petMedAt->setSizePolicy(sizePolicy4);
        comboBox_petMedAt->setEditable(true);

        horizontalLayout_16->addWidget(comboBox_petMedAt);


        verticalLayout_3->addLayout(horizontalLayout_16);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_workacc = new QLabel(groupBox_player);
        label_workacc->setObjectName(QString::fromUtf8("label_workacc"));
        sizePolicy.setHeightForWidth(label_workacc->sizePolicy().hasHeightForWidth());
        label_workacc->setSizePolicy(sizePolicy);
        label_workacc->setMinimumSize(QSize(48, 0));
        label_workacc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(label_workacc, 0, Qt::AlignLeft);

        horizontalSlider_workacc = new QSlider(groupBox_player);
        horizontalSlider_workacc->setObjectName(QString::fromUtf8("horizontalSlider_workacc"));
        horizontalSlider_workacc->setMinimum(10);
        horizontalSlider_workacc->setMaximum(100);
        horizontalSlider_workacc->setSingleStep(1);
        horizontalSlider_workacc->setPageStep(10);
        horizontalSlider_workacc->setValue(100);
        horizontalSlider_workacc->setOrientation(Qt::Horizontal);
        horizontalSlider_workacc->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_workacc->setTickInterval(1000);

        horizontalLayout_12->addWidget(horizontalSlider_workacc);

        label_workaccval = new QLabel(groupBox_player);
        label_workaccval->setObjectName(QString::fromUtf8("label_workaccval"));
        sizePolicy2.setHeightForWidth(label_workaccval->sizePolicy().hasHeightForWidth());
        label_workaccval->setSizePolicy(sizePolicy2);

        horizontalLayout_12->addWidget(label_workaccval);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_workdelay = new QLabel(groupBox_player);
        label_workdelay->setObjectName(QString::fromUtf8("label_workdelay"));
        sizePolicy.setHeightForWidth(label_workdelay->sizePolicy().hasHeightForWidth());
        label_workdelay->setSizePolicy(sizePolicy);
        label_workdelay->setMinimumSize(QSize(48, 0));
        label_workdelay->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(label_workdelay, 0, Qt::AlignLeft);

        horizontalSlider_workdelay = new QSlider(groupBox_player);
        horizontalSlider_workdelay->setObjectName(QString::fromUtf8("horizontalSlider_workdelay"));
        horizontalSlider_workdelay->setMinimum(0);
        horizontalSlider_workdelay->setMaximum(6500);
        horizontalSlider_workdelay->setSingleStep(10);
        horizontalSlider_workdelay->setPageStep(100);
        horizontalSlider_workdelay->setValue(6500);
        horizontalSlider_workdelay->setOrientation(Qt::Horizontal);
        horizontalSlider_workdelay->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_workdelay->setTickInterval(1000);

        horizontalLayout_10->addWidget(horizontalSlider_workdelay);

        label_workdelayval = new QLabel(groupBox_player);
        label_workdelayval->setObjectName(QString::fromUtf8("label_workdelayval"));
        sizePolicy2.setHeightForWidth(label_workdelayval->sizePolicy().hasHeightForWidth());
        label_workdelayval->setSizePolicy(sizePolicy2);

        horizontalLayout_10->addWidget(label_workdelayval);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_movespd = new QLabel(groupBox_player);
        label_movespd->setObjectName(QString::fromUtf8("label_movespd"));
        sizePolicy.setHeightForWidth(label_movespd->sizePolicy().hasHeightForWidth());
        label_movespd->setSizePolicy(sizePolicy);
        label_movespd->setMinimumSize(QSize(48, 0));
        label_movespd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(label_movespd);

        horizontalSlider_movespd = new QSlider(groupBox_player);
        horizontalSlider_movespd->setObjectName(QString::fromUtf8("horizontalSlider_movespd"));
        horizontalSlider_movespd->setMinimum(1);
        horizontalSlider_movespd->setMaximum(1000);
        horizontalSlider_movespd->setSingleStep(10);
        horizontalSlider_movespd->setPageStep(100);
        horizontalSlider_movespd->setValue(100);
        horizontalSlider_movespd->setOrientation(Qt::Horizontal);
        horizontalSlider_movespd->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_movespd->setTickInterval(100);

        horizontalLayout_11->addWidget(horizontalSlider_movespd);

        label_spdvalue = new QLabel(groupBox_player);
        label_spdvalue->setObjectName(QString::fromUtf8("label_spdvalue"));
        sizePolicy2.setHeightForWidth(label_spdvalue->sizePolicy().hasHeightForWidth());
        label_spdvalue->setSizePolicy(sizePolicy2);

        horizontalLayout_11->addWidget(label_spdvalue);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        pushButton_save = new QPushButton(groupBox_player);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        sizePolicy3.setHeightForWidth(pushButton_save->sizePolicy().hasHeightForWidth());
        pushButton_save->setSizePolicy(sizePolicy3);

        horizontalLayout_13->addWidget(pushButton_save);

        pushButton_load = new QPushButton(groupBox_player);
        pushButton_load->setObjectName(QString::fromUtf8("pushButton_load"));
        sizePolicy3.setHeightForWidth(pushButton_load->sizePolicy().hasHeightForWidth());
        pushButton_load->setSizePolicy(sizePolicy3);

        horizontalLayout_13->addWidget(pushButton_load);


        verticalLayout_3->addLayout(horizontalLayout_13);


        horizontalLayout->addWidget(groupBox_player);

        groupBox_skills = new QGroupBox(PlayerForm);
        groupBox_skills->setObjectName(QString::fromUtf8("groupBox_skills"));
        verticalLayout = new QVBoxLayout(groupBox_skills);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeView_skills = new QTreeView(groupBox_skills);
        treeView_skills->setObjectName(QString::fromUtf8("treeView_skills"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(treeView_skills->sizePolicy().hasHeightForWidth());
        treeView_skills->setSizePolicy(sizePolicy6);

        verticalLayout->addWidget(treeView_skills);


        horizontalLayout->addWidget(groupBox_skills);

        groupBox_pets = new QGroupBox(PlayerForm);
        groupBox_pets->setObjectName(QString::fromUtf8("groupBox_pets"));
        verticalLayout_2 = new QVBoxLayout(groupBox_pets);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        treeView_pets = new QTreeView(groupBox_pets);
        treeView_pets->setObjectName(QString::fromUtf8("treeView_pets"));

        verticalLayout_2->addWidget(treeView_pets);


        horizontalLayout->addWidget(groupBox_pets);


        retranslateUi(PlayerForm);

        comboBox_useFoodAt->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(PlayerForm);
    } // setupUi

    void retranslateUi(QWidget *PlayerForm)
    {
        PlayerForm->setWindowTitle(QString());
        groupBox_player->setTitle(QCoreApplication::translate("PlayerForm", "Player", nullptr));
        label_playerName->setText(QCoreApplication::translate("PlayerForm", "Name", nullptr));
        label_job->setText(QCoreApplication::translate("PlayerForm", "Job", nullptr));
        label_lv->setText(QCoreApplication::translate("PlayerForm", "Lv", nullptr));
        label_cardtime->setText(QCoreApplication::translate("PlayerForm", "Clock", nullptr));
        label_gold->setText(QCoreApplication::translate("PlayerForm", "Gold", nullptr));
        label_hp->setText(QCoreApplication::translate("PlayerForm", "HP", nullptr));
        label_mp->setText(QCoreApplication::translate("PlayerForm", "MP", nullptr));
        label_xp->setText(QCoreApplication::translate("PlayerForm", "XP", nullptr));
        label_xp_remain->setText(QCoreApplication::translate("PlayerForm", "XP for Upgrade", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_useFood->setToolTip(QCoreApplication::translate("PlayerForm", "Automatically use food for player", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_useFood->setText(QCoreApplication::translate("PlayerForm", "Use Food", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_petFood->setToolTip(QCoreApplication::translate("PlayerForm", "Automatically use food for pets", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_petFood->setText(QCoreApplication::translate("PlayerForm", "Pet Food", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_autoSupply->setToolTip(QCoreApplication::translate("PlayerForm", "Auto resupply when talking to nurse", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_autoSupply->setText(QCoreApplication::translate("PlayerForm", "Auto Supply", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_useMed->setToolTip(QCoreApplication::translate("PlayerForm", "Automatically use medicine for player", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_useMed->setText(QCoreApplication::translate("PlayerForm", "Use Med", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_petMed->setToolTip(QCoreApplication::translate("PlayerForm", "Automatically use medicine for pets", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_petMed->setText(QCoreApplication::translate("PlayerForm", "Pet Med", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_SwitchAnim->setToolTip(QCoreApplication::translate("PlayerForm", "Disable animation for scene switching", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_SwitchAnim->setText(QCoreApplication::translate("PlayerForm", "SwitchAnim off", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_GameTextUI->setToolTip(QCoreApplication::translate("PlayerForm", "Game TextUI", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_GameTextUI->setText(QCoreApplication::translate("PlayerForm", "Game TextUI", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_AntiAFKKick->setToolTip(QCoreApplication::translate("PlayerForm", "Anti AFK Kick", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_AntiAFKKick->setText(QCoreApplication::translate("PlayerForm", "Anti AFK Kick", nullptr));
        label_useFoodAt->setText(QCoreApplication::translate("PlayerForm", "Use Food At", nullptr));
#if QT_CONFIG(tooltip)
        comboBox_useFoodAt->setToolTip(QCoreApplication::translate("PlayerForm", "Use food for player under this condition", nullptr));
#endif // QT_CONFIG(tooltip)
        comboBox_useFoodAt->setCurrentText(QString());
        label_petFoodAt->setText(QCoreApplication::translate("PlayerForm", "Pet Food At", nullptr));
#if QT_CONFIG(tooltip)
        comboBox_petFoodAt->setToolTip(QCoreApplication::translate("PlayerForm", "Use food for pets under this condition", nullptr));
#endif // QT_CONFIG(tooltip)
        comboBox_petFoodAt->setCurrentText(QString());
        label_useMedAt->setText(QCoreApplication::translate("PlayerForm", "Use Med At", nullptr));
#if QT_CONFIG(tooltip)
        comboBox_useMedAt->setToolTip(QCoreApplication::translate("PlayerForm", "Use medicine for player under this condition", nullptr));
#endif // QT_CONFIG(tooltip)
        comboBox_useMedAt->setCurrentText(QString());
        label_petMedAt->setText(QCoreApplication::translate("PlayerForm", "Pet Med At", nullptr));
#if QT_CONFIG(tooltip)
        comboBox_petMedAt->setToolTip(QCoreApplication::translate("PlayerForm", "Use medicine for pets under this condition", nullptr));
#endif // QT_CONFIG(tooltip)
        comboBox_petMedAt->setCurrentText(QString());
        label_workacc->setText(QCoreApplication::translate("PlayerForm", "Work Acc", nullptr));
#if QT_CONFIG(tooltip)
        horizontalSlider_workacc->setToolTip(QCoreApplication::translate("PlayerForm", "Craft acceleration", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        horizontalSlider_workacc->setStatusTip(QCoreApplication::translate("PlayerForm", "Craft acceleration", nullptr));
#endif // QT_CONFIG(statustip)
        label_workaccval->setText(QString());
        label_workdelay->setText(QCoreApplication::translate("PlayerForm", "Gather", nullptr));
#if QT_CONFIG(tooltip)
        horizontalSlider_workdelay->setToolTip(QCoreApplication::translate("PlayerForm", "Gather duration", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        horizontalSlider_workdelay->setStatusTip(QCoreApplication::translate("PlayerForm", "Gather duration", nullptr));
#endif // QT_CONFIG(statustip)
        label_workdelayval->setText(QString());
        label_movespd->setText(QCoreApplication::translate("PlayerForm", "Speed", nullptr));
#if QT_CONFIG(tooltip)
        horizontalSlider_movespd->setToolTip(QCoreApplication::translate("PlayerForm", "Player movement speed", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        horizontalSlider_movespd->setStatusTip(QCoreApplication::translate("PlayerForm", "Player movement speed", nullptr));
#endif // QT_CONFIG(statustip)
        label_spdvalue->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_save->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_save->setText(QCoreApplication::translate("PlayerForm", "Save", nullptr));
        pushButton_load->setText(QCoreApplication::translate("PlayerForm", "Load", nullptr));
        groupBox_skills->setTitle(QCoreApplication::translate("PlayerForm", "Skills", nullptr));
        groupBox_pets->setTitle(QCoreApplication::translate("PlayerForm", "Pets", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlayerForm: public Ui_PlayerForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERFORM_H
