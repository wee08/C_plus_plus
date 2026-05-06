#include <iostream>
using namespace std;
int main(){
    int n1 = 7, n2 = 3, n3 =15;
    int *p1, *p2, *p3;

    p1 = &n1;
    p2 = &n2;
    p3 = &n3;

    cout << "The value is " << n1 << "and address of value is " << p1 << endl;
    cout << "The value is " << n2 << "and address of value is " << p2 << endl;
    cout << "The value is " << n3 << "and address of value is " << p3 << endl;

    *p3 = n1 + n2;
    cout<< "The sum of n1 and n2 is " << *p3 << endl;
}