// 7
#include<iostream> 
using namespace std; 
void sum1(double *sum, int n){ 
    
    *sum += 1.0 / (n*10 + 2);

} 
main(){ 
    double result; 
    sum1(&result, 5); 
    cout<<result<<endl;
} 