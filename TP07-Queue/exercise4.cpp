#include <MyQueue.h>
#include <iostream>
using namespace std;
int main(){
    Person * p = createEmptyQueue();
    enQueue(p,"name",12,"12-12-2000");

    display(p);
}