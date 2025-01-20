#include <stdio.h>
#define size 4
int arr[size];
int front = -1;
int rear = -1;
int currsize = 0;

void enqueue(int x){
    if(currsize == size){
        printf("\nQueue Overflow");
    }
    else{
        if(front == -1){
            front = 0;
            rear = 0;
        }
        else{
            rear = (rear + 1) % size;
        }
        arr[rear] = x;
        currsize++;
    }
}

void dequeue(){
    if(currsize == 0){
        printf("\nQueue Underflow");
    }
    else{
        int k = arr[front];
        printf("\nDequeue element is: %d", k);
        if(currsize == 1){
            front = -1;
            rear = -1;
        }
        else{
            front = (front + 1) % size;
        }
        currsize--;
    }
}

void print(){
    if(currsize == 0){
        printf("\nQueue is empty");
    }
    else{
        printf("\nQueue elements are: ");
        int i = front;
        for(int count = 0; count < currsize; count++){
            printf("%d ", arr[i]);
            i = (i + 1) % size; // Circular behavior
        }
        printf("\n");
    }
}

int main(){
    enqueue(7);
    print();
    enqueue(8);
    print();
    dequeue();
    print();
    enqueue(9);
    print();
    enqueue(98);
    print();
    enqueue(39);
    print();
    enqueue(49);
    print();
}
