#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* front = NULL;
struct node* rear = NULL;

void enqueue(int x) {
    struct node* nn = (struct node*)malloc(sizeof(struct node));
    nn->data = x;
    nn->next = NULL;

    if (rear == NULL) {
        front = nn;
        rear = nn;
    } else {
        rear->next = nn;
        rear = nn;
    }
}

void dequeue() {
    if (front == NULL) {
        printf("Queue is empty\n");
    } else {
        struct node* temp = front;
        front = front->next;
        free(temp);
    }
}

void print() {
    if (front == NULL) {
        printf("Queue is empty\n");
    } else {
        struct node* r = front;
        printf("Queue elements are:\n");
        while (r != NULL) {
            printf("%d ", r->data);
            r = r->next;
        }
        printf("\n");
    }
}

int main() {
    enqueue(9);
    enqueue(10);
    dequeue();
    enqueue(8);
    enqueue(990);
    dequeue();
    print();
    return 0;
}
