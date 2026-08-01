//Write a program to implement stack using linked list implement push pop and display operation
#include <stdio.h>
#include <stdlib.h>

struct node { int data; struct node *next; } *top = NULL, *t;

void push(int x){
    t = (struct node*)malloc(sizeof(struct node));
    t->data = x;
    t->next = top;
    top = t;
}

void pop(){
    if(top == NULL) printf("Stack Underflow\n");
    else {
        t = top;
        printf("Deleted: %d\n", top->data);
        top = top->next;
        free(t);
    }
}

void display(){
    for(t = top; t; t = t->next)
        printf("%d ", t->data);
    printf("\n");
}

int main(){
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}