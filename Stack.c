// Stack Implementation in C
#include <stdio.h>

#define SIZE 3 // Define the size of the stack
int arr[SIZE]; // Stack array
int top = -1;  // Top pointer

// Function to check if the stack is full
int overflow() {
    return (top == SIZE - 1);
}

// Function to check if the stack is empty
int underflow() {
    return (top == -1);
}

// Function to push an element onto the stack
void push(int x) {
    if (overflow()) {
        printf("\nStack Overflow");
        printf("\nElement %d cannot be inserted", x);
        return;
    }
    arr[++top] = x; // Increment top and insert the element
}

// Function to pop an element from the stack
void pop() {
    if (underflow()) {
        printf("\nStack Underflow");
        return;
    }
    printf("\n%d element popped", arr[top--]);
}

// Function to print all elements in the stack
void print() {
    if (underflow()) {
        printf("\nStack Underflow");
        return;
    }
    printf("\nStack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to display the top element of the stack
void topelement() {
    if (underflow()) {
        printf("\nStack Underflow");
    } else {
        printf("\n%d is the top element", arr[top]);
    }
}

// Function to display the menu options
void menu() {
    printf("\nMENU\n*********");
    printf("\n1. Push\n2. Pop\n3. Print\n4. Top Element");
    printf("\n5. Check Overflow\n6. Check Underflow\n7. Exit");
}

// Main function
int main() {
    while (1) {
        menu();
        int choice, r, ele;
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter the element to insert: ");
                scanf("%d", &ele);
                push(ele);
                break;

            case 2:
                pop();
                break;

            case 3:
                print();
                break;

            case 4:
                topelement();
                break;

            case 5:
                r = overflow();
                if (r == 1) {
                    printf("\nStack Overflow");
                } else {
                    printf("\nNo Overflow");
                }
                break;

            case 6:
                r = underflow();
                if (r == 1) {
                    printf("\nStack Underflow");
                } else {
                    printf("\nNo Underflow");
                }
                break;

            case 7:
                return 0;

            default:
                printf("\nInvalid Input");
                break;
        }
    }
    return 0;
}
