#include <stdio.h>
#include <stdlib.h>

struct node { int data; struct node *next; };

int main() {
    struct node *head=NULL,*t,*n;
    int a[]={10,20,30}, i;

    for(i=0;i<3;i++){
        n=(struct node*)malloc(sizeof(struct node));
        n->data=a[i]; n->next=NULL;
        if(head==NULL) head=t=n;
        else { t->next=n; t=n; }
    }

    printf("Before: ");
    for(t=head;t;t=t->next) printf("%d ",t->data);

    for(t=head;t;t=t->next) t->data += 10;

    printf("\nAfter: ");
    for(t=head;t;t=t->next) printf("%d ",t->data);

    return 0;
}