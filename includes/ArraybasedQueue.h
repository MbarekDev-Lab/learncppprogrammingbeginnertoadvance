#pragma once
#include <iostream>
using namespace std;

class Queue {
    int* arr;
    int front, rear, capacity;

public:
    Queue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = 0;
        rear = -1;
    }

    void enqueue(int x) {
        if (rear == capacity - 1) {
            cout << "Queue Overflow\n";
            return;
        }
        arr[++rear] = x;
        cout << "Inserted: " << x << endl;
    }

    void dequeue() {
        if (front > rear) {
            cout << "Queue Underflow\n";
            return;
        }
        cout << "Deleted: " << arr[front++] << endl;
    }

    void display() {
        if (front > rear) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue Elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Queue() {
        delete[] arr;
    }
};

