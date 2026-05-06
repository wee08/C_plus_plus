#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void displayStar(int n){
    if (n == 0) return;
    cout << " * "; 
    displayStar(n - 1);
}

void displayNumbers(int n){
    if (n ==0) return;
    cout << n << " ";
    displayNumbers(n - 1);
}

int main(){
    while (true)
    {
        cout << endl;
        cout << "(1) Display star n times" << endl;
        cout << "(2) Display from n to 1" << endl;
        cout << "(3) Exit" << endl;
        int ops;
        cin >> ops;
        int n;

        if(ops == 1){
            cout << "n: ";
             cin >> n;
            displayStar(n);
        }else if (ops == 2){
            cout << "n: ";
            cin >> n;
            displayNumbers(n);
        }else if(ops == 3){
            break;
        }else{
            cout << "INVALID" << endl;
        }
    }
    
    return 0 ;
}