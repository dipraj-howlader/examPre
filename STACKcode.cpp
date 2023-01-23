#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

int stack[MAX_SIZE];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX_SIZE - 1;
}

void push(int value) {
    if (isFull()) {
        cout << "Error: Stack overflow" << endl;
    } else {
        top++;
        stack[top] = value;
    }
}

int pop() {
    if (isEmpty()) {
        cout << "Error: Stack underflow" << endl;
        return -1;
    } else {
        int value = stack[top];
        top--;
        return value;
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;
    return 0;
}
