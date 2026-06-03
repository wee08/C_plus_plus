#ifndef MYQUEUE_H
#define MYQUEUE_H

#include <iostream>
using namespace std;

struct Information {
    string name;
    int age;
    string birth;
    Information * prev;
    Information * next;
};

struct Person {
    int size;
    Information * front;
    Information * rear;
};

Person * createEmptyQueue() {
    Person * p = new Person();
    p->size  = 0;
    p->front = nullptr;
    p->rear  = nullptr;
    return p;
}

void enQueue(Person * p, string name, int age, string birth) {
    Information * i = new Information();
    i->name  = name;
    i->age   = age;
    i->birth = birth;
    i->next  = nullptr;
    i->prev  = nullptr;

    if (p->rear == nullptr) {
        p->front = i;
        p->rear  = i;
    } else {
        i->prev        = p->rear;
        p->rear->next  = i;
        p->rear        = i;
    }
    p->size++;
}

void deQueue(Person * p) {
    if (p->front == nullptr) {
        cout << "Queue is empty!" << endl;
        return;
    }

    Information * i = p->front;

    if (p->front == p->rear) {
        p->front = nullptr;
        p->rear  = nullptr;
    } else {
        p->front       = p->front->next;
        p->front->prev = nullptr; 
    }

    delete i; 
    p->size--;
}

void display(Person * p) {
    Information * i = p->front;
    while (i != nullptr) {
        cout << i->name  << " ";
        cout << i->age   << " ";
        cout << i->birth << " ";
        cout << endl;
        i = i->next;
    }
}

#endif