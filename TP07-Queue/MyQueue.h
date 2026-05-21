
#ifndef MYQUEUE_H
#define MYQUEUE_H

#include <iostream>
using namespace std;
struct Information{
    string name;
    int age;
    string birth;
    int height;
    Information * prev;
    Information * next;
};
struct Person {
    int size;
    Information * front;
    Information * rear;
};
Person * createEmptyQueue(){
    Person * p = new Person();                                                      
    p -> size = 0;
    p -> front = nullptr;
    p -> rear = nullptr;

    return p;
}
void enQueue(Person * p,string name, int age,string birth){
    Information * i = p -> front;
    i -> name = name;
    i -> age = age;
    i -> birth = birth;

    i -> next = p -> front;
    if(i == nullptr){
        p -> front = i;  
    }else{
        p -> rear -> next = i;
    }
    p -> rear = i;
    p -> size++;

}
void deQueue(Person * p, string name, int age, string birth){
    Information * i = p -> rear;
    i -> name = name;
    i -> age = age;
    i -> birth = birth;

    i -> prev = p -> rear;
    if(i == nullptr){
        p -> rear--;
    }else {
        p -> front -> prev = i;
    }
    p -> rear = i;
    p -> size--;
}
void display(Person * p){
    Information * i = p -> front;
    while (i != nullptr)
    {
        cout << i -> name;

        i = i -> next;
    }
    cout << endl;   
    
}
