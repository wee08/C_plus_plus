#include <iostream>
#define MAXIMUM_SIZE 10
using namespace std;

struct Box {
    int id;
    string name;
    char gender;

    Box * next;
};

struct Queue {
    int size;
    Box * front;
    Box * rear;
};

Queue * createEmptyQueue(){
    Queue * q = new Queue;
    q -> front = nullptr;
    q ->  rear = nullptr;
    q -> size = 0;

    return q;
}

bool isEmpty(Queue * q){
    if(q -> size == 0) return true;
    
    return false;
}

void enqueue(Queue * q, int id, string name, char gender){
    Box * b = new Box;
    b -> id = id;
    b -> name = name;
    b -> gender = gender;
    b -> next = nullptr;

    if(isEmpty(q)){
        q -> front = b;
        q -> rear = b;
    }else{
        q -> rear -> next = b;
        q -> rear = b;
    }

    q -> size++;
}

void dequeue(Queue * q){
    if(isEmpty(q)) {
        cout << "Queue is empty! \n";
        return;
    }

    Box * temp = q -> front;
    q -> front = temp -> next;

    delete temp;
    q -> size --;
}

void displayQueue(Queue * q){
    Box * b = q -> front;
    while (b != nullptr)    
    {
        cout << "\n";   
        
        cout << "ID: " << b -> id << " ";
        cout << "Name: " << b -> name << " ";
        cout << "Gender: " << b -> gender << " ";

        cout << "\n";   
        b = b -> next;
    }
}

void isFull(Queue * q){
    if(q -> size > MAXIMUM_SIZE){
        cout << "The storage is full! \n";
        return;
    }else{
        displayQueue(q);
    }
}

string peekQueue(Queue * q){
    if(!isEmpty(q)){
        return q -> front -> name;
    }else{
        cout << "queue is empty! \n";
        return "";
    }
}

int main(){
    Queue * q = createEmptyQueue();
    enqueue(q, 2,"Dara",'M');
    enqueue(q, 3,"Panha",'M');
    enqueue(q, 4,"Pisey",'F');
    enqueue(q, 5,"Ronan",'M');

    cout << peekQueue(q) << endl;

    displayQueue(q);
    
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);

    displayQueue(q);
}