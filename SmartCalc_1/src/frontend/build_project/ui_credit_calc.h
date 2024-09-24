/********************************************************************************
** Form generated from reading UI file 'credit_calc.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_CALC_H
#define UI_CREDIT_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_credit_calc
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_3;
    QGroupBox *groupBox;
    QRadioButton *annuity_Button;
    QRadioButton *differentiated_Button;
    QLabel *overpayment_on_loan_name;
    QLabel *total_payout_name;
    QPushButton *button_calculation;
    QTableView *tableView;
    QSpinBox *spinBox;
    QLabel *overpayment;
    QLabel *payout;

    void setupUi(QDialog *credit_calc)
    {
        if (credit_calc->objectName().isEmpty())
            credit_calc->setObjectName("credit_calc");
        credit_calc->resize(670, 536);
        label = new QLabel(credit_calc);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 191, 21));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label_2 = new QLabel(credit_calc);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 60, 81, 21));
        label_2->setFont(font);
        label_3 = new QLabel(credit_calc);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 100, 141, 21));
        label_3->setFont(font);
        doubleSpinBox = new QDoubleSpinBox(credit_calc);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setGeometry(QRect(210, 20, 221, 23));
        doubleSpinBox->setFont(font);
        doubleSpinBox->setMaximum(100000000.000000000000000);
        doubleSpinBox->setValue(300000.000000000000000);
        doubleSpinBox_3 = new QDoubleSpinBox(credit_calc);
        doubleSpinBox_3->setObjectName("doubleSpinBox_3");
        doubleSpinBox_3->setGeometry(QRect(210, 100, 61, 23));
        doubleSpinBox_3->setFont(font);
        doubleSpinBox_3->setValue(25.000000000000000);
        groupBox = new QGroupBox(credit_calc);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(450, 10, 201, 81));
        annuity_Button = new QRadioButton(groupBox);
        annuity_Button->setObjectName("annuity_Button");
        annuity_Button->setGeometry(QRect(10, 10, 111, 31));
        annuity_Button->setFont(font);
        differentiated_Button = new QRadioButton(groupBox);
        differentiated_Button->setObjectName("differentiated_Button");
        differentiated_Button->setGeometry(QRect(10, 39, 181, 31));
        differentiated_Button->setFont(font);
        overpayment_on_loan_name = new QLabel(credit_calc);
        overpayment_on_loan_name->setObjectName("overpayment_on_loan_name");
        overpayment_on_loan_name->setGeometry(QRect(30, 470, 231, 21));
        overpayment_on_loan_name->setFont(font);
        total_payout_name = new QLabel(credit_calc);
        total_payout_name->setObjectName("total_payout_name");
        total_payout_name->setGeometry(QRect(80, 500, 191, 21));
        total_payout_name->setFont(font);
        button_calculation = new QPushButton(credit_calc);
        button_calculation->setObjectName("button_calculation");
        button_calculation->setGeometry(QRect(470, 100, 161, 31));
        tableView = new QTableView(credit_calc);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 140, 671, 321));
        spinBox = new QSpinBox(credit_calc);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(210, 60, 61, 23));
        spinBox->setFont(font);
        spinBox->setMinimum(1);
        spinBox->setMaximum(600);
        overpayment = new QLabel(credit_calc);
        overpayment->setObjectName("overpayment");
        overpayment->setGeometry(QRect(270, 470, 381, 21));
        QFont font1;
        font1.setPointSize(12);
        overpayment->setFont(font1);
        payout = new QLabel(credit_calc);
        payout->setObjectName("payout");
        payout->setGeometry(QRect(270, 500, 381, 21));
        payout->setFont(font1);

        retranslateUi(credit_calc);

        QMetaObject::connectSlotsByName(credit_calc);
    } // setupUi

    void retranslateUi(QDialog *credit_calc)
    {
        credit_calc->setWindowTitle(QCoreApplication::translate("credit_calc", "credit_calc", nullptr));
        label->setText(QCoreApplication::translate("credit_calc", "\320\236\320\261\321\211\320\260\321\217 \321\201\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260 (\321\200\321\203\320\261.)", nullptr));
        label_2->setText(QCoreApplication::translate("credit_calc", "\320\241\321\200\320\276\320\272 (\320\274\320\265\321\201.)", nullptr));
        label_3->setText(QCoreApplication::translate("credit_calc", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        groupBox->setTitle(QString());
        annuity_Button->setText(QCoreApplication::translate("credit_calc", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\271", nullptr));
        differentiated_Button->setText(QCoreApplication::translate("credit_calc", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271", nullptr));
        overpayment_on_loan_name->setText(QCoreApplication::translate("credit_calc", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203 (\321\200\321\203\320\261.)", nullptr));
        total_payout_name->setText(QCoreApplication::translate("credit_calc", "\320\236\320\261\321\211\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260 (\321\200\321\203\320\261.)", nullptr));
        button_calculation->setText(QCoreApplication::translate("credit_calc", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        overpayment->setText(QCoreApplication::translate("credit_calc", "0.0", nullptr));
        payout->setText(QCoreApplication::translate("credit_calc", "0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class credit_calc: public Ui_credit_calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_CALC_H
