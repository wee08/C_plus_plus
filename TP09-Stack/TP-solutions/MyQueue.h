#ifndef MYQUEUE_H
#define MYQUEUE_H

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
class Queue {
    private:
        Node * front;
        Node * back;
    public:
        void createNewQueue(){
            front = nullptr;
            back = nullptr;
        }
        bool isEmpty(){
            if(front == nullptr) return true;

            return false;
        }
        void enQueue(int data){
            Node * n = new Node;

            n -> data = data;
            n -> next = nullptr;

            if(isEmpty()){
                front = n;
                back = n;
            }else{
                back -> next = n;
                back = n;
            }
        }
        void deQueue(){
            if(isEmpty()){
                cout << "Queue is empty!" << endl;
                return;
            }

            Node * t = front;
            front = front -> next;            
            if(front == nullptr){
                back = nullptr;
            }

            delete t;
        }
        void search(int data){
            Node * n = front;
            bool isFound = false;
            if(isEmpty()){
                cout << "Queue is empty!" << endl;
                return;
            }
            while(n != nullptr){
                if(data == n -> data) {
                    cout << "Found: " << data << endl;
                    isFound = true;
                    return;
                }
                n = n -> next;
            }
            if(!isFound){
                cout << "Data not found!" << endl;
                return;
            }
                
        }
        void display(){
            Node * n = front;
            while(n != nullptr){
                cout << n -> data << endl;

                n = n -> next;
            }
        }
};

#endif