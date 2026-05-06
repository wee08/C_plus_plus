#include <iostream>
#include <cmath>
using namespace std;

void  solveEquation(int  a,  int  b,  int  c,  float  *x1,  float  *x2,  float  *delta) {
    *delta = b*b - 4*a*c;
    if( a == 0){
        cout << "Enter a  exepct 0!" << endl;
        return;
    }
    if(*delta < 0){
        cout << "its root is a complex number." << endl;
    }else if(*delta == 0){
        cout << "it has the same root" << endl;
        *x1 = *x2 = -b / 2*a;
        cout << *x1 << " " << *x2 << endl;
    }else {
        cout << "it has 2 roots: " << endl;
        *x1 =(-b - sqrt(*delta))/ 2*a;
        *x2 =(-b + sqrt(*delta))/ 2*a;
        cout    << *x1 << " " << *x2 << endl;
    }
}
int main(){
    float x1, x2;
    float delta;
    int a,b,c;
    cout << "Enter a,b,c: " ;
    cin >> a >> b >> c;
    solveEquation(a,b,c,&x1,&x2,&delta);
}