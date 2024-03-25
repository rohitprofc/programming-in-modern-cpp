// Postfix Expression Evaluation using stack in C
#include <stdio.h>

typedef struct stack {
    char data[100];
    int top;
} stack;

int empty(stack *p) { 

    return (p->top == -1);
}

int top(stack *p) { 
    
    return p->data[p->top];
}

void push(stack *p, char x) { 
    
    p->data[++(p->top)] = x;
}

void pop(stack *p) { 
    
    if (!empty(p)) {
        (p->top) = (p->top)-1;
    }
}

int main() { 
    
    stack s;
    s.top = -1;

    // POSTFIX EXPRESSION: 1 2 3 * + 4 -
    char postfix[] = {'1', '2', '3', '*', '+', '4', '-'};

    for(int i = 0; i < 7; i++) {

        char ch = postfix[i];

        if(isdigit(ch)) {
            push(&s, ch - '0');
        }
        else {
            int op2 = top(&s); pop(&s);
            int op1 = top(&s); pop(&s);

            switch (ch) {
            case '+': push(&s, op1 + op2); break;
            case '-': push(&s, op1 - op2); break;
            case '*': push(&s, op1 * op2); break;
            case '/': push(&s, op1 / op2); break;
            
            default: break;
            }
        }
    }

    printf("Evaluation: %d\n", top(&s));

    return 0;
}