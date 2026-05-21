#include <iostream>
using namespace std;
struct Person_information{
    string name;
    int age;
    string date_of_birth;
    int height;
    string job_status;
    string phone_number;

    Person_information * next;
};
struct Person {
    int size;
    Person_information * front;
    Person_information * rear;
};
Person * createEmptyQueue(){
    Person * p = new Person();                                                      
    p -> size = 0;
    p -> front = nullptr;
    p -> rear = nullptr;

    return p;
}

int main(){}