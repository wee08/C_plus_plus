#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>

using namespace std;

int power(int m, int n){
    int result = 1;
    if (m == 1 || n == 0) return result = 1;
    return m * power(m,n-1);
}

int sumSquare(int n){
    if(n==0) return 0;
    return n*n + sumSquare(n - 1);

}

int sumDigit(int n){
    //  sumDigit(100) -> 100 % 10 = 0, 10
    int sum = 0;
    if(n == 0) return 0;
    return (n % 10) + sumDigit(n /= 10);
}

int main(){
    int m,n;
    cin >> m >> n;
    int result ;
    result = power(m,n);
    cout << result << endl;

    result = sumSquare(n);
    cout << result << endl;

    result = sumDigit(123);
    cout << result << endl;
    return 0;
}