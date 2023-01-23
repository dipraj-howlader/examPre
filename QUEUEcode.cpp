#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

bool isEmpty() {
    return front == -1 && rear == -1;
}

bool isFull() {
    return rear == MAX_SIZE - 1;
}

void enqueue(int value) {
    if (isFull()) {
        cout << "Error: Queue overflow" << endl;
    } else {
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }
        queue[rear] = value;
    }
}

int dequeue() {
    if (isEmpty()) {
        cout << "Error: Queue underflow" << endl;
        return -1;
    } else {
        int value = queue[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        return value;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    cout << dequeue() << endl;
    cout << dequeue() << endl;
    cout << dequeue() << endl;
    return 0;
}
