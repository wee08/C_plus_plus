#ifndef MYQUEUE_H
#define MYQUEUE_H

#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node* next;
};

// Queue class
class Queue
{
private:
    Node* front;
    Node* rear;

public:

    // Constructor
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    // Check if queue is empty
    bool isEmpty()
    {
        return front == NULL;
    }

    // Enqueue function
    void enqueue(int value)
    {
        Node* newNode = new Node;

        newNode->data = value;
        newNode->next = NULL;

        if (isEmpty())
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }

        cout << value << " inserted into queue." << endl;
    }

    // Dequeue function
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }

        Node* temp = front;

        cout << temp->data << " removed from queue." << endl;

        front = front->next;

        if (front == NULL)
        {
            rear = NULL;
        }

        delete temp;
    }

    // Search function
    void search(int value)
    {
        Node* temp = front;
        int position = 1;

        while (temp != NULL)
        {
            if (temp->data == value)
            {
                cout << value
                     << " found at position "
                     << position << endl;
                return;
            }

            temp = temp->next;
            position++;
        }

        cout << value << " not found in queue." << endl;
    }

    // Display function
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }

        Node* temp = front;

        cout << "Queue elements: ";

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

#endif