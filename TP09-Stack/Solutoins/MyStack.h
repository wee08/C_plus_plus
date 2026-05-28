#ifndef MYSTACK_H
#define MYSTACK_H

#include <iostream>
using namespace std;
struct Node{
    int data;
    Node * next;
};
struct Stack{
    int size;
    Node * top;
};
bool isStackExisted = true;
Stack *createStack(){
    Stack * s = new Stack();

    s -> size = 0;
    s -> top = nullptr;

    return s;
};
bool isEmpty(Stack * s){
    if(s -> size == 0) return true;
    return false; 
}
void push(Stack * s, int data){
    Node * n = new Node;
    n -> data = data;
    n -> next = s -> top;
    s -> top = n;
    s -> size++;
}
void pop(Stack * s){
    Node * temp = s -> top;
    if(isEmpty(s)){
        cout << "Stack is empty!" << endl;
        return;
    }
    // cout << temp -> data << "Poped" << endl;
    s -> top = s -> top -> next;
    s -> size--;

    delete temp;

}
void removeAllData(Stack * s){
    while(s ->top != nullptr){
        pop(s);
    }
}

void deleteStack(Stack *s){
        removeAllData(s);
        delete s;
        s = nullptr;
        cout << "stack is has been deleting!" << endl;
}

void removeAllEvensData(Stack *s){
    Node * temp = s -> top;
    while(temp != nullptr){
        if(temp -> data % 2 == 0) {
            pop(s);
        }
        temp = temp -> next;
    }
}

void display(Stack *s){
    Node * n = s -> top;
    if(isEmpty(s)){
        cout << "Stack is empty!" << endl;
        return;
    }
    // if(!isStackExisted) cout << "No stack exist!" << endl;

    while(n != nullptr){
        cout << n -> data << endl; 
        n = n -> next;
    }
}

#endif