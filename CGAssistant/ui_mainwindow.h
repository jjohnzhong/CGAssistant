/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_tab;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(750, 500);
        MainWindow->setMinimumSize(QSize(300, 200));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/PUK3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(24, 24));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setDocumentMode(false);
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        horizontalLayout_2 = new QHBoxLayout(tab_1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_tab = new QVBoxLayout();
        verticalLayout_tab->setSpacing(6);
        verticalLayout_tab->setObjectName(QString::fromUtf8("verticalLayout_tab"));
        textEdit = new QTextEdit(tab_1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setReadOnly(true);
        textEdit->setOverwriteMode(true);

        verticalLayout_tab->addWidget(textEdit);


        horizontalLayout_2->addLayout(verticalLayout_tab);

        tabWidget->addTab(tab_1, QString());

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CGAssistant", nullptr));
        textEdit->setDocumentTitle(QString());
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/logo.png\" /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:160%; font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol,Liberation Sans,PingFang SC,Microsoft YaHei,Hiragino Sans GB,Wenquanyi Micro Hei,WenQuanYi Zen Hei,ST Heiti,SimHei,SimSun,WenQuanYi Zen Hei Sharp,sans-serif'; font-size:16px; color:#40485b; background-color:#ffffff;\"><br /></p>\n"
"<p style=\" margin-t"
                        "op:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:160%; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol,Liberation Sans,PingFang SC,Microsoft YaHei,Hiragino Sans GB,Wenquanyi Micro Hei,WenQuanYi Zen Hei,ST Heiti,SimHei,SimSun,WenQuanYi Zen Hei Sharp,sans-serif'; font-size:16px; color:#40485b; background-color:#ffffff;\">\345\275\223\345\211\215\347\211\210\346\234\254\357\274\2322024-07-21</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:160%; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol,Liberation Sans,PingFang SC,Microsoft YaHei,Hiragino Sans GB,Wenquanyi Micro Hei,WenQuanYi Zen Hei,ST Heiti,SimHei,SimSun,WenQuanYi Zen Hei"
                        " Sharp,sans-serif'; font-size:16px; color:#40485b; background-color:#ffffff;\">\344\270\213\350\275\275\346\234\200\346\226\260\347\211\210\346\234\254\357\274\232\347\276\244\345\217\267 300303705</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:160%; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol,Liberation Sans,PingFang SC,Microsoft YaHei,Hiragino Sans GB,Wenquanyi Micro Hei,WenQuanYi Zen Hei,ST Heiti,SimHei,SimSun,WenQuanYi Zen Hei Sharp,sans-serif'; font-size:16px; color:#40485b; background-color:#ffffff;\">\346\210\226 </span><a href=\"https://github.com/hzqst/CGAssistant/\"><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol,Liberation Sans,PingFang SC,Microsoft YaHei,Hiragino Sans GB,Wenquanyi Micro Hei,WenQuan"
                        "Yi Zen Hei,ST Heiti,SimHei,SimSun,WenQuanYi Zen Hei Sharp,sans-serif'; font-size:16px; text-decoration: underline; color:#005980; background-color:transparent;\">https://github.com/hzqst/CGAssistantJS/</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:160%; background-color:#ffffff;\"><a href=\"https://github.com/hzqst/CGAssistantJS/issues\"><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol,Liberation Sans,PingFang SC,Microsoft YaHei,Hiragino Sans GB,Wenquanyi Micro Hei,WenQuanYi Zen Hei,ST Heiti,SimHei,SimSun,WenQuanYi Zen Hei Sharp,sans-serif'; font-size:16px; text-decoration: underline; color:#005980; background-color:transparent;\">\346\210\226 </span></a><a href=\"https://github.com/hzqst/CGAssistant/\"><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,Apple Color Emoji,Segoe UI Emoji,Se"
                        "goe UI Symbol,Liberation Sans,PingFang SC,Microsoft YaHei,Hiragino Sans GB,Wenquanyi Micro Hei,WenQuanYi Zen Hei,ST Heiti,SimHei,SimSun,WenQuanYi Zen Hei Sharp,sans-serif'; font-size:16px; text-decoration: underline; color:#005980; background-color:transparent;\">https://gitee.com/hzqst/CGAssistantJS/</span></a></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainWindow", "Welcome", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
