#include <iostream>
using namespace std;

struct Node{
    int data;
    Node * next;
};
struct List{
    int size;
    Node * front;
    Node * back;
};
List * createEmptyList(){
    List * l;
    l->size=0;
    l->front=nullptr;
    l->back=nullptr;

    return l;
}
void addEnd(List * l,int data){
    Node * n = l->back;
    l->back = data;
}
int main(){}