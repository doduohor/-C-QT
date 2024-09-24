#include "calculate.h"

// Функция для проверки, пуст ли стек
int isEmpty(struct Stack *stack) { return stack->top == -1; }

// Функция для проверки, полон ли стек
int isFull(struct Stack *stack) { return stack->top == LENGTH_STACK - 1; }

// Функция для добавления символа в стек
void push_lexeme(struct Stack *stack, char lexeme) {
  if (!isFull(stack) && lexeme != '\0') {
    int temp_top = stack->top;
    if (strchr("sincotalgqrmd", peek(stack)) == NULL &&
        strchr("sincotalgqrmd", lexeme) != NULL && peek(stack) != ' ')
      stack->value[++temp_top] = ' ';
    else if (strchr("sincotalgqrmd", lexeme) == NULL &&
             (temp_top == -1 || stack->value[temp_top] != ' ') && lexeme != ' ')
      stack->value[++temp_top] = ' ';

    // Проверяем, изменился ли temp_top, прежде чем добавить основной lexeme
    if (temp_top != stack->top) stack->top = temp_top;

    if (lexeme != ' ' ||
        (strchr("sincotalgqrmd", peek(stack)) != NULL && lexeme == ' ')) {
      stack->value[++stack->top] = lexeme;
    }
  }
}

// Функция для добавления значения в стек
void push_value(struct Stack *stack, char *value, int *index, int shift) {
  if (value != NULL && !isFull(stack)) {
    int length = strlen(value);
    strcat(stack->value, " ");
    strcat(stack->value, value);
    stack->top += length + 1;
    *index += shift;
  }
}
// Функция для удаления элемента из стека
char pop(struct Stack *stack) {
  char symb = '\0';
  if (!isEmpty(stack)) {
    symb = stack->value[stack->top];
    stack->value[stack->top] = '\0';
    stack->top--;
  }
  return symb;
}

// Функция для получения вершины стека (без удаления)
char peek(struct Stack *stack) {
  if (isEmpty(stack)) return -1;
  return stack->value[stack->top];
}

int polish_notation(char *line, char *x, double *answer) {
  if (line == NULL) return ERR_NULL;
  if (strlen(line) > 255) return STRING_SIZE_ERR;
  *answer = 0.0;
  struct Stack operators = {{'\0'}, -1};
  struct Stack result = {{'\0'}, -1};
  int length = strlen(line);
  char res[LENGTH_STACK] = {'\0'};
  int flag = 0;
  for (int i = 0; i < length && flag == 0; i++) {
    char buffer[256] = {'\0'};
    switch (line[i]) {
      case 'x':
        strcpy(buffer, x);
        push_value(&result, buffer, &i, 0);
        break;
      case '0' ... '9':
        int count = i;
        for (int k = 0; strchr("0123456789.", line[count]) != NULL;
             count++, k++)
          buffer[k] = line[count];
        push_value(&result, buffer, &i, count - i - 1);
        break;
      case '+':
      case '-':  // плюс или минус
        if (((i > 0 && line[i - 1] == '(' && peek(&operators) == '(') ||
             i == 0) &&
            line[i] == '-') {
          push_lexeme(&result, '0');
        }
        while (!isEmpty(&operators) && peek(&operators) != '(')
          push_lexeme(&result, pop(&operators));
        push_lexeme(&operators, line[i]);
        break;

      case '(':  // открывающая скобка
        push_lexeme(&operators, line[i]);
        break;

      case ')':  // закрывающая скобка
        while (!isEmpty(&operators) && peek(&operators) != '(')
          push_lexeme(&result, pop(&operators));
        if (!isEmpty(&operators)) pop(&operators);
        break;

      case '*':
      case '/':  // умножение или деление
        while (!isEmpty(&operators) && peek(&operators) != '+' &&
               peek(&operators) != '-' && peek(&operators) != '(' &&
               peek(&operators) != ')')
          push_lexeme(&result, pop(&operators));
        push_lexeme(&operators, line[i]);
        break;

      case '^':  // возведение в степень
        while (!isEmpty(&operators) && peek(&operators) != '+' &&
               peek(&operators) != '-' && peek(&operators) != '*' &&
               peek(&operators) != '/' && peek(&operators) != '(' &&
               peek(&operators) != '^')
          push_lexeme(&result, pop(&operators));
        push_lexeme(&operators, line[i]);
        break;

      default:  // буквы функций
        if (strchr("sincotalgqrmd", line[i]) != NULL || line[i] == ' ')
          push_functions(&operators, line, &i);
        else
          flag = ERROR_PARS;
    }
  }
  if (flag == 0) {
    while (!isEmpty(&operators)) push_lexeme(&result, pop(&operators));
    result.value[result.top + 1] = '\0';
    strncpy(res, result.value, result.top + 1);
    flag = evaluateRPN(res, answer);
  }
  return flag;
}

void push_functions(struct Stack *stack, char *line, int *index) {
  if (line == NULL) return;
  if (strncmp(&line[*index], "asin", 2) == 0)
    push_value(stack, "nisa", index, 3);
  else if (strncmp(&line[*index], "acos", 2) == 0)
    push_value(stack, "soca", index, 3);
  else if (strncmp(&line[*index], "atan", 2) == 0)
    push_value(stack, "nata", index, 3);
  else if (strncmp(&line[*index], "sin", 2) == 0)
    push_value(stack, "nis", index, 2);
  else if (strncmp(&line[*index], "cos", 2) == 0)
    push_value(stack, "soc", index, 2);
  else if (strncmp(&line[*index], "tan", 2) == 0)
    push_value(stack, "nat", index, 2);
  else if (strncmp(&line[*index], "sqrt", 2) == 0)
    push_value(stack, "trqs", index, 3);
  else if (strncmp(&line[*index], "ln", 2) == 0)
    push_value(stack, "nl", index, 1);
  else if (strncmp(&line[*index], "log", 2) == 0)
    push_value(stack, "gol", index, 2);
  else if (strncmp(&line[*index], "mod", 2) == 0)
    push_value(stack, "dom", index, 2);
}

int evaluateRPN(char *expression, double *answer) {
  *answer = 0.0;
  if (expression == NULL) return ERR_NULL;
  double stack[100];
  int stackIndex = -1;
  int flag = 0;
  char *token = strtok(expression, " ");

  while (token != NULL) {
    if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1])))
      // Если токен является числом, поместить его в стек
      stack[++stackIndex] = strtold(token, NULL);

    else {
      double result = 0.0, operand = 0.0;
      // Операции, требующие одного операнда
      if (strcmp(token, "cos") == 0 || strcmp(token, "sin") == 0 ||
          strcmp(token, "tan") == 0 || strcmp(token, "acos") == 0 ||
          strcmp(token, "asin") == 0 || strcmp(token, "atan") == 0 ||
          strcmp(token, "sqrt") == 0 || strcmp(token, "ln") == 0 ||
          strcmp(token, "log") == 0) {
        operand = stack[stackIndex--];
        // Выполнить операцию в зависимости от токена
        if (strcmp(token, "cos") == 0)
          result = cos(operand);
        else if (strcmp(token, "sin") == 0)
          result = sin(operand);
        else if (strcmp(token, "tan") == 0)
          result = tan(operand);
        else if (strcmp(token, "acos") == 0)
          result = acos(operand);
        else if (strcmp(token, "asin") == 0)
          result = asin(operand);
        else if (strcmp(token, "atan") == 0)
          result = atan(operand);
        else if (strcmp(token, "sqrt") == 0)
          result = sqrt(operand);
        else if (strcmp(token, "ln") == 0)
          result = log(operand);
        else if (strcmp(token, "log") == 0)
          result = log10(operand);
      } else if (strcmp(token, "+") == 0 || strcmp(token, "-") == 0 ||
                 strcmp(token, "*") == 0 || strcmp(token, "/") == 0 ||
                 strcmp(token, "^") == 0 || strcmp(token, "mod") == 0) {
        double operand2 = stack[stackIndex--];
        double operand1 = stack[stackIndex--];
        if (strcmp(token, "+") == 0)
          result = operand1 + operand2;
        else if (strcmp(token, "-") == 0)
          result = operand1 - operand2;
        else if (strcmp(token, "*") == 0)
          result = operand1 * operand2;
        else if (strcmp(token, "/") == 0)
          result = operand1 / operand2;
        else if (strcmp(token, "^") == 0)
          result = pow(operand1, operand2);
        else if (strcmp(token, "mod") == 0)
          result = fmod(operand1, operand2);
      }
      // Результат операции помещается обратно в стек
      stack[++stackIndex] = result;
    }

    token = strtok(NULL, " ");
  }
  if (isnan(stack[0]) || isinf(stack[0]))
    flag = ERROR_CALC;
  else
    *answer = stack[0];
  return flag;
}
