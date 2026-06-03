#include<iostream>
using namespace std;

struct Node{
    int task;
    Node *next;
};

struct Queue{
    Node *front,*rear;
};

void enqueue(Queue &q,int x){
    Node *p=new Node;
    p->task=x;
    p->next=NULL;

    if(q.front==NULL)
        q.front=q.rear=p;
    else{
        q.rear->next=p;
        q.rear=p;
    }
}

void dequeue(Queue &q){
    Node *p=q.front;
    q.front=q.front->next;
    delete p;
}

int main(){
    Queue q={NULL,NULL};

    enqueue(q,4);
    enqueue(q,1);
    enqueue(q,3);
    enqueue(q,2);

    char ch;

    while(q.front!=NULL){
        cout<<"Activate task now? (y/n): ";
        cin>>ch;

        if(ch=='y'){
            cout<<"Doing task "<<q.front->task<<" DONE!\n";
            dequeue(q);
        }
    }
}
