#include <iostream>
#include <string>
#include <stdlib.h>
#include <cctype>

using namespace std;

int Summatation(int inp_n){

    int sum = 0;

    if(inp_n < 50){
        cout << "ENTER VALUE GREATER THAN 50!" << endl;
        return -1;
    }

    for (int stp = 0; stp < inp_n; stp++){
        if(stp == 10 || stp == 30) continue;
        sum+=stp;
    }

    return sum;
    

}

int main(){
    int inp_n;
    cout << "ENTER: ";
    cin >> inp_n;
    int result = Summatation(inp_n);
    if(result != -1){
        cout << result << endl;
    }
    return 0;
}