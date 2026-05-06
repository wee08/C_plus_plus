#include <iostream>
#include <cctype>
#include <string>
#include <stdlib.h>

using namespace std;

struct Time {
    int hour;
    int minute;
    int seconde;
};

void convertTime(float minute) {
    Time t;
    t.hour = (int) minute / 60;
    t.minute =(int) minute % 60;
    t.seconde = (minute - (int) minute) * 60;

    printf("%dh : %dmn : %ds\n",t.hour, t.minute, t.seconde);
}

int main(){

    float minute;
    cout << "minute :";

    if(!(cin >> minute) || minute < 0){
        cout << "INVALID INPUT" << endl;
        return 0;
    } else{
        convertTime(minute);
    }
   
    // cout <<  minute << endl;
    // cout << (int)  minute << endl;
    // cout << minute - (int) minute<< endl;
    // cout << t.seconde << endl;

    return 0;
}