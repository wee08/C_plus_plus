#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int findMin(int a[], int n){
    if(n == 1){
        return a[0];
    } 
    
    int min = findMin(a, n -1);
    if(min < a[n - 1]){
        return  min;
    }else {
        return a[n - 1];
    }

}

int main(){

    int size ;
    cout << "Enter size of arrays: ";
    cin >> size;
    if(size <= 0)cout << "INVALID SIDE" << endl;
    int a[size] = {};
    cout << "Enter arrays value" << endl;
    for(int i = 0; i < size; i++){
        cin >> a[i];
    }
    int min = findMin(a,size);
    cout << "Min: "<< min ;
    return 0;
}