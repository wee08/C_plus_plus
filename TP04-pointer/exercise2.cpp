#include <iostream>
using namespace std;
int main(){
    int ip_n;
    cout << "Enter n: " ;
    cin >> ip_n;

    int *address_n;
    address_n = &ip_n;

    *address_n+= 7;

    cout << *address_n << " + 7 = " << *address_n << endl;


}