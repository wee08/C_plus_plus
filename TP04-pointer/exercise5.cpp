// 5
#include <iostream>
#include <string>
using namespace std;

void findMaxMin(int  number[ ],   int  *max,   int  *min){
    *max = number[0];
    *min = number[0];

    for(int i = 0; i < 7;  i++){
        if(*max < number[i]) *max = number[i];
        if(*min > number[i]) *min = number[i];
    }
    
    cout << "min: " << *min << endl;
    cout << "max: " << *max << endl;
}

int main(){
    int  number[7];
    int min,max;

    for(int i   = 0; i  < 7; i++){
        cout << "Enter value " << i +1 << ": ";
        cin >> number[i];
    }

    findMaxMin(number,&max,&min);
}