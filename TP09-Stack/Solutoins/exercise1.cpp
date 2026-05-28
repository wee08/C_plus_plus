#include <iostream>
using namespace std;

const int SIZE = 3;
int stack[SIZE];
int top = -1;
bool isEmpty(){
    if(top == -1) return true;
    
    return false;
};
bool isFull(){
    if(top == SIZE) return true;
    return false;
};
void push(int data){
    if(!isFull()){
        top++;
        // arr-> idx, 
            stack[top] = data;
    }else {
        cout << "Storage is Full!" << endl;
        return;
    }

};
void pop(){
    if(!isEmpty()){
        top--;
        cout << "Data has remvoe from the array! " << stack[top + 1] << endl;
    }
};
void display(){
    for(int i =0; i <= top; i++){
        cout << stack[i] << endl;

    }
};
int main(){
    push(12);
    push(12);
    push(12);

    pop();

    display();
}