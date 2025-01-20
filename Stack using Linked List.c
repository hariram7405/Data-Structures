//Stack using Linked List
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* top = NULL;

void push(int x) {
    struct node* nn = (struct node*)malloc(sizeof(struct node));
    nn->data = x;
    if (!top) {
        top = nn;
    } else {
        nn->next = top;
        top = nn;
    }
}

void pop() {
    if (!top) {
        printf("Stack is empty\n");
    } else {
        struct node* temp = top;
        top = top->next;
        printf("Popped element: %d\n", temp->data);
        free(temp);
    }
}

void print() {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        struct node* current = top;
        printf("Stack elements are:\n");
        while (current != NULL) {
            printf("%d ", current->data);
            current = current->next;
        }
        printf("\n");
    }
}

int main() {
    push(9);
    push(10);
    pop();
    push(8);
    push(990);
    pop();
    print();
    return 0;
}
