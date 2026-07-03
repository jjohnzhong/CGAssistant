/********************************************************************************
** Form generated from reading UI file 'accountform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTFORM_H
#define UI_ACCOUNTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountForm
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit_output;
    QLabel *label_status;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *label_account;
    QCheckBox *checkBox_autoLogin;
    QComboBox *comboBox_gameType;
    QComboBox *comboBox_bigserver;
    QComboBox *comboBox_character;
    QComboBox *comboBox_server;
    QLabel *label_bigserver;
    QCheckBox *checkBox_autoChangeServer;
    QPushButton *pushButton_getgid;
    QSlider *horizontalSlider_loginDuration;
    QLineEdit *lineEdit_account;
    QPushButton *pushButton_logingame;
    QLabel *label_server;
    QLabel *label_password;
    QCheckBox *checkBox_autoKillGame;
    QCheckBox *checkBox_disableUpdater;
    QLabel *label_gameType;
    QLabel *label_gid;
    QComboBox *comboBox_gid;
    QLineEdit *lineEdit_password;
    QLabel *label_character;
    QLabel *label_loginDuration;
    QLabel *label_loginDurationHint;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QLabel *label_CharaMou;
    QLineEdit *lineEdit_CharaElements;
    QLabel *label_CharaEye;
    QComboBox *comboBox_CharaColor;
    QLabel *label_CharaName;
    QLabel *label_Chara;
    QLineEdit *lineEdit_CharaPoints;
    QLineEdit *lineEdit_CharaName;
    QComboBox *comboBox_CharaMou;
    QComboBox *comboBox_CharaEye;
    QLabel *label_CharaColor;
    QComboBox *comboBox_Chara;
    QLabel *label_CharaEndurance_2;
    QLabel *label_CharaPoints;
    QCheckBox *checkBox_createChara;

    void setupUi(QWidget *AccountForm)
    {
        if (AccountForm->objectName().isEmpty())
            AccountForm->setObjectName(QString::fromUtf8("AccountForm"));
        AccountForm->resize(600, 376);
        gridLayout = new QGridLayout(AccountForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame_3 = new QFrame(AccountForm);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit_output = new QTextEdit(frame_3);
        textEdit_output->setObjectName(QString::fromUtf8("textEdit_output"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit_output->sizePolicy().hasHeightForWidth());
        textEdit_output->setSizePolicy(sizePolicy);
        textEdit_output->setReadOnly(true);

        verticalLayout->addWidget(textEdit_output);

        label_status = new QLabel(frame_3);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_status->sizePolicy().hasHeightForWidth());
        label_status->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(label_status);


        gridLayout->addWidget(frame_3, 0, 2, 1, 1);

        frame = new QFrame(AccountForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_account = new QLabel(frame);
        label_account->setObjectName(QString::fromUtf8("label_account"));
        sizePolicy.setHeightForWidth(label_account->sizePolicy().hasHeightForWidth());
        label_account->setSizePolicy(sizePolicy);
        label_account->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_account, 1, 0, 1, 1);

        checkBox_autoLogin = new QCheckBox(frame);
        checkBox_autoLogin->setObjectName(QString::fromUtf8("checkBox_autoLogin"));
        sizePolicy1.setHeightForWidth(checkBox_autoLogin->sizePolicy().hasHeightForWidth());
        checkBox_autoLogin->setSizePolicy(sizePolicy1);
        checkBox_autoLogin->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(checkBox_autoLogin, 7, 1, 1, 1);

        comboBox_gameType = new QComboBox(frame);
        comboBox_gameType->setObjectName(QString::fromUtf8("comboBox_gameType"));
        sizePolicy1.setHeightForWidth(comboBox_gameType->sizePolicy().hasHeightForWidth());
        comboBox_gameType->setSizePolicy(sizePolicy1);
        comboBox_gameType->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(comboBox_gameType, 0, 1, 1, 1);

        comboBox_bigserver = new QComboBox(frame);
        comboBox_bigserver->setObjectName(QString::fromUtf8("comboBox_bigserver"));
        sizePolicy1.setHeightForWidth(comboBox_bigserver->sizePolicy().hasHeightForWidth());
        comboBox_bigserver->setSizePolicy(sizePolicy1);
        comboBox_bigserver->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(comboBox_bigserver, 4, 1, 1, 1);

        comboBox_character = new QComboBox(frame);
        comboBox_character->setObjectName(QString::fromUtf8("comboBox_character"));
        sizePolicy1.setHeightForWidth(comboBox_character->sizePolicy().hasHeightForWidth());
        comboBox_character->setSizePolicy(sizePolicy1);
        comboBox_character->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(comboBox_character, 6, 1, 1, 1);

        comboBox_server = new QComboBox(frame);
        comboBox_server->setObjectName(QString::fromUtf8("comboBox_server"));
        sizePolicy1.setHeightForWidth(comboBox_server->sizePolicy().hasHeightForWidth());
        comboBox_server->setSizePolicy(sizePolicy1);
        comboBox_server->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(comboBox_server, 5, 1, 1, 1);

        label_bigserver = new QLabel(frame);
        label_bigserver->setObjectName(QString::fromUtf8("label_bigserver"));
        sizePolicy.setHeightForWidth(label_bigserver->sizePolicy().hasHeightForWidth());
        label_bigserver->setSizePolicy(sizePolicy);
        label_bigserver->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_bigserver, 4, 0, 1, 1);

        checkBox_autoChangeServer = new QCheckBox(frame);
        checkBox_autoChangeServer->setObjectName(QString::fromUtf8("checkBox_autoChangeServer"));
        sizePolicy1.setHeightForWidth(checkBox_autoChangeServer->sizePolicy().hasHeightForWidth());
        checkBox_autoChangeServer->setSizePolicy(sizePolicy1);
        checkBox_autoChangeServer->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(checkBox_autoChangeServer, 10, 1, 1, 1);

        pushButton_getgid = new QPushButton(frame);
        pushButton_getgid->setObjectName(QString::fromUtf8("pushButton_getgid"));

        gridLayout_2->addWidget(pushButton_getgid, 13, 1, 1, 1);

        horizontalSlider_loginDuration = new QSlider(frame);
        horizontalSlider_loginDuration->setObjectName(QString::fromUtf8("horizontalSlider_loginDuration"));
        horizontalSlider_loginDuration->setMaximum(120);
        horizontalSlider_loginDuration->setOrientation(Qt::Horizontal);
        horizontalSlider_loginDuration->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_loginDuration->setTickInterval(10);

        gridLayout_2->addWidget(horizontalSlider_loginDuration, 11, 1, 1, 1);

        lineEdit_account = new QLineEdit(frame);
        lineEdit_account->setObjectName(QString::fromUtf8("lineEdit_account"));
        sizePolicy1.setHeightForWidth(lineEdit_account->sizePolicy().hasHeightForWidth());
        lineEdit_account->setSizePolicy(sizePolicy1);
        lineEdit_account->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(lineEdit_account, 1, 1, 1, 1);

        pushButton_logingame = new QPushButton(frame);
        pushButton_logingame->setObjectName(QString::fromUtf8("pushButton_logingame"));

        gridLayout_2->addWidget(pushButton_logingame, 14, 1, 1, 1);

        label_server = new QLabel(frame);
        label_server->setObjectName(QString::fromUtf8("label_server"));
        sizePolicy.setHeightForWidth(label_server->sizePolicy().hasHeightForWidth());
        label_server->setSizePolicy(sizePolicy);
        label_server->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_server, 5, 0, 1, 1);

        label_password = new QLabel(frame);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        sizePolicy.setHeightForWidth(label_password->sizePolicy().hasHeightForWidth());
        label_password->setSizePolicy(sizePolicy);
        label_password->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_password, 2, 0, 1, 1);

        checkBox_autoKillGame = new QCheckBox(frame);
        checkBox_autoKillGame->setObjectName(QString::fromUtf8("checkBox_autoKillGame"));
        sizePolicy1.setHeightForWidth(checkBox_autoKillGame->sizePolicy().hasHeightForWidth());
        checkBox_autoKillGame->setSizePolicy(sizePolicy1);
        checkBox_autoKillGame->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(checkBox_autoKillGame, 9, 1, 1, 1);

        checkBox_disableUpdater = new QCheckBox(frame);
        checkBox_disableUpdater->setObjectName(QString::fromUtf8("checkBox_disableUpdater"));
        sizePolicy1.setHeightForWidth(checkBox_disableUpdater->sizePolicy().hasHeightForWidth());
        checkBox_disableUpdater->setSizePolicy(sizePolicy1);
        checkBox_disableUpdater->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(checkBox_disableUpdater, 8, 1, 1, 1);

        label_gameType = new QLabel(frame);
        label_gameType->setObjectName(QString::fromUtf8("label_gameType"));
        sizePolicy.setHeightForWidth(label_gameType->sizePolicy().hasHeightForWidth());
        label_gameType->setSizePolicy(sizePolicy);
        label_gameType->setFrameShape(QFrame::NoFrame);
        label_gameType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_gameType, 0, 0, 1, 1);

        label_gid = new QLabel(frame);
        label_gid->setObjectName(QString::fromUtf8("label_gid"));
        sizePolicy.setHeightForWidth(label_gid->sizePolicy().hasHeightForWidth());
        label_gid->setSizePolicy(sizePolicy);
        label_gid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_gid, 3, 0, 1, 1);

        comboBox_gid = new QComboBox(frame);
        comboBox_gid->setObjectName(QString::fromUtf8("comboBox_gid"));
        sizePolicy1.setHeightForWidth(comboBox_gid->sizePolicy().hasHeightForWidth());
        comboBox_gid->setSizePolicy(sizePolicy1);
        comboBox_gid->setMaximumSize(QSize(16777215, 16777215));
        comboBox_gid->setEditable(true);

        gridLayout_2->addWidget(comboBox_gid, 3, 1, 1, 1);

        lineEdit_password = new QLineEdit(frame);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        sizePolicy1.setHeightForWidth(lineEdit_password->sizePolicy().hasHeightForWidth());
        lineEdit_password->setSizePolicy(sizePolicy1);
        lineEdit_password->setMaximumSize(QSize(16777215, 16777215));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(lineEdit_password, 2, 1, 1, 1);

        label_character = new QLabel(frame);
        label_character->setObjectName(QString::fromUtf8("label_character"));
        sizePolicy.setHeightForWidth(label_character->sizePolicy().hasHeightForWidth());
        label_character->setSizePolicy(sizePolicy);
        label_character->setFrameShape(QFrame::NoFrame);
        label_character->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_character, 6, 0, 1, 1);

        label_loginDuration = new QLabel(frame);
        label_loginDuration->setObjectName(QString::fromUtf8("label_loginDuration"));
        label_loginDuration->setTextFormat(Qt::RichText);
        label_loginDuration->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_loginDuration->setWordWrap(true);

        gridLayout_2->addWidget(label_loginDuration, 12, 1, 1, 1);

        label_loginDurationHint = new QLabel(frame);
        label_loginDurationHint->setObjectName(QString::fromUtf8("label_loginDurationHint"));
        label_loginDurationHint->setWordWrap(false);

        gridLayout_2->addWidget(label_loginDurationHint, 11, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(AccountForm);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_CharaMou = new QLabel(frame_2);
        label_CharaMou->setObjectName(QString::fromUtf8("label_CharaMou"));
        label_CharaMou->setFrameShape(QFrame::NoFrame);
        label_CharaMou->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_CharaMou, 4, 0, 1, 1);

        lineEdit_CharaElements = new QLineEdit(frame_2);
        lineEdit_CharaElements->setObjectName(QString::fromUtf8("lineEdit_CharaElements"));
        lineEdit_CharaElements->setEnabled(false);

        gridLayout_3->addWidget(lineEdit_CharaElements, 7, 1, 1, 1);

        label_CharaEye = new QLabel(frame_2);
        label_CharaEye->setObjectName(QString::fromUtf8("label_CharaEye"));
        label_CharaEye->setFrameShape(QFrame::NoFrame);
        label_CharaEye->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_CharaEye, 3, 0, 1, 1);

        comboBox_CharaColor = new QComboBox(frame_2);
        comboBox_CharaColor->setObjectName(QString::fromUtf8("comboBox_CharaColor"));
        comboBox_CharaColor->setEnabled(false);
        comboBox_CharaColor->setEditable(false);

        gridLayout_3->addWidget(comboBox_CharaColor, 5, 1, 1, 1);

        label_CharaName = new QLabel(frame_2);
        label_CharaName->setObjectName(QString::fromUtf8("label_CharaName"));
        label_CharaName->setFrameShape(QFrame::NoFrame);
        label_CharaName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_CharaName, 1, 0, 1, 1);

        label_Chara = new QLabel(frame_2);
        label_Chara->setObjectName(QString::fromUtf8("label_Chara"));
        label_Chara->setFrameShape(QFrame::NoFrame);
        label_Chara->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_Chara, 2, 0, 1, 1);

        lineEdit_CharaPoints = new QLineEdit(frame_2);
        lineEdit_CharaPoints->setObjectName(QString::fromUtf8("lineEdit_CharaPoints"));
        lineEdit_CharaPoints->setEnabled(false);

        gridLayout_3->addWidget(lineEdit_CharaPoints, 6, 1, 1, 1);

        lineEdit_CharaName = new QLineEdit(frame_2);
        lineEdit_CharaName->setObjectName(QString::fromUtf8("lineEdit_CharaName"));
        lineEdit_CharaName->setEnabled(false);

        gridLayout_3->addWidget(lineEdit_CharaName, 1, 1, 1, 1);

        comboBox_CharaMou = new QComboBox(frame_2);
        comboBox_CharaMou->setObjectName(QString::fromUtf8("comboBox_CharaMou"));
        comboBox_CharaMou->setEnabled(false);
        comboBox_CharaMou->setEditable(false);

        gridLayout_3->addWidget(comboBox_CharaMou, 4, 1, 1, 1);

        comboBox_CharaEye = new QComboBox(frame_2);
        comboBox_CharaEye->setObjectName(QString::fromUtf8("comboBox_CharaEye"));
        comboBox_CharaEye->setEnabled(false);
        comboBox_CharaEye->setEditable(false);

        gridLayout_3->addWidget(comboBox_CharaEye, 3, 1, 1, 1);

        label_CharaColor = new QLabel(frame_2);
        label_CharaColor->setObjectName(QString::fromUtf8("label_CharaColor"));
        label_CharaColor->setFrameShape(QFrame::NoFrame);
        label_CharaColor->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_CharaColor, 5, 0, 1, 1);

        comboBox_Chara = new QComboBox(frame_2);
        comboBox_Chara->setObjectName(QString::fromUtf8("comboBox_Chara"));
        comboBox_Chara->setEnabled(false);
        comboBox_Chara->setEditable(false);

        gridLayout_3->addWidget(comboBox_Chara, 2, 1, 1, 1);

        label_CharaEndurance_2 = new QLabel(frame_2);
        label_CharaEndurance_2->setObjectName(QString::fromUtf8("label_CharaEndurance_2"));
        label_CharaEndurance_2->setFrameShape(QFrame::NoFrame);
        label_CharaEndurance_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_CharaEndurance_2, 7, 0, 1, 1);

        label_CharaPoints = new QLabel(frame_2);
        label_CharaPoints->setObjectName(QString::fromUtf8("label_CharaPoints"));
        label_CharaPoints->setFrameShape(QFrame::NoFrame);
        label_CharaPoints->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_CharaPoints, 6, 0, 1, 1);

        checkBox_createChara = new QCheckBox(frame_2);
        checkBox_createChara->setObjectName(QString::fromUtf8("checkBox_createChara"));

        gridLayout_3->addWidget(checkBox_createChara, 0, 1, 1, 1);


        gridLayout->addWidget(frame_2, 0, 1, 1, 1);

        QWidget::setTabOrder(comboBox_gameType, lineEdit_account);
        QWidget::setTabOrder(lineEdit_account, lineEdit_password);
        QWidget::setTabOrder(lineEdit_password, comboBox_gid);
        QWidget::setTabOrder(comboBox_gid, comboBox_bigserver);
        QWidget::setTabOrder(comboBox_bigserver, comboBox_server);
        QWidget::setTabOrder(comboBox_server, comboBox_character);
        QWidget::setTabOrder(comboBox_character, checkBox_autoLogin);
        QWidget::setTabOrder(checkBox_autoLogin, pushButton_getgid);
        QWidget::setTabOrder(pushButton_getgid, pushButton_logingame);

        retranslateUi(AccountForm);

        QMetaObject::connectSlotsByName(AccountForm);
    } // setupUi

    void retranslateUi(QWidget *AccountForm)
    {
        AccountForm->setWindowTitle(QCoreApplication::translate("AccountForm", "Form", nullptr));
        label_status->setText(QCoreApplication::translate("AccountForm", "Not Ready", nullptr));
        label_account->setText(QCoreApplication::translate("AccountForm", "Account", nullptr));
        checkBox_autoLogin->setText(QCoreApplication::translate("AccountForm", "Auto Login", nullptr));
        label_bigserver->setText(QCoreApplication::translate("AccountForm", "Big Server", nullptr));
        checkBox_autoChangeServer->setText(QCoreApplication::translate("AccountForm", "Auto ChangeServer", nullptr));
        pushButton_getgid->setText(QCoreApplication::translate("AccountForm", "Get GID List", nullptr));
#if QT_CONFIG(tooltip)
        horizontalSlider_loginDuration->setToolTip(QCoreApplication::translate("AccountForm", "<html><head/><body><p>The minimum duration between two login query. (unit: second)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_logingame->setText(QCoreApplication::translate("AccountForm", "Login Game", nullptr));
        label_server->setText(QCoreApplication::translate("AccountForm", "Server", nullptr));
        label_password->setText(QCoreApplication::translate("AccountForm", "Password", nullptr));
        checkBox_autoKillGame->setText(QCoreApplication::translate("AccountForm", "Auto KillGame", nullptr));
        checkBox_disableUpdater->setText(QCoreApplication::translate("AccountForm", "Disable POLCN Updater", nullptr));
        label_gameType->setText(QCoreApplication::translate("AccountForm", "Game Type", nullptr));
        label_gid->setText(QCoreApplication::translate("AccountForm", "GID", nullptr));
        label_character->setText(QCoreApplication::translate("AccountForm", "Character", nullptr));
        label_loginDuration->setText(QString());
        label_loginDurationHint->setText(QCoreApplication::translate("AccountForm", "Login Duration", nullptr));
        label_CharaMou->setText(QCoreApplication::translate("AccountForm", "Mouth", nullptr));
        lineEdit_CharaElements->setText(QCoreApplication::translate("AccountForm", "0,0,0,0", nullptr));
        lineEdit_CharaElements->setPlaceholderText(QCoreApplication::translate("AccountForm", "e.g. 0,10,0,0", nullptr));
        label_CharaEye->setText(QCoreApplication::translate("AccountForm", "Eye", nullptr));
        label_CharaName->setText(QCoreApplication::translate("AccountForm", "Name", nullptr));
        label_Chara->setText(QCoreApplication::translate("AccountForm", "Character", nullptr));
        lineEdit_CharaPoints->setText(QCoreApplication::translate("AccountForm", "0,0,0,0,0", nullptr));
        lineEdit_CharaPoints->setPlaceholderText(QCoreApplication::translate("AccountForm", "e.g. 0,15,0,15,0", nullptr));
        label_CharaColor->setText(QCoreApplication::translate("AccountForm", "Color", nullptr));
        label_CharaEndurance_2->setText(QCoreApplication::translate("AccountForm", "Elements", nullptr));
        label_CharaPoints->setText(QCoreApplication::translate("AccountForm", "Points", nullptr));
        checkBox_createChara->setText(QCoreApplication::translate("AccountForm", "Create Character", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AccountForm: public Ui_AccountForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTFORM_H
