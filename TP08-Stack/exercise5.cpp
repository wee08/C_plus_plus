#include <iostream>
using namespace std;
struct Node{
    int task;
    Node * next;
};
struct Queue{
    Node * front;
    Node * rear;
};
void enQueue(Queue &q,int task){
    Node * n = new Node;
    n -> task = task;
    n -> next = nullptr;
    if(q.front == nullptr){
        q.front = n;
        q.rear = n;
    }else{
        q.rear -> next = n;
        q.rear = n;
    }
};
void deQueue(Queue &q){
    Node * temp = q.front;
    q.front = q.front -> next;
    delete temp;
}
int main(){
    Queue q = {nullptr,nullptr};
    enQueue(q,4);
    enQueue(q,1);
    enQueue(q,3);
    enQueue(q,2);

    char ch;
    while (q.front != nullptr)
    {
        cout << "Activate task now ? (y/n)";
        cin >> ch;
        if(ch == 'y'){
            cout << "Doing task" << q.front->task << " DONE!" << endl;
            deQueue(q);
        }
    }
    
}