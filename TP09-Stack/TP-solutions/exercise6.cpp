#include <iostream>
#include <string>
using namespace std;
struct Node{
    string name;
    char gender;
    string phoneNumber;

    Node * next;
};
struct Queue{
    int size;
    Node * front;
    Node * rear;
};
void enqueue(Queue &q,string name, char gender, string phoneNumber){
    Node * n = new Node;
    n -> name = name;
    n -> gender = gender;
    n -> phoneNumber = phoneNumber;
    n -> next = nullptr;

    if(q.front == nullptr){
        q.front = n;
        q.rear = n;
    }else{
        q.rear -> next = n;
        q.rear = n;
    }
    q.size++;
}
void dequeue(Queue &q){
    Node * temp =  q.front;
    q.front = q.front -> next ;
    if(q.size == 0) {
        cout << "Queue is empty!" << endl;
        return;
    }
    q.size--;
    delete temp;
}
void display(Queue &q){
    Node * n = q.front;
    while(n != nullptr){
        cout << n -> name << "  " << n -> gender << "   " << n -> phoneNumber << endl;
        n = n -> next;
    }
}
int main(){
    Queue q = {0,nullptr,nullptr};

    int op;
    string name;
    char temp;
    char gender;
    string phoneNumber;
    while(true){
        cout << "1. Add customer to the queue" << endl;
        cout << "2. Remove a customer from the queue"<< endl;
        cout << "3. Display queue" << endl;
        cout << "4. Exit the promgram" << endl;  
        cin >> op;
        if(op == 1){
            cout << "Enter customer's name: ";
            cin >> name;
            cout << "Enter customer's gender: ";
            cin >> temp;
            cout << "Enter customer's phone number: ";
            cin >> phoneNumber;
            gender = toupper(temp);
            
            enqueue(q,name,gender,phoneNumber);
        }else if(op == 2){
            dequeue(q);
        }else if(op == 3){
            display(q);
        }else if(op == 4){
            break;
        }else{
            cout << "INVALID COMMAND!" << endl;
        }
    }
    
}