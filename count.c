//Write the program to count the number of times an item is present in a linked list
#include <stdio.h>
#include <stdlib.h>

struct node { int data; struct node *next; };

int main() {
    struct node *head=NULL,*t,*n;
    int a[]={10,20,30,20,40,20}, i, key=20, count=0;

    for(i=0;i<6;i++){
        n=(struct node*)malloc(sizeof(struct node));
        n->data=a[i]; n->next=NULL;
        if(head==NULL) head=t=n;
        else { t->next=n; t=n; }
    }

    for(t=head;t;t=t->next)
        if(t->data==key) count++;

    printf("Count = %d", count);
    return 0;
}