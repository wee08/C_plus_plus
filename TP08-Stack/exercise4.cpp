#include "MyQueue.h"
int main(){
    Queue * q;
    q->search(123);

    q->enQueue(123);
    q->enQueue(202);
    q->enQueue(12);
    q->enQueue(900);

    
    q->search(123);
    q->deQueue();
    q->search(123);


    q->display();
}