#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

using namespace std;


int MaleTax(int salary){
    float taxToPay;
    bool isHadTax = true;
    if( salary >= 1000 ){
        taxToPay = (salary * 9.5) / 100;
    }else if(salary >= 500 && salary < 1000 ){
        taxToPay = (salary * 7) /100;
    }else if (salary >= 300 && salary < 500){
        taxToPay = (salary * 5) /100;
    }else{
        cout << "No need to pay tax." << endl;
        isHadTax = false;
    }
    if(isHadTax) cout << "you need to pay " << taxToPay <<"$ for tax\n";
}
int FemaleTax(int salary){
    float taxToPay;
    bool isHadTax = true;
    if( salary >= 1000 ){
        taxToPay = (salary * 8) / 100;
    }else if(salary >= 500 && salary < 1000 ){
        taxToPay = (salary * 6.5) /100;
    }else if (salary >= 300 && salary < 500){
        taxToPay = (salary * 3.5) /100;
    }else{
        cout << "No need to pay tax." << endl;
        isHadTax = false;
    }
    if(isHadTax) cout << "you need to pay " << taxToPay <<"$ for tax \n";
}

int main(){

    char name[100];
    char gend;
    int salary;

    cout << "name, gender, salary: ";
    cin >> name >> gend >> salary ;


    char gender = toupper(gend);

    if(gender == 'M'){
        MaleTax(salary);
    }else if(gender == 'F'){
        FemaleTax(salary);
    }else{
        cout <<"INVALID GENDER INPUT" << endl;
    }

    return 0;
}
