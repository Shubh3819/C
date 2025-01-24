#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>
struct Stack {
  int top;
  char *a;
};

int isEmpty(struct Stack *s) {
  return (s->top == -1);
}

void push(struct Stack *s, char ch) {
  s->top++;
  s->a[s->top] = ch;
}

char pop(struct Stack *s) {
  if (isEmpty(s))
    return '\0';
  return s->a[s->top--];
}

int prec(char ch) {
  switch (ch) {
  case '+':
  case '-':
    return 1;
  case '*':
  case '/':
    return 2;
  case '^':
    return 3;
  case '(':
    return 0;
  case ')':
    return -1;
  default:
    return -1;
  }
}

void infixToPostfix(char exp[]) {
  struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
  stack->top = -1;
  stack->a = (char *)malloc(sizeof(char) * (strlen(exp) + 1));

  int i, j = 0;
  for (i = 0; exp[i] != '\0'; i++) {
    if (isalnum(exp[i])) {
      exp[j++] = exp[i];
    } else if (exp[i] == '(') {
      push(stack, exp[i]);
    } else if (exp[i] == ')') {
      while (!isEmpty(stack) && pop(stack) != '(') {
        exp[j++] = pop(stack);
      }
    } else {
      while (!isEmpty(stack) && prec(exp[i]) <= prec(stack->a[stack->top])) {
        exp[j++] = pop(stack);
      }
      push(stack, exp[i]);
    }
  }

  while (!isEmpty(stack)) {
    exp[j++] = pop(stack);
  }
  exp[j] = '\0';
  printf("Postfix expression: %s\n", exp);
}

int main() {
  char exp[] = "a+b*(c^d-e)^(f+g)*h";
  infixToPostfix(exp);
  return 0;
}
