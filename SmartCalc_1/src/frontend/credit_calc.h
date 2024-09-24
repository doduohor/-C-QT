#ifndef CREDIT_CALC_H
#define CREDIT_CALC_H

#include <QApplication>
#include <QDialog>
#include <QStandardItemModel>
#include <QTableView>

namespace Ui {
class credit_calc;
}

class credit_calc : public QDialog {
  Q_OBJECT

 public:
  explicit credit_calc(QWidget *parent = nullptr);
  ~credit_calc();

 private slots:

  void on_button_calculation_clicked();
  void calculateAnnuityPayment(double total_amount, int term,
                               double interest_rate, QStandardItemModel *model);
  void calculateDifferentialPayment(double total_amount, int term,
                                    double interest_rate,
                                    QStandardItemModel *model);

 private:
  Ui::credit_calc *ui;
};

#endif  // CREDIT_CALC_H
