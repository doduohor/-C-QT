#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <string.h>

#include <QApplication>
#include <QKeyEvent>
#include <QLineEdit>
#include <QMainWindow>
#include <QMouseEvent>
#include <QVector>

#define BRACKET_LEFT -1
#define BRACKET_RIGHT -2
#define DIGIT 0
#define MATH_OPERATIONS 1
#define FUNCTIONS 2
#define CLEAR_LINEEDIT 3
#define DOT 4
#define MOD 5
#define ERROR 6

extern "C" {
#include "../backend/calculate.h"
}

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 protected:
  void keyPressEvent(QKeyEvent *event) override;

 private slots:
  void number_processing();       // обработка цифор
  void transaction_processing();  // обработка ариф операций
  void function_processing();     // обработка функций
  void bracket_processing();      // обработка скобок
  void on_set_equal_symbol_clicked();  // нажатие кнопки =
  int line_end_check(QString line);  // анализ последнего символа в строке
  void number_of_brackets_and_operations(int *count_left, int *count_right,
                                         int *operations);  // количество скобок
  void onUseBackspaceClicked();  // обработка backspace
  void on_value_x_textEdited(
      const QString &newText);  // обработка нажатия строки со значением X
  bool eventFilter(QObject *obj, QEvent *event);  // очитска строки Х
  void on_graph_button_clicked();                 // график
  QString error_code(int code);                   // вывод ошибок
  void on_credit_calc_button_clicked();  // переход к кредитному калькулятору

 private:
  Ui::MainWindow *ui;
};
#endif  // MAINWINDOW_H
