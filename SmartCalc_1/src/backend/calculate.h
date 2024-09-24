#ifndef CALCULATE_H
#define CALCULATE_H

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 0
#define ERR_NULL 1
#define STRING_SIZE_ERR 2
#define ERROR_CALC 3
#define ERROR_PARS 4
#define LENGTH_STACK 512

struct Stack {
  char value[LENGTH_STACK];
  int top;
};

void initStack(struct Stack *stack);
int isEmpty(struct Stack *stack);
int isFull(struct Stack *stack);
void push_lexeme(struct Stack *stack, char lexeme);
void push_value(struct Stack *stack, char *value, int *index, int shift);
void push_functions(struct Stack *stack, char *line, int *index);
char pop(struct Stack *stack);
void printStack(struct Stack *stack);
char peek(struct Stack *stack);
int polish_notation(char *line, char *x, double *answer);
int evaluateRPN(char *expression, double *answer);
#endif  // CALCULATE_H
