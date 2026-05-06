#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;
int main(){

    ofstream f0;
    ifstream f1;
    f0.open("myLuckynumber.txt");
    int randNum;
    for( int i=0; i < 150 ; i++){
        randNum = rand();
        f0 << randNum << " ";
    }
    f0.close();
    f1.open("myLuckynumber.txt");
    cout << "All number are:" << endl;
    while(f1 >> randNum){
        cout << randNum << " ";
    }
    f1.close();
    


    return 0;
}