#include "MyQueue.h"

int main()
{
    Queue q;

    // Enqueue elements
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    // Display queue
    q.display();

    // Search element
    q.search(30);
    q.search(50);

    // Dequeue elements
    q.dequeue();
    q.display();

    q.dequeue();
    q.display();

    return 0;
}
