#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
} Node;

struct Stack {
  struct Node *top;
};

void push(struct Stack *stack, int data)
 
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = stack->top;
  stack->top = newNode;
  printf("PUSHED %d\n",data);
}

int pop(struct Stack *stack)
 
{
  if (stack->top == NULL) {
    printf("Stack is empty\n");
    return -1;
  }

  struct Node *temp = stack->top;
  int poppedData = temp->data;
  stack->top = temp->next;
  free(temp);
  return poppedData;
}

int main() {
  struct Stack stack;
  stack.top = NULL;

  push(&stack, 10);
  push(&stack, 20);
  push(&stack, 30);

  printf("Popped: %d\n", pop(&stack));
  printf("Popped: %d\n", pop(&stack));
  printf("Popped: %d\n", pop(&stack));

  if (stack.top == NULL) {
    printf("Stack is empty\n");
  } else {
    printf("Stack is not empty\n");
  }

  return 0;
}
