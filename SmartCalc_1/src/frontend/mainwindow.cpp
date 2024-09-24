#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  ui->value_x->installEventFilter(this);
  connect(ui->set_number_0, SIGNAL(clicked()), this, SLOT(number_processing()));
  connect(ui->set_number_1, SIGNAL(clicked()), this, SLOT(number_processing()));
  connect(ui->set_number_2, SIGNAL(clicked()), this, SLOT(number_processing()));
  connect(ui->set_number_3, SIGNAL(clicked()), this, SLOT(number_processing()));
  connect(ui->set_number_4, SIGNAL(clicked()), this, SLOT(number_processing()));
  connect(ui->set_number_5, SIGNAL(clicked()), this, SLOT(number_processing()));
  connect(ui->set_number_6, SIGNAL(clicked()), this, SLOT(number_processing()));
  connect(ui->set_number_7, SIGNAL(clicked()), this, SLOT(number_processing()));
  connect(ui->set_number_8, SIGNAL(clicked()), this, SLOT(number_processing()));
  connect(ui->set_number_9, SIGNAL(clicked()), this, SLOT(number_processing()));
  connect(ui->set_x, SIGNAL(clicked()), this, SLOT(number_processing()));
  connect(ui->set_dot_symbol, SIGNAL(clicked()), this,
          SLOT(number_processing()));
  connect(ui->set_plus, SIGNAL(clicked()), this,
          SLOT(transaction_processing()));
  connect(ui->set_minus, SIGNAL(clicked()), this,
          SLOT(transaction_processing()));
  connect(ui->set_multiplication, SIGNAL(clicked()), this,
          SLOT(transaction_processing()));
  connect(ui->set_division, SIGNAL(clicked()), this,
          SLOT(transaction_processing()));
  connect(ui->degree_conversion, SIGNAL(clicked()), this,
          SLOT(transaction_processing()));
  connect(ui->set_mod, SIGNAL(clicked()), this, SLOT(function_processing()));
  connect(ui->set_left_bracket, SIGNAL(clicked()), this,
          SLOT(bracket_processing()));
  connect(ui->set_right_bracket, SIGNAL(clicked()), this,
          SLOT(bracket_processing()));
  connect(ui->set_sin, SIGNAL(clicked()), this, SLOT(function_processing()));
  connect(ui->set_cos, SIGNAL(clicked()), this, SLOT(function_processing()));
  connect(ui->set_tan, SIGNAL(clicked()), this, SLOT(function_processing()));
  connect(ui->set_asin, SIGNAL(clicked()), this, SLOT(function_processing()));
  connect(ui->set_acos, SIGNAL(clicked()), this, SLOT(function_processing()));
  connect(ui->set_atan, SIGNAL(clicked()), this, SLOT(function_processing()));
  connect(ui->set_sqrt, SIGNAL(clicked()), this, SLOT(function_processing()));
  connect(ui->set_ln, SIGNAL(clicked()), this, SLOT(function_processing()));
  connect(ui->set_log, SIGNAL(clicked()), this, SLOT(function_processing()));
  connect(ui->use_backspace, SIGNAL(clicked()), this,
          SLOT(onUseBackspaceClicked()));
  connect(ui->clear_text, &QPushButton::clicked, ui->lineEdit_1,
          &QLineEdit::clear);
  connect(ui->value_x, &QLineEdit::textEdited, this,
          &MainWindow::on_value_x_textEdited);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::keyPressEvent(QKeyEvent *event)
{
  switch (event->key())
  {
  case Qt::Key_Return:
  case Qt::Key_Enter:
    on_set_equal_symbol_clicked();
    break;
  case Qt::Key_Backspace:
    onUseBackspaceClicked();
    break;
  default:
    QMainWindow::keyPressEvent(event);
    break;
  }
}

void MainWindow::on_value_x_textEdited(const QString &newText)
{
  if (!newText.isEmpty())
  {
    QChar lastChar = newText[newText.length() - 1];

    // Проверяем, что последний символ это не цифра, не точка и не начальный
    // минус
    if (!lastChar.isDigit() && lastChar != '.' &&
        !(lastChar == '-' && newText.length() == 1))
    {
      ui->value_x->setText(newText.left(newText.length() - 1));
    }
    // Проверяем, что точек не более одной и точка не стоит в начале строки
    else if (lastChar == '.' && (newText.count('.') > 1 || newText[0] == '.'))
    {
      ui->value_x->setText(newText.left(newText.length() - 1));
    }
  }
}

// Очистка значения Х при переключении фокуса. А также возвращение в начальное
// состояние если не было изменений или значение осталось пустым.
bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
  if (obj == ui->value_x)
  {
    if (event->type() == QEvent::FocusIn)
    {
      QLineEdit *value_x = qobject_cast<QLineEdit *>(obj);
      if (value_x->text() == "0.0")
        value_x->clear();
    }
    else if (event->type() == QEvent::FocusOut)
    {
      QLineEdit *value_x = qobject_cast<QLineEdit *>(obj);
      if (value_x->text().isEmpty() || value_x->text() == "0" ||
          value_x->text() == "-")
        value_x->setText("0.0");
    }
  }
  return QMainWindow::eventFilter(obj, event);
}

// Обработка нажатия Backspace, как через клавишу так и через кнопку + очищает
// функции целиком(если они пустые)
void MainWindow::onUseBackspaceClicked()
{
  int line_check = line_end_check(ui->lineEdit_1->text());
  QString line = ui->lineEdit_1->text();
  if (line_check != ERROR)
  {
    if ((line_check == FUNCTIONS || line_check == MOD) &&
        line_check != CLEAR_LINEEDIT)
    {
      if (line.endsWith("asin(") || line.endsWith("acos(") ||
          line.endsWith("atan(") || line.endsWith("sqrt("))
        ui->lineEdit_1->setText(ui->lineEdit_1->text().chopped(5));
      else if (line.endsWith("sin(") || line.endsWith("cos(") ||
               line.endsWith("tan(") || line.endsWith("log("))
        ui->lineEdit_1->setText(ui->lineEdit_1->text().chopped(4));
      else if (line.endsWith("mod") || line.endsWith("ln("))
        ui->lineEdit_1->setText(ui->lineEdit_1->text().chopped(3));
    }
    else
      ui->lineEdit_1->backspace();
  }
}

// 0 1 2 3 4 5 6 7 8 9 . x
void MainWindow::number_processing()
{
  int line_check = line_end_check(ui->lineEdit_1->text());
  QPushButton *button = (QPushButton *)sender();
  // Если посл символ - цифра, пустота, мат оператор, левая скобка,
  // функция,точка, mod(при этом с запретом нажатия 0), без ошибки - проходим
  if ((line_check == DIGIT || line_check == CLEAR_LINEEDIT ||
       line_check == MATH_OPERATIONS || line_check == BRACKET_LEFT ||
       line_check == FUNCTIONS || line_check == DOT ||
       (line_check == MOD && button->text() != "0")) &&
      line_check != ERROR)
  {
    // Если нажали не точку и не Х и последний символ в строке не Х проходим
    if (button->text() != "." && button->text() != 'x' &&
        !ui->lineEdit_1->text().endsWith("x"))
    {
      // Если в строке не лежит ноль - проходим и заменяем текст, иначе
      // добавляем текст
      if (ui->lineEdit_1->text() != "0")
        ui->lineEdit_1->insert(button->text());
      else
        ui->lineEdit_1->setText(button->text());
    }
    // Если нажали кнопку Х, посл символ не цифра и не точка, и в Х лежит
    // оконченная цифра - проходим.
    else if (button->text() == 'x' && line_check != DIGIT &&
             line_check != DOT && ui->value_x->text().back().isDigit())
    {
      // Если строка оканчивается функцией и при этом она из тех, внутри которой
      // может быть отриц число - добавляем Х. Также если Х - положительный и
      // строка оканчивается mod - добавляем x.
      if (!((line_check == FUNCTIONS && ui->value_x->text().startsWith("-") &&
             (ui->lineEdit_1->text().endsWith("log(") ||
              ui->lineEdit_1->text().endsWith("ln(") ||
              ui->lineEdit_1->text().endsWith("sqrt(") ||
              ui->lineEdit_1->text().endsWith("acos(") ||
              ui->lineEdit_1->text().endsWith("asin(") ||
              ui->lineEdit_1->text().endsWith("atan("))) ||
            (line_check == MOD && ui->value_x->text().startsWith("-"))))
        ui->lineEdit_1->insert(button->text());

    } // Если нажали точку и строка оканчивается цифрой и не оканчивается при
      // этом Х
    else if (!ui->lineEdit_1->text().endsWith("x") && line_check == DIGIT &&
             button->text() == '.')
      ui->lineEdit_1->insert(button->text());
  }
}

// + - * / ^
void MainWindow::transaction_processing()
{
  int line_check = line_end_check(ui->lineEdit_1->text());
  QPushButton *button = (QPushButton *)sender();
  // Если посл символ цифра, правая скобка, функция, левая скобка и нажали минус
  // (с обработкой повторения), не МOD и не ошибка
  if ((line_check == DIGIT || line_check == BRACKET_RIGHT ||
       line_check == FUNCTIONS ||
       (line_check == BRACKET_LEFT && button->text() == "-" &&
        !ui->lineEdit_1->text().endsWith("-"))) &&
      line_check != MOD &&
      line_check != ERROR)
  { // Если строка оканч функцией и нажали минус и при
    // этом строка не оканчивается функциями из списка
    // - добавляем минус
    if (line_check == FUNCTIONS && button->text() == '-' &&
        !ui->lineEdit_1->text().endsWith("log(") &&
        !ui->lineEdit_1->text().endsWith("ln(") &&
        !ui->lineEdit_1->text().endsWith("sqrt(") &&
        !ui->lineEdit_1->text().endsWith("acos(") &&
        !ui->lineEdit_1->text().endsWith("asin(") &&
        !ui->lineEdit_1->text().endsWith("atan(") &&
        !ui->lineEdit_1->text().endsWith("-"))
      ui->lineEdit_1->insert(button->text());
    else if (line_check != FUNCTIONS)
      // Добавляем остальные операции
      ui->lineEdit_1->insert(button->text());
  }
  // Если строка пустая и мы нажали минус - добавляем
  else if (line_check == CLEAR_LINEEDIT && button->text() == '-')
    ui->lineEdit_1->insert(button->text());
  // Если строка оканчивается матем оператором и длина строчки > 1 (нужно чтобы
  // первый "-" не заменился на другие операторы) меняем оператор
  else if (line_check == MATH_OPERATIONS && ui->lineEdit_1->text().length() > 1)
    ui->lineEdit_1->setText(ui->lineEdit_1->text().chopped(1) + button->text());
}

// sin cos tan asin acos atan sqrt ln log mod
void ::MainWindow::function_processing()
{
  int line_check = line_end_check(ui->lineEdit_1->text());
  QPushButton *button = (QPushButton *)sender();
  if (button->text() != "mod" &&
      (line_check == CLEAR_LINEEDIT || line_check == MATH_OPERATIONS ||
       line_check == BRACKET_LEFT || line_check == FUNCTIONS) &&
      line_check != ERROR)
    ui->lineEdit_1->insert(button->text() + "(");
  else if (button->text() == "mod" && line_check == DIGIT)
    ui->lineEdit_1->insert(button->text());
}

void ::MainWindow::number_of_brackets_and_operations(int *count_left,
                                                     int *count_right,
                                                     int *operations)
{
  QString line = ui->lineEdit_1->text();
  for (int i = 0; i < line.length(); i++)
  {
    if (line[i] == '(')
    {
      QString temp_line = line.left(i + 1);
      (*count_left)++;
      *operations = 0;
      if (line_end_check(temp_line) == FUNCTIONS)
        (*operations)++;
    }
    else if (line[i] == ')')
      (*count_right)++;
    else if (line[i] == '+' || line[i] == '-' || line[i] == '*' ||
             line[i] == '/' || line[i] == '^')
      (*operations)++;
  }
}

// ( )
void ::MainWindow::bracket_processing()
{
  int line_check = line_end_check(ui->lineEdit_1->text());
  int count_left_bracket = 0, count_right_bracket = 0, count_operations = 0;
  number_of_brackets_and_operations(&count_left_bracket, &count_right_bracket,
                                    &count_operations);
  QPushButton *button = (QPushButton *)sender();
  if ((button->text() == "(" &&
       (line_check == CLEAR_LINEEDIT || line_check == FUNCTIONS ||
        line_check == MATH_OPERATIONS || line_check == BRACKET_LEFT)) &&
      line_check != ERROR)
    ui->lineEdit_1->insert(button->text());
  else if ((button->text() == ")" &&
            (line_check == DIGIT || line_check == BRACKET_RIGHT) &&
            count_operations > 0 &&
            count_left_bracket >= count_right_bracket + 1) &&
           line_check != ERROR)
    ui->lineEdit_1->insert(button->text());
}

int ::MainWindow::line_end_check(QString line)
{
  int result = CLEAR_LINEEDIT;
  if (line != "")
  {
    if (line.back().isDigit() || line.back() == 'x')
      result = DIGIT;
    else if (line.endsWith("sin(") || line.endsWith("cos(") ||
             line.endsWith("tan(") || line.endsWith("asin(") ||
             line.endsWith("acos(") || line.endsWith("atan(") ||
             line.endsWith("sqrt(") || line.endsWith("ln(") ||
             line.endsWith("log(") || line.endsWith("sin(-") ||
             line.endsWith("cos(-") || line.endsWith("tan(-") ||
             line.endsWith("asin(-") || line.endsWith("acos(-") ||
             line.endsWith("atan(-") || line.endsWith("sqrt(-") ||
             line.endsWith("ln(-") || line.endsWith("log(-"))
      result = FUNCTIONS;
    else if (line.endsWith('('))
      result = BRACKET_LEFT;
    else if (line.endsWith(')'))
      result = BRACKET_RIGHT;
    else if (line.endsWith('+') || line.endsWith('-') || line.endsWith('*') ||
             line.endsWith('/') || line.endsWith('^'))
      result = MATH_OPERATIONS;
    else if (line.endsWith('.'))
      result = DOT;
    else if (line.endsWith("mod"))
      result = MOD;
    else if (line.endsWith("Calc Error. Press AC") ||
             line.endsWith("Max size - 255. Press AC") ||
             line.endsWith("Parsing Error. Press AC"))
      result = ERROR;
  }
  return result;
}

void MainWindow::on_set_equal_symbol_clicked()
{
  int line_check = line_end_check(ui->lineEdit_1->text());
  int count_left_bracket = 0, count_right_bracket = 0, count_operations = 0;
  number_of_brackets_and_operations(&count_left_bracket, &count_right_bracket,
                                    &count_operations);
  if ((line_check == DIGIT || line_check == BRACKET_RIGHT) &&
      count_left_bracket == count_right_bracket &&
      ui->value_x->text().back().isDigit())
  {
    double result = 0;
    QString qStr = ui->lineEdit_1->text();
    QString qStr_x = ui->value_x->text();
    std::string stdStr = qStr.toStdString();
    std::string stdStr_x = qStr_x.toStdString();
    const char *cStr = stdStr.c_str();
    const char *cStr_x = stdStr_x.c_str();
    char line[256] = {'\0'};
    char line_x[256] = {'\0'};
    strncpy(line, cStr, sizeof(line) - 1);
    strncpy(line_x, cStr_x, sizeof(line_x) - 1);
    line[sizeof(line) - 1] = '\0';
    line_x[sizeof(line_x) - 1] = '\0';
    int flag = polish_notation(line, line_x, &result);
    if (flag == 0)
    {
      if (std::fabs(0.0 - result) < 1e-15)
        ui->lineEdit_1->setText("0");
      else
        ui->lineEdit_1->setText(QString::number(result, 'g', 15));
    }
    else if (flag == ERROR_CALC)
      ui->lineEdit_1->setText("Calc Error. Press AC");
    else if (flag == ERR_NULL)
      ui->lineEdit_1->setText("0");
    else if (flag == STRING_SIZE_ERR)
      ui->lineEdit_1->setText("String Size Error. Max size - 255. Press AC");
    else if (flag == ERROR_PARS)
      ui->lineEdit_1->setText("Parsing Error. Press AC");
  }
  else if (line_check == CLEAR_LINEEDIT)
    ui->lineEdit_1->setText("0");
}

QString MainWindow::error_code(int code)
{
  QString return_err;
  switch (code)
  {
  case ERROR_CALC:
    return_err = "Calc Error";
    break;
  case ERR_NULL:
    return_err = "Error String Size";
    break;
  case ERROR_PARS:
    return_err = "Parsing Error";
    break;
  default:
    break;
  }
  return return_err;
}

void MainWindow::on_graph_button_clicked()
{
  ui->widget->clearGraphs();
  int flag = OK;
  QVector<double> x, y;
  double h = 0.1, yValue = 0.0;
  double x_axis_min = ui->doubleSpinBox_x_axis_min->value();
  double x_axis_max = ui->doubleSpinBox_x_axis_max->value();
  double y_axis_min = ui->doubleSpinBox_y_axis_min->value();
  double y_axis_max = ui->doubleSpinBox_y_axis_max->value();
  double xMin = 0, xMax = 0;
  xMin = ui->doubleSpinBox_x_min->value();
  xMax = ui->doubleSpinBox_x_max->value();
  if (xMin >= xMax || x_axis_min >= x_axis_max || y_axis_min >= y_axis_max)
    QMessageBox::critical(this, "Graph error", "Error parametres for graph");
  else
  {
    h = (xMax - xMin) / 100000;
    if (ui->lineEdit_1->text().contains("x") == false)
      flag = ERROR_PARS;
    QByteArray QBString = ui->lineEdit_1->text().toLocal8Bit();
    char *CharString = QBString.data();
    double prevY = 0, prevX = 0;
    ui->widget->addGraph();
    for (double xValue = xMin; xValue <= xMax && flag == OK; xValue += h)
    {
      QString stringValue = QString::number(xValue);
      QByteArray byteArray = stringValue.toUtf8();
      char *x_value = byteArray.data();
      flag = polish_notation(CharString, x_value, &yValue);
      x if (flag == OK && prevY > yValue &&
            ui->lineEdit_1->text().startsWith("tan("))
      {
        ui->widget->addGraph();
        x.clear();
        y.clear();
      }
      if (flag == OK)
      {
        x.push_back(xValue);
        y.push_back(yValue);
        ui->widget->graph()->addData(x, y);
        prevY = yValue;
        prevX = xValue;
      }
      else
        QMessageBox::critical(this, "Graph error",
                              "program error = " + error_code(flag));
    }
    if (flag == OK)
    {
      ui->widget->xAxis->setRange(x_axis_min, x_axis_max);
      ui->widget->yAxis->setRange(y_axis_min, y_axis_max);
      ui->widget->replot();
      ui->widget->setInteraction(QCP::iRangeZoom, true);
      ui->widget->setInteraction(QCP::iRangeDrag, true);
    }
  }
}
