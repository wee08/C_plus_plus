#include <iostream>
using namespace std;

struct Element {
    string first_name;
    string sur_name;
    int age;
    string date_of_birth;
    string place_of_birth;
    string job_status;
    int height;

    Element * prev;
    Element * next;
};
struct Person{
    int size;

    Element * front;
    Element * back;
};