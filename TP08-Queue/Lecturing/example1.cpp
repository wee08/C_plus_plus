#include <iostream>
using namespace std;
struct Node {
    int data;
    Node * next;
};
struct queue {
    int size;
    Node * front;
    Node * rear;
};
queue * createEmptyQueue(){
    queue * q = new queue;

    q -> front = nullptr;
    q -> rear = nullptr;
    q -> size = 0;
    
    return q;

}
void endqueue (queue * q, int data){
    Node * n = q -> front;
    n -> data = data;
    n -> next = nullptr;
    if(q -> size == 0){
        q -> front = n;
        q -> rear = n;
    }else{
        q -> 
    }

    q -> size ++;
    
}
int main(){


}

// endqueue : add element to end of queue
// dequeue : remove element from front of queue
// isEmpty : check if queue is empty
// isFull : Check if queue is full
// peek : get the value of the front of queue without removing it