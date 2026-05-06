#include <iostream>
#include <string>

using namespace std;

int summatation(){
    int inp;
    cin >> inp;
    int res = 0;
    if(inp == -1) return 0;
    res += inp;
    return res += summatation();    
}

int main(){
    int res = summatation();
    cout << res << endl;   
}