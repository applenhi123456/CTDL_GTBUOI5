9.#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int data) {
    if (rear == MAX - 1) {
        printf("Hang doi da day.\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = data;
    printf("%d da them vao hang doi.\n", data);
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Hang doi rong.\n");
        return;
    }
    printf("%d da xoa khoi hang doi.\n", queue[front]);
    front++;
}

void display() {
    if (front == -1 || front > rear) {
        printf("Hang doi rong.\n");
        return;
    }
    printf("Hien thi hang doi: ");
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

int main() {
    enqueue(41);
    enqueue(23);
    enqueue(4);
    enqueue(14);
    enqueue(56);
    enqueue(1);
    display();

    enqueue(55);
    dequeue();
    display();

    return 0;
}
