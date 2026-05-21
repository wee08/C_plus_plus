#include<iostream>
using namespace std;

struct Node{
    string id;
    Node *next;
};

struct Queue{
    Node *front;
    Node *rear;
};

void createQueue(Queue &q){
    q.front = NULL;
    q.rear = NULL;
}

void enqueue(Queue &q,string x){
    Node *p = new Node;
    p->id = x;
    p->next = NULL;

    if(q.front == NULL)
        q.front = q.rear = p;
    else{
        q.rear->next = p;
        q.rear = p;
    }
}

void display(Queue q){
    Node *p = q.front;
    while(p != NULL){
        cout << p->id << " ";
        p = p->next;
    }
}

int main(){
    Queue q;

    createQueue(q);

    enqueue(q,"OP007");
    enqueue(q,"OP005");
    enqueue(q,"OP020");
    enqueue(q,"OP111");
    enqueue(q,"OP777");

    display(q);
}
