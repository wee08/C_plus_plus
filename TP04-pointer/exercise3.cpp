#include <iostream> 
using namespace std;

void Exchange(float *a, float *b){

    int temp;
    temp = *a;
    *a = *b; 
    *b = temp;

    cout << *a << " "  << *b;
}

int main(){
    float a,b;
    cout << "enter a,b: ";
    cin >> a >> b;
    cout << a << " " << b << endl;
    Exchange(&a,&b);
}