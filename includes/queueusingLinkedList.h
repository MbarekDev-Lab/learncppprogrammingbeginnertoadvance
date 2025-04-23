#pragma once
#include <iostream>
using namespace std;


// Define the structure of a Node
struct Node {
    int data;
    Node* next;

    // Constructor for convenience
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Define the Queue class
class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = nullptr;
    }

    // Enqueue operation
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (rear == nullptr) {  // Queue is empty
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    // Dequeue operation
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == nullptr)  // If queue becomes empty
            rear = nullptr;

        cout << "Dequeued: " << temp->data << endl;
        delete temp;
    }

    // Display the queue
    void display() {
        if (front == nullptr) {
            cout << "Queue is empty\n";
            return;
        }
        Node* temp = front;
        cout << "Queue: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Destructor to free memory
    ~Queue() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }
};
