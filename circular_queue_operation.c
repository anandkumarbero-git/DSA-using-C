#include <stdio.h>
#define MAX 5

int q[MAX], front = -1, rear = -1;

void insert(int x) {
    if ((rear + 1) % MAX == front)
        printf("Queue Overflow\n");
    else {
        if (front == -1) front = 0;
        rear = (rear + 1) % MAX;
        q[rear] = x;
    }
}

void delete() {
    if (front == -1)
        printf("Queue Underflow\n");
    else {
        printf("Deleted: %d\n", q[front]);
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX;
    }
}

void display() {
    int i = front;
    if (front == -1) {
        printf("Queue Empty\n");
        return;
    }
    while (1) {
        printf("%d ", q[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);

    display();

    delete();

    display();

    return 0;
}