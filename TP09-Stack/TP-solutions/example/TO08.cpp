#include<iostream>
using namespace std;
struct Person{
    int id;
    string name;
    int age;
    char sex;
    string phone;
    string address;
    string email;
};

struct Node{
    Person info;
    Node *next;
};

struct Queue{
    Node *front;
    Node *rear;
};
