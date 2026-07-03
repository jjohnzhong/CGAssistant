/********************************************************************************
** Form generated from reading UI file 'chatform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATFORM_H
#define UI_CHATFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatForm
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit_chat;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_chat;
    QCheckBox *checkBox_BlockChatMsgs;
    QLineEdit *lineEdit;

    void setupUi(QWidget *ChatForm)
    {
        if (ChatForm->objectName().isEmpty())
            ChatForm->setObjectName(QString::fromUtf8("ChatForm"));
        ChatForm->resize(586, 312);
        horizontalLayout = new QHBoxLayout(ChatForm);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit_chat = new QTextEdit(ChatForm);
        textEdit_chat->setObjectName(QString::fromUtf8("textEdit_chat"));
        textEdit_chat->setReadOnly(true);

        verticalLayout->addWidget(textEdit_chat);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_chat = new QLabel(ChatForm);
        label_chat->setObjectName(QString::fromUtf8("label_chat"));

        horizontalLayout_2->addWidget(label_chat);

        checkBox_BlockChatMsgs = new QCheckBox(ChatForm);
        checkBox_BlockChatMsgs->setObjectName(QString::fromUtf8("checkBox_BlockChatMsgs"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkBox_BlockChatMsgs->sizePolicy().hasHeightForWidth());
        checkBox_BlockChatMsgs->setSizePolicy(sizePolicy);
        checkBox_BlockChatMsgs->setMinimumSize(QSize(128, 0));
        checkBox_BlockChatMsgs->setLayoutDirection(Qt::LeftToRight);
        checkBox_BlockChatMsgs->setTristate(true);

        horizontalLayout_2->addWidget(checkBox_BlockChatMsgs);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        lineEdit = new QLineEdit(ChatForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaxLength(127);

        verticalLayout->addWidget(lineEdit);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(ChatForm);

        QMetaObject::connectSlotsByName(ChatForm);
    } // setupUi

    void retranslateUi(QWidget *ChatForm)
    {
        ChatForm->setWindowTitle(QCoreApplication::translate("ChatForm", "Form", nullptr));
        label_chat->setText(QCoreApplication::translate("ChatForm", "[Enter] to send chat message", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_BlockChatMsgs->setToolTip(QCoreApplication::translate("ChatForm", "<html><head/><body><p>Partially Checked: Block chat from non-teammates.</p><p>Fully Checked: Block chat from all players.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_BlockChatMsgs->setText(QCoreApplication::translate("ChatForm", "Block chat messages", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatForm: public Ui_ChatForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATFORM_H
