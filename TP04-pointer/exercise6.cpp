// 6
#include <iostream>
using namespace std;
int main(){
    float num_list[7];
    float *p_numList;
    float *s_numList;
    int sum = 0;
    int mul = 1;
    for(int i = 0; i< 7;i++){
        cout << "Enter " << i + 1 << ": " ;
        cin >> num_list[i];
    }
    
    for(int i = 0; i < 7; i ++){
        *p_numList = num_list[i];
        *s_numList = *p_numList;
        cout << *s_numList << endl;

        sum+= *s_numList;
        mul*= *s_numList;
    }

    cout  << "sum: " << sum << endl;
    cout  << "mul: " << mul << endl;
}