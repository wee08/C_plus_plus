#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int findSum(int a[], int size){
    
    if(size == 0) return 0;    
    return a[size - 1] + findSum(a, size - 1);
}


int main(){
    int size;
    cout << "ARRAY SIZE: ";
    if(size <= 0) cout << "INVALID SIDE...!" << endl;
    cin  >> size;
    int a[size] = {};
    cout << "ARRAY VALUE: ";
    for(int i = 0; i < size; i++){
        cin >> a[i];
    }
    int res = findSum(a,size);
    cout << "sum: " << res << endl;
}