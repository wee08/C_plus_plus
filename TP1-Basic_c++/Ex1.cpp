#include <iostream>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main(){

    char name[100];
    char gender;
    char major[100];
    int age;
    const int valid_age = 18;
    bool valid_gender = false;


    cout << "Enter your name, gender, major, age: ";
    cin >>  name >> gender >> major >> age;

    char GENDER = toupper(gender);


    if(GENDER == 'M'){
        cout << "Hi, Mr."<<name << "! your age is " << age  << " years old and you learn " << major <<  "!" << endl;
        valid_gender = true;
    }else if(GENDER == 'F'){
        cout << "Hi, Mrs."<<name << "! your age is " << age  << " years old and you learn " << major <<  "!" << endl;
        valid_gender = true;
    }else{
        cout << "INVALID GENDER INPUT" << endl;
        valid_gender = false;
    }

    if(valid_gender){
    if(age >= valid_age) {
        cout << "you can vote" << endl;
    }else{
        cout << "you can not vote" << endl;
    }}

    return 0;
}