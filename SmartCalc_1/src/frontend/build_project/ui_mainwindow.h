/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_1;
    QPushButton *use_backspace;
    QPushButton *set_multiplication;
    QPushButton *set_division;
    QPushButton *set_mod;
    QPushButton *set_plus;
    QPushButton *set_minus;
    QPushButton *set_equal_symbol;
    QPushButton *clear_text;
    QPushButton *set_right_bracket;
    QPushButton *set_number_3;
    QPushButton *set_number_2;
    QPushButton *set_number_1;
    QPushButton *set_number_4;
    QPushButton *set_number_5;
    QPushButton *set_number_6;
    QPushButton *set_number_7;
    QPushButton *set_number_8;
    QPushButton *set_number_9;
    QPushButton *set_number_0;
    QPushButton *set_dot_symbol;
    QPushButton *set_left_bracket;
    QPushButton *degree_conversion;
    QPushButton *set_cos;
    QPushButton *set_acos;
    QPushButton *set_sqrt;
    QPushButton *set_sin;
    QPushButton *set_tan;
    QPushButton *set_asin;
    QPushButton *set_atan;
    QPushButton *set_ln;
    QPushButton *set_log;
    QPushButton *set_x;
    QLineEdit *value_x;
    QPushButton *credit_calc_button;
    QLabel *label_x_min;
    QLabel *label_x_max;
    QDoubleSpinBox *doubleSpinBox_x_min;
    QDoubleSpinBox *doubleSpinBox_x_max;
    QLabel *label_x_axis_min;
    QLabel *label_y_axis_min;
    QLabel *label_y_axis_max;
    QLabel *label_x_axis_max;
    QDoubleSpinBox *doubleSpinBox_x_axis_min;
    QDoubleSpinBox *doubleSpinBox_x_axis_max;
    QDoubleSpinBox *doubleSpinBox_y_axis_min;
    QDoubleSpinBox *doubleSpinBox_y_axis_max;
    QPushButton *graph_button;
    QCustomPlot *widget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1275, 566);
        QPalette palette;
        QBrush brush(QColor(255, 85, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        QFont font;
        font.setPointSize(11);
        MainWindow->setFont(font);
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit_1 = new QLineEdit(centralwidget);
        lineEdit_1->setObjectName("lineEdit_1");
        lineEdit_1->setGeometry(QRect(10, 20, 630, 81));
        QPalette palette1;
        QBrush brush2(QColor(215, 215, 215, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        lineEdit_1->setPalette(palette1);
        QFont font1;
        font1.setPointSize(20);
        lineEdit_1->setFont(font1);
        lineEdit_1->setFocusPolicy(Qt::StrongFocus);
        lineEdit_1->setLayoutDirection(Qt::LeftToRight);
        lineEdit_1->setStyleSheet(QString::fromUtf8("border: 0px;"));
        lineEdit_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_1->setReadOnly(true);
        use_backspace = new QPushButton(centralwidget);
        use_backspace->setObjectName("use_backspace");
        use_backspace->setEnabled(true);
        use_backspace->setGeometry(QRect(550, 110, 90, 80));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(use_backspace->sizePolicy().hasHeightForWidth());
        use_backspace->setSizePolicy(sizePolicy);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush3(QColor(170, 85, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        use_backspace->setPalette(palette2);
        use_backspace->setFont(font1);
        use_backspace->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color:rgb(170, 85, 0);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #bc5d00, stop: 1 #ba5d00);\n"
"}"));
        set_multiplication = new QPushButton(centralwidget);
        set_multiplication->setObjectName("set_multiplication");
        set_multiplication->setEnabled(true);
        set_multiplication->setGeometry(QRect(460, 110, 90, 80));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(set_multiplication->sizePolicy().hasHeightForWidth());
        set_multiplication->setSizePolicy(sizePolicy1);
        QPalette palette3;
        QBrush brush5(QColor(0, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        QBrush brush6(QColor(255, 151, 57, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush6);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        set_multiplication->setPalette(palette3);
        set_multiplication->setFont(font1);
        set_multiplication->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: black; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        set_division = new QPushButton(centralwidget);
        set_division->setObjectName("set_division");
        set_division->setEnabled(true);
        set_division->setGeometry(QRect(370, 110, 90, 80));
        sizePolicy1.setHeightForWidth(set_division->sizePolicy().hasHeightForWidth());
        set_division->setSizePolicy(sizePolicy1);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        set_division->setPalette(palette4);
        set_division->setFont(font1);
        set_division->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: black; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        set_mod = new QPushButton(centralwidget);
        set_mod->setObjectName("set_mod");
        set_mod->setEnabled(true);
        set_mod->setGeometry(QRect(550, 190, 90, 80));
        sizePolicy.setHeightForWidth(set_mod->sizePolicy().hasHeightForWidth());
        set_mod->setSizePolicy(sizePolicy);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        set_mod->setPalette(palette5);
        set_mod->setFont(font1);
        set_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: black; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        set_plus = new QPushButton(centralwidget);
        set_plus->setObjectName("set_plus");
        set_plus->setEnabled(true);
        set_plus->setGeometry(QRect(550, 270, 90, 80));
        sizePolicy1.setHeightForWidth(set_plus->sizePolicy().hasHeightForWidth());
        set_plus->setSizePolicy(sizePolicy1);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        set_plus->setPalette(palette6);
        set_plus->setFont(font1);
        set_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: black; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        set_minus = new QPushButton(centralwidget);
        set_minus->setObjectName("set_minus");
        set_minus->setEnabled(true);
        set_minus->setGeometry(QRect(550, 350, 90, 80));
        sizePolicy1.setHeightForWidth(set_minus->sizePolicy().hasHeightForWidth());
        set_minus->setSizePolicy(sizePolicy1);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        set_minus->setPalette(palette7);
        set_minus->setFont(font1);
        set_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: black; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        set_equal_symbol = new QPushButton(centralwidget);
        set_equal_symbol->setObjectName("set_equal_symbol");
        set_equal_symbol->setEnabled(true);
        set_equal_symbol->setGeometry(QRect(550, 430, 90, 80));
        sizePolicy1.setHeightForWidth(set_equal_symbol->sizePolicy().hasHeightForWidth());
        set_equal_symbol->setSizePolicy(sizePolicy1);
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        set_equal_symbol->setPalette(palette8);
        set_equal_symbol->setFont(font1);
        set_equal_symbol->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        clear_text = new QPushButton(centralwidget);
        clear_text->setObjectName("clear_text");
        clear_text->setEnabled(true);
        clear_text->setGeometry(QRect(280, 110, 90, 80));
        sizePolicy.setHeightForWidth(clear_text->sizePolicy().hasHeightForWidth());
        clear_text->setSizePolicy(sizePolicy);
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        clear_text->setPalette(palette9);
        clear_text->setFont(font1);
        clear_text->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: black; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        set_right_bracket = new QPushButton(centralwidget);
        set_right_bracket->setObjectName("set_right_bracket");
        set_right_bracket->setEnabled(true);
        set_right_bracket->setGeometry(QRect(190, 110, 90, 80));
        sizePolicy.setHeightForWidth(set_right_bracket->sizePolicy().hasHeightForWidth());
        set_right_bracket->setSizePolicy(sizePolicy);
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        set_right_bracket->setPalette(palette10);
        set_right_bracket->setFont(font1);
        set_right_bracket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: black; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        set_number_3 = new QPushButton(centralwidget);
        set_number_3->setObjectName("set_number_3");
        set_number_3->setEnabled(true);
        set_number_3->setGeometry(QRect(460, 190, 90, 80));
        sizePolicy1.setHeightForWidth(set_number_3->sizePolicy().hasHeightForWidth());
        set_number_3->setSizePolicy(sizePolicy1);
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        set_number_3->setPalette(palette11);
        set_number_3->setFont(font1);
        set_number_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        set_number_2 = new QPushButton(centralwidget);
        set_number_2->setObjectName("set_number_2");
        set_number_2->setEnabled(true);
        set_number_2->setGeometry(QRect(370, 190, 90, 80));
        sizePolicy1.setHeightForWidth(set_number_2->sizePolicy().hasHeightForWidth());
        set_number_2->setSizePolicy(sizePolicy1);
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        set_number_2->setPalette(palette12);
        set_number_2->setFont(font1);
        set_number_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        set_number_1 = new QPushButton(centralwidget);
        set_number_1->setObjectName("set_number_1");
        set_number_1->setEnabled(true);
        set_number_1->setGeometry(QRect(280, 190, 90, 80));
        sizePolicy1.setHeightForWidth(set_number_1->sizePolicy().hasHeightForWidth());
        set_number_1->setSizePolicy(sizePolicy1);
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        set_number_1->setPalette(palette13);
        set_number_1->setFont(font1);
        set_number_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        set_number_4 = new QPushButton(centralwidget);
        set_number_4->setObjectName("set_number_4");
        set_number_4->setEnabled(true);
        set_number_4->setGeometry(QRect(280, 270, 90, 80));
        sizePolicy1.setHeightForWidth(set_number_4->sizePolicy().hasHeightForWidth());
        set_number_4->setSizePolicy(sizePolicy1);
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        set_number_4->setPalette(palette14);
        set_number_4->setFont(font1);
        set_number_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        set_number_5 = new QPushButton(centralwidget);
        set_number_5->setObjectName("set_number_5");
        set_number_5->setEnabled(true);
        set_number_5->setGeometry(QRect(370, 270, 90, 80));
        sizePolicy1.setHeightForWidth(set_number_5->sizePolicy().hasHeightForWidth());
        set_number_5->setSizePolicy(sizePolicy1);
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        set_number_5->setPalette(palette15);
        set_number_5->setFont(font1);
        set_number_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        set_number_6 = new QPushButton(centralwidget);
        set_number_6->setObjectName("set_number_6");
        set_number_6->setEnabled(true);
        set_number_6->setGeometry(QRect(460, 270, 90, 80));
        sizePolicy1.setHeightForWidth(set_number_6->sizePolicy().hasHeightForWidth());
        set_number_6->setSizePolicy(sizePolicy1);
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        set_number_6->setPalette(palette16);
        set_number_6->setFont(font1);
        set_number_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        set_number_7 = new QPushButton(centralwidget);
        set_number_7->setObjectName("set_number_7");
        set_number_7->setEnabled(true);
        set_number_7->setGeometry(QRect(280, 350, 90, 80));
        sizePolicy1.setHeightForWidth(set_number_7->sizePolicy().hasHeightForWidth());
        set_number_7->setSizePolicy(sizePolicy1);
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        set_number_7->setPalette(palette17);
        set_number_7->setFont(font1);
        set_number_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        set_number_8 = new QPushButton(centralwidget);
        set_number_8->setObjectName("set_number_8");
        set_number_8->setEnabled(true);
        set_number_8->setGeometry(QRect(370, 350, 90, 80));
        sizePolicy1.setHeightForWidth(set_number_8->sizePolicy().hasHeightForWidth());
        set_number_8->setSizePolicy(sizePolicy1);
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        set_number_8->setPalette(palette18);
        set_number_8->setFont(font1);
        set_number_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        set_number_9 = new QPushButton(centralwidget);
        set_number_9->setObjectName("set_number_9");
        set_number_9->setEnabled(true);
        set_number_9->setGeometry(QRect(460, 350, 90, 80));
        sizePolicy1.setHeightForWidth(set_number_9->sizePolicy().hasHeightForWidth());
        set_number_9->setSizePolicy(sizePolicy1);
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        set_number_9->setPalette(palette19);
        set_number_9->setFont(font1);
        set_number_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        set_number_0 = new QPushButton(centralwidget);
        set_number_0->setObjectName("set_number_0");
        set_number_0->setEnabled(true);
        set_number_0->setGeometry(QRect(280, 430, 180, 80));
        sizePolicy1.setHeightForWidth(set_number_0->sizePolicy().hasHeightForWidth());
        set_number_0->setSizePolicy(sizePolicy1);
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        set_number_0->setPalette(palette20);
        set_number_0->setFont(font1);
        set_number_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        set_dot_symbol = new QPushButton(centralwidget);
        set_dot_symbol->setObjectName("set_dot_symbol");
        set_dot_symbol->setEnabled(true);
        set_dot_symbol->setGeometry(QRect(460, 430, 90, 80));
        sizePolicy1.setHeightForWidth(set_dot_symbol->sizePolicy().hasHeightForWidth());
        set_dot_symbol->setSizePolicy(sizePolicy1);
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        set_dot_symbol->setPalette(palette21);
        set_dot_symbol->setFont(font1);
        set_dot_symbol->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        set_left_bracket = new QPushButton(centralwidget);
        set_left_bracket->setObjectName("set_left_bracket");
        set_left_bracket->setEnabled(true);
        set_left_bracket->setGeometry(QRect(100, 110, 90, 80));
        sizePolicy.setHeightForWidth(set_left_bracket->sizePolicy().hasHeightForWidth());
        set_left_bracket->setSizePolicy(sizePolicy);
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        set_left_bracket->setPalette(palette22);
        set_left_bracket->setFont(font1);
        set_left_bracket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: black; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        degree_conversion = new QPushButton(centralwidget);
        degree_conversion->setObjectName("degree_conversion");
        degree_conversion->setEnabled(true);
        degree_conversion->setGeometry(QRect(10, 110, 90, 80));
        sizePolicy.setHeightForWidth(degree_conversion->sizePolicy().hasHeightForWidth());
        degree_conversion->setSizePolicy(sizePolicy);
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette23.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette23.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        degree_conversion->setPalette(palette23);
        degree_conversion->setFont(font1);
        degree_conversion->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: black; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        set_cos = new QPushButton(centralwidget);
        set_cos->setObjectName("set_cos");
        set_cos->setEnabled(true);
        set_cos->setGeometry(QRect(190, 190, 90, 80));
        sizePolicy1.setHeightForWidth(set_cos->sizePolicy().hasHeightForWidth());
        set_cos->setSizePolicy(sizePolicy1);
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette24.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        set_cos->setPalette(palette24);
        set_cos->setFont(font1);
        set_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        set_acos = new QPushButton(centralwidget);
        set_acos->setObjectName("set_acos");
        set_acos->setEnabled(true);
        set_acos->setGeometry(QRect(100, 190, 90, 80));
        sizePolicy1.setHeightForWidth(set_acos->sizePolicy().hasHeightForWidth());
        set_acos->setSizePolicy(sizePolicy1);
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette25.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette25.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette25.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette25.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette25.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette25.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        set_acos->setPalette(palette25);
        set_acos->setFont(font1);
        set_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        set_sqrt = new QPushButton(centralwidget);
        set_sqrt->setObjectName("set_sqrt");
        set_sqrt->setEnabled(true);
        set_sqrt->setGeometry(QRect(10, 190, 90, 80));
        sizePolicy1.setHeightForWidth(set_sqrt->sizePolicy().hasHeightForWidth());
        set_sqrt->setSizePolicy(sizePolicy1);
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette26.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette26.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette26.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette26.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette26.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette26.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        set_sqrt->setPalette(palette26);
        set_sqrt->setFont(font1);
        set_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        set_sin = new QPushButton(centralwidget);
        set_sin->setObjectName("set_sin");
        set_sin->setEnabled(true);
        set_sin->setGeometry(QRect(190, 270, 90, 80));
        sizePolicy1.setHeightForWidth(set_sin->sizePolicy().hasHeightForWidth());
        set_sin->setSizePolicy(sizePolicy1);
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette27.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette27.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette27.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette27.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette27.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette27.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        set_sin->setPalette(palette27);
        set_sin->setFont(font1);
        set_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        set_tan = new QPushButton(centralwidget);
        set_tan->setObjectName("set_tan");
        set_tan->setEnabled(true);
        set_tan->setGeometry(QRect(190, 350, 90, 80));
        sizePolicy1.setHeightForWidth(set_tan->sizePolicy().hasHeightForWidth());
        set_tan->setSizePolicy(sizePolicy1);
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette28.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette28.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette28.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette28.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette28.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette28.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette28.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette28.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        set_tan->setPalette(palette28);
        set_tan->setFont(font1);
        set_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        set_asin = new QPushButton(centralwidget);
        set_asin->setObjectName("set_asin");
        set_asin->setEnabled(true);
        set_asin->setGeometry(QRect(100, 270, 90, 80));
        sizePolicy1.setHeightForWidth(set_asin->sizePolicy().hasHeightForWidth());
        set_asin->setSizePolicy(sizePolicy1);
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette29.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette29.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette29.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette29.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette29.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette29.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette29.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette29.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        set_asin->setPalette(palette29);
        set_asin->setFont(font1);
        set_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        set_atan = new QPushButton(centralwidget);
        set_atan->setObjectName("set_atan");
        set_atan->setEnabled(true);
        set_atan->setGeometry(QRect(100, 350, 90, 80));
        sizePolicy1.setHeightForWidth(set_atan->sizePolicy().hasHeightForWidth());
        set_atan->setSizePolicy(sizePolicy1);
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette30.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette30.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette30.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette30.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette30.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette30.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette30.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette30.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        set_atan->setPalette(palette30);
        set_atan->setFont(font1);
        set_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        set_ln = new QPushButton(centralwidget);
        set_ln->setObjectName("set_ln");
        set_ln->setEnabled(true);
        set_ln->setGeometry(QRect(10, 270, 90, 80));
        sizePolicy1.setHeightForWidth(set_ln->sizePolicy().hasHeightForWidth());
        set_ln->setSizePolicy(sizePolicy1);
        QPalette palette31;
        palette31.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette31.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette31.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette31.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette31.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette31.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette31.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette31.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette31.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        set_ln->setPalette(palette31);
        set_ln->setFont(font1);
        set_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        set_log = new QPushButton(centralwidget);
        set_log->setObjectName("set_log");
        set_log->setEnabled(true);
        set_log->setGeometry(QRect(10, 350, 90, 80));
        sizePolicy1.setHeightForWidth(set_log->sizePolicy().hasHeightForWidth());
        set_log->setSizePolicy(sizePolicy1);
        QPalette palette32;
        palette32.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette32.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette32.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette32.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette32.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette32.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette32.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette32.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette32.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        set_log->setPalette(palette32);
        set_log->setFont(font1);
        set_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        set_x = new QPushButton(centralwidget);
        set_x->setObjectName("set_x");
        set_x->setEnabled(true);
        set_x->setGeometry(QRect(10, 430, 90, 80));
        sizePolicy1.setHeightForWidth(set_x->sizePolicy().hasHeightForWidth());
        set_x->setSizePolicy(sizePolicy1);
        QPalette palette33;
        palette33.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        QBrush brush8(QColor(168, 196, 145, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette33.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette33.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette33.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette33.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette33.setBrush(QPalette::Active, QPalette::Window, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette33.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette33.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette33.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette33.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette33.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette33.setBrush(QPalette::Inactive, QPalette::Window, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette33.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette33.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette33.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette33.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette33.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette33.setBrush(QPalette::Disabled, QPalette::Window, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        set_x->setPalette(palette33);
        set_x->setFont(font1);
        set_x->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: rgb(168, 196, 145);\n"
"color: #000000;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        value_x = new QLineEdit(centralwidget);
        value_x->setObjectName("value_x");
        value_x->setGeometry(QRect(100, 430, 180, 80));
        QPalette palette34;
        palette34.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette34.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette34.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette34.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette34.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette34.setBrush(QPalette::Active, QPalette::Window, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette34.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette34.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette34.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette34.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette34.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette34.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette34.setBrush(QPalette::Inactive, QPalette::Window, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette34.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette34.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette34.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette34.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette34.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette34.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette34.setBrush(QPalette::Disabled, QPalette::Window, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette34.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        value_x->setPalette(palette34);
        value_x->setFont(font1);
        value_x->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: rgb(168, 196, 145);\n"
"color: white;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        credit_calc_button = new QPushButton(centralwidget);
        credit_calc_button->setObjectName("credit_calc_button");
        credit_calc_button->setGeometry(QRect(10, 510, 630, 40));
        credit_calc_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        label_x_min = new QLabel(centralwidget);
        label_x_min->setObjectName("label_x_min");
        label_x_min->setGeometry(QRect(660, 20, 57, 21));
        QPalette palette35;
        palette35.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette35.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette35.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        label_x_min->setPalette(palette35);
        label_x_max = new QLabel(centralwidget);
        label_x_max->setObjectName("label_x_max");
        label_x_max->setGeometry(QRect(930, 20, 57, 21));
        QPalette palette36;
        palette36.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette36.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette36.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        label_x_max->setPalette(palette36);
        doubleSpinBox_x_min = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_x_min->setObjectName("doubleSpinBox_x_min");
        doubleSpinBox_x_min->setGeometry(QRect(720, 20, 191, 23));
        QPalette palette37;
        palette37.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette37.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette37.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        doubleSpinBox_x_min->setPalette(palette37);
        doubleSpinBox_x_min->setMinimum(-9999999999.989999771118164);
        doubleSpinBox_x_min->setMaximum(9999999999.989999771118164);
        doubleSpinBox_x_min->setValue(-12.000000000000000);
        doubleSpinBox_x_max = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_x_max->setObjectName("doubleSpinBox_x_max");
        doubleSpinBox_x_max->setGeometry(QRect(990, 20, 191, 23));
        QPalette palette38;
        palette38.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette38.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette38.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        doubleSpinBox_x_max->setPalette(palette38);
        doubleSpinBox_x_max->setMinimum(-9999999999.989999771118164);
        doubleSpinBox_x_max->setMaximum(9999999999.989999771118164);
        doubleSpinBox_x_max->setValue(12.000000000000000);
        label_x_axis_min = new QLabel(centralwidget);
        label_x_axis_min->setObjectName("label_x_axis_min");
        label_x_axis_min->setGeometry(QRect(660, 50, 81, 21));
        QPalette palette39;
        palette39.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette39.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette39.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        label_x_axis_min->setPalette(palette39);
        label_y_axis_min = new QLabel(centralwidget);
        label_y_axis_min->setObjectName("label_y_axis_min");
        label_y_axis_min->setGeometry(QRect(840, 50, 81, 21));
        QPalette palette40;
        palette40.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette40.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette40.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        label_y_axis_min->setPalette(palette40);
        label_y_axis_max = new QLabel(centralwidget);
        label_y_axis_max->setObjectName("label_y_axis_max");
        label_y_axis_max->setGeometry(QRect(840, 80, 81, 21));
        QPalette palette41;
        palette41.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette41.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette41.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        label_y_axis_max->setPalette(palette41);
        label_x_axis_max = new QLabel(centralwidget);
        label_x_axis_max->setObjectName("label_x_axis_max");
        label_x_axis_max->setGeometry(QRect(660, 80, 81, 21));
        QPalette palette42;
        palette42.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette42.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette42.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        label_x_axis_max->setPalette(palette42);
        doubleSpinBox_x_axis_min = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_x_axis_min->setObjectName("doubleSpinBox_x_axis_min");
        doubleSpinBox_x_axis_min->setGeometry(QRect(750, 50, 71, 23));
        QPalette palette43;
        palette43.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette43.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette43.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        doubleSpinBox_x_axis_min->setPalette(palette43);
        doubleSpinBox_x_axis_min->setMinimum(-1000000.989999999990687);
        doubleSpinBox_x_axis_min->setMaximum(1000000.989999999990687);
        doubleSpinBox_x_axis_min->setValue(-10.000000000000000);
        doubleSpinBox_x_axis_max = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_x_axis_max->setObjectName("doubleSpinBox_x_axis_max");
        doubleSpinBox_x_axis_max->setGeometry(QRect(750, 80, 71, 23));
        QPalette palette44;
        palette44.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette44.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette44.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        doubleSpinBox_x_axis_max->setPalette(palette44);
        doubleSpinBox_x_axis_max->setMinimum(-1000000.989999999990687);
        doubleSpinBox_x_axis_max->setMaximum(1000000.989999999990687);
        doubleSpinBox_x_axis_max->setValue(10.000000000000000);
        doubleSpinBox_y_axis_min = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_y_axis_min->setObjectName("doubleSpinBox_y_axis_min");
        doubleSpinBox_y_axis_min->setGeometry(QRect(930, 50, 71, 23));
        QPalette palette45;
        palette45.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette45.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette45.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        doubleSpinBox_y_axis_min->setPalette(palette45);
        doubleSpinBox_y_axis_min->setMinimum(-1000000.989999999990687);
        doubleSpinBox_y_axis_min->setMaximum(1000000.989999999990687);
        doubleSpinBox_y_axis_min->setValue(-9.000000000000000);
        doubleSpinBox_y_axis_max = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_y_axis_max->setObjectName("doubleSpinBox_y_axis_max");
        doubleSpinBox_y_axis_max->setGeometry(QRect(930, 80, 71, 23));
        QPalette palette46;
        palette46.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette46.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette46.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        doubleSpinBox_y_axis_max->setPalette(palette46);
        doubleSpinBox_y_axis_max->setMinimum(-1000000.989999999990687);
        doubleSpinBox_y_axis_max->setMaximum(1000000.989999999990687);
        doubleSpinBox_y_axis_max->setValue(9.000000000000000);
        graph_button = new QPushButton(centralwidget);
        graph_button->setObjectName("graph_button");
        graph_button->setGeometry(QRect(1030, 50, 221, 51));
        QPalette palette47;
        palette47.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette47.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette47.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        graph_button->setPalette(palette47);
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(640, 110, 631, 441));
        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(use_backspace, set_equal_symbol);
        QWidget::setTabOrder(set_equal_symbol, clear_text);
        QWidget::setTabOrder(clear_text, set_number_1);
        QWidget::setTabOrder(set_number_1, set_number_2);
        QWidget::setTabOrder(set_number_2, set_number_3);
        QWidget::setTabOrder(set_number_3, set_number_4);
        QWidget::setTabOrder(set_number_4, set_number_5);
        QWidget::setTabOrder(set_number_5, set_number_6);
        QWidget::setTabOrder(set_number_6, set_number_7);
        QWidget::setTabOrder(set_number_7, set_number_8);
        QWidget::setTabOrder(set_number_8, set_number_9);
        QWidget::setTabOrder(set_number_9, set_number_0);
        QWidget::setTabOrder(set_number_0, set_dot_symbol);
        QWidget::setTabOrder(set_dot_symbol, degree_conversion);
        QWidget::setTabOrder(degree_conversion, set_left_bracket);
        QWidget::setTabOrder(set_left_bracket, set_right_bracket);
        QWidget::setTabOrder(set_right_bracket, set_division);
        QWidget::setTabOrder(set_division, set_multiplication);
        QWidget::setTabOrder(set_multiplication, set_mod);
        QWidget::setTabOrder(set_mod, set_plus);
        QWidget::setTabOrder(set_plus, set_minus);
        QWidget::setTabOrder(set_minus, set_sqrt);
        QWidget::setTabOrder(set_sqrt, set_acos);
        QWidget::setTabOrder(set_acos, set_cos);
        QWidget::setTabOrder(set_cos, set_ln);
        QWidget::setTabOrder(set_ln, set_asin);
        QWidget::setTabOrder(set_asin, set_sin);
        QWidget::setTabOrder(set_sin, set_log);
        QWidget::setTabOrder(set_log, set_atan);
        QWidget::setTabOrder(set_atan, set_tan);
        QWidget::setTabOrder(set_tan, set_x);
        QWidget::setTabOrder(set_x, value_x);
        QWidget::setTabOrder(value_x, lineEdit_1);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        use_backspace->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        set_multiplication->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        set_division->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        set_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        set_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        set_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        set_equal_symbol->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        clear_text->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        set_right_bracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        set_number_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        set_number_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        set_number_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        set_number_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        set_number_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        set_number_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        set_number_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        set_number_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        set_number_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        set_number_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        set_dot_symbol->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        set_left_bracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        degree_conversion->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        set_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        set_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        set_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        set_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        set_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        set_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        set_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        set_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        set_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        set_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        value_x->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        credit_calc_button->setText(QCoreApplication::translate("MainWindow", "credit calculator", nullptr));
        label_x_min->setText(QCoreApplication::translate("MainWindow", "x min", nullptr));
        label_x_max->setText(QCoreApplication::translate("MainWindow", "x max", nullptr));
        label_x_axis_min->setText(QCoreApplication::translate("MainWindow", "x axis min", nullptr));
        label_y_axis_min->setText(QCoreApplication::translate("MainWindow", "y axis min", nullptr));
        label_y_axis_max->setText(QCoreApplication::translate("MainWindow", "y axis max", nullptr));
        label_x_axis_max->setText(QCoreApplication::translate("MainWindow", "x axis max", nullptr));
        graph_button->setText(QCoreApplication::translate("MainWindow", " \320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
