#include "credit_calc.h"

#include "mainwindow.h"
#include "ui_credit_calc.h"

credit_calc::credit_calc(QWidget *parent)
    : QDialog(parent), ui(new Ui::credit_calc) {
  ui->setupUi(this);
}

credit_calc::~credit_calc() { delete ui; }

void MainWindow::on_credit_calc_button_clicked() {
  credit_calc window;
  window.setModal(true);
  window.exec();
}

void credit_calc::on_button_calculation_clicked() {
  QStandardItemModel *model = new QStandardItemModel;
  double total_amount = ui->doubleSpinBox->value();
  int term = ui->spinBox->value();
  double interest_rate = ui->doubleSpinBox_3->value() / 100.00;
  model->setHorizontalHeaderLabels(QStringList() << "Месяц"
                                                 << "Платеж"
                                                 << "Сумма процентов"
                                                 << "Платеж в ОД"
                                                 << "Остаток ОД");
  if (total_amount > 0 && term > 0 && interest_rate > 0) {
    if (ui->annuity_Button->isChecked())
      calculateAnnuityPayment(total_amount, term, interest_rate, model);
    else if (ui->differentiated_Button->isChecked())
      calculateDifferentialPayment(total_amount, term, interest_rate, model);
  }
}

void credit_calc::calculateAnnuityPayment(double total_amount, int term,
                                          double interest_rate,
                                          QStandardItemModel *model) {
  double payment = total_amount * (interest_rate / 12.0) /
                   (1 - pow(1 + (interest_rate / 12.0), -term));
  double total_payout = (payment * term) - total_amount;
  ui->payout->setText(QString::number(total_payout + total_amount, 'f', 2));
  ui->overpayment->setText(QString::number(total_payout, 'f', 2));
  double payment_interest = 0, loan_body = 0, balance_owed = total_amount;
  for (int i = 1; i <= term; i++) {
    payment_interest = balance_owed * (interest_rate / 12.0);
    loan_body = payment - payment_interest;
    balance_owed -= loan_body;
    if (std::fabs(0.0 - balance_owed) < 1e-8) balance_owed = 0;
    QList<QStandardItem *> rowItems;
    rowItems << new QStandardItem(QString::number(i));  // Месяц
    rowItems << new QStandardItem(QString::number(payment, 'f', 2));  // Платеж
    rowItems << new QStandardItem(
        QString::number(payment_interest, 'f', 2));  // Сумма процентов
    rowItems << new QStandardItem(
        QString::number(loan_body, 'f', 2));  // Платеж в ОД
    rowItems << new QStandardItem(
        QString::number(balance_owed, 'f', 2));  // Остаток основного долга
    model->appendRow(rowItems);
  }
  ui->tableView->setModel(model);
  ui->tableView->verticalHeader()->hide();
  ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
  ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
  ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
}

void credit_calc::calculateDifferentialPayment(double total_amount, int term,
                                               double interest_rate,
                                               QStandardItemModel *model) {
  double loan_body = total_amount / term, payment_interest = 0,
         balance_owed = total_amount, payment = 0, total_payout = 0;
  for (int i = 1; i <= term; i++) {
    payment_interest = balance_owed * (interest_rate / 12.0);
    payment = payment_interest + loan_body;
    balance_owed -= loan_body;
    total_payout += payment_interest;
    if (std::fabs(0.0 - balance_owed) < 1e-8) balance_owed = 0;
    QList<QStandardItem *> rowItems;
    rowItems << new QStandardItem(QString::number(i));  // Месяц
    rowItems << new QStandardItem(QString::number(payment, 'f', 2));  // Платеж
    rowItems << new QStandardItem(
        QString::number(payment_interest, 'f', 2));  // Сумма процентов
    rowItems << new QStandardItem(
        QString::number(loan_body, 'f', 2));  // Платеж в ОД
    rowItems << new QStandardItem(
        QString::number(balance_owed, 'f', 2));  // Остаток основного долга
    model->appendRow(rowItems);
  }
  ui->payout->setText(QString::number(total_payout + total_amount, 'f', 2));
  ui->overpayment->setText(QString::number(total_payout, 'f', 2));
  ui->tableView->setModel(model);
  ui->tableView->verticalHeader()->hide();
  ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
  ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
  ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
}
