#include "MyQueue.h"
using namespace std;
int main(){
    Person * p = createEmptyQueue();
    enQueue(p,"Kimheng",12,"12-2-2005");
    enQueue(p,"Nithya",12,"12-12-2000");
    enQueue(p,"dara",22,"11-12-2000");

    deQueue(p);

    display(p);
}