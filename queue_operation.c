#include <stdio.h>
#define MAX 5

int q[MAX], front = -1, rear = -1;

void insert(int x) {
    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else {
        if (front == -1) front = 0;
        q[++rear] = x;
    }
}

void delete() {
    if (front == -1 || front > rear)
        printf("Queue Underflow\n");
    else
        printf("Deleted: %d\n", q[front++]);
}

void display() {
    int i;
    for (i = front; i <= rear; i++)
        printf("%d ", q[i]);
    printf("\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);

    display();

    delete();
    delete();

    display();

    return 0;
}