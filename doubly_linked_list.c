// Write a program to implement doubly linked list showing all the operation like creation display insertion deletion and searching
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *prev,*next;
} *head=NULL,*t,*n;

void create(int x){
    n=malloc(sizeof(struct node));
    n->data=x; n->next=NULL;
    if(!head){ n->prev=NULL; head=n; }
    else{
        t=head;
        while(t->next) t=t->next;
        t->next=n; n->prev=t;
    }
}

void display(){
    for(t=head;t;t=t->next) printf("%d ",t->data);
    printf("\n");
}

void insert(int x){
    n=malloc(sizeof(struct node));
    n->data=x;
    n->prev=NULL;
    n->next=head;
    if(head) head->prev=n;
    head=n;
}

void del(){
    if(head){
        t=head;
        head=head->next;
        if(head) head->prev=NULL;
        free(t);
    }
}

void search(int x){
    for(t=head;t;t=t->next)
        if(t->data==x){ printf("Found\n"); return; }
    printf("Not Found\n");
}

int main(){
    create(10); create(20); create(30);
    display();
    insert(5);
    display();
    del();
    display();
    search(20);
    return 0;
}