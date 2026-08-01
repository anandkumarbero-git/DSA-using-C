//Write a program to implement queue using linked list implement insertion deletion and display operation
#include <stdio.h>
#include <stdlib.h>

struct node { int data; struct node *next; } *front = NULL, *rear = NULL, *t;

void insert(int x){
    t = (struct node*)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    if(rear == NULL) front = rear = t;
    else { rear->next = t; rear = t; }
}

void delete(){
    if(front == NULL) printf("Queue Underflow\n");
    else {
        t = front;
        printf("Deleted: %d\n", front->data);
        front = front->next;
        if(front == NULL) rear = NULL;
        free(t);
    }
}

void display(){
    for(t = front; t; t = t->next)
        printf("%d ", t->data);
    printf("\n");
}

int main(){
    insert(10);
    insert(20);
    insert(30);
    display();
    delete();
    display();
    return 0;
}