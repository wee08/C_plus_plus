#include <iostream>
using namespace std;
struct Node{
    string id;
    Node * next;
};

struct Operation {
    int size;
    Node * front;
    Node * back;
};
// 2 -> [1][] -> [][] -> [][]
void createQueue(Operation &op){
    op.size = 0;
    op.front = nullptr;
    op.back = nullptr;
}
void enQueue(Operation &op, string id){
    Node * n = new Node;
    n -> id = id;
    n -> next = nullptr;
    
    if(op.size == 0){
        op.front = n;
        op.back = n;
    }else{
        op.back -> next = n; // contains previous data
        op.back = n; // contains new data
    }
    op.size++;
}
void display(Operation op){
    Node * n = op.front;
    while(n != nullptr){
        cout << n -> id;
        n = n -> next;
        cout << endl;
    }

}
int main(){
    Operation op;
    createQueue(op);

    enQueue(op, "OP007");
    enQueue(op, "OP005");
    enQueue(op, "OP020");
    enQueue(op, "OP111");
    enQueue(op, "OP777");

    display(op);

}