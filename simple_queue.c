
#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Maximum size of the queue

int queue[MAX];
int front = -1;
int rear = -1;

// Function to check if the queue is full
int isFull() {
    return rear == MAX - 1;
}

// Function to check if the queue is empty
int isEmpty() {
    return front == -1 || front > rear;
}

// Function to insert (enqueue) an element into the queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow! Cannot insert %d.\n", value);
        return;
    }
    if (front == -1) {
        front = 0; // Initialize front to 0 when the first element is inserted
    }
    rear++;
    queue[rear] = value;
    printf("Successfully inserted %d into the queue.\n", value);
}

// Function to delete (dequeue) an element from the queue
void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow! Nothing to delete.\n");
        return;
    }
    printf("Successfully deleted %d from the queue.\n", queue[front]);
    front++;
    
    // Reset the queue pointers once all elements are dequeued
    if (front > rear) {
        front = rear = -1;
    }
}

// Function to display the elements of the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;
    
    printf("=== Simple Queue Implementation in C ===\n");
    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Insert (Enqueue)\n");
        printf("2. Delete (Dequeue)\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Exiting program.\n");
            break;
        }
        
        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                if (scanf("%d", &value) != 1) {
                    printf("Invalid integer value!\n");
                    // Clear input buffer
                    while (getchar() != '\n');
                    break;
                }
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice! Please select an option between 1 and 4.\n");
        }
    }
    return 0;
}
