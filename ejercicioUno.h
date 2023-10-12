#include <stdio.h>
#include <string.h>

#ifndef ejercicioUno
#define ejercicioUno

#define MAX_SIZE 100

typedef struct {
    char data[MAX_SIZE];
    int top;
} Stack;

void initStack(Stack *stack) {
    stack->top = -1;
}

int isEmpty(Stack *stack) {
    return (stack->top == -1);
}

void push(Stack *stack, char c) {
    if (stack->top < MAX_SIZE - 1) {
        stack->data[++stack->top] = c;
    }
}

int validateString(char *str, int n1, int n2){
       if (n1 < 0 || n2 >= strlen(str) || n1 >= n2) {
        return 0;
    }
}

char pop(Stack *stack) {
    if (!isEmpty(stack)) {
        return stack->data[stack->top--];
    }
    return '\0';
}
void reverseSubstring(char *str, int n1, int n2) {
    Stack stack;
    initStack(&stack);
    n1--;
    n2-- ; 

    int len = strlen(str);

     for (int i = n1; i <= n2; i++) {
        push(&stack, str[i]);
    }

    for (int i = n1; i <= n2; i++) {
        str[i] = pop(&stack);
    }
}

#endif 