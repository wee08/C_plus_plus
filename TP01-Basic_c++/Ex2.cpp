#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

using namespace std;
int main(){

    char ch;
    cout << "Enter charater: ";
    cin >> ch;
    int ascii = (int)ch;

    const int isLowercaseCh = (ascii >= 65 || ascii <= 90) ;
    const int isUppercaseCh = (ascii >= 97 || ascii <= 122);
    // const int setIsVowel = ascii = {97 || 101 || 105 || 111 || 117};
    const int isLowercaseVowel = (ascii == 97 || ascii ==  101 || ascii== 105 || ascii ==  111 || ascii == 117 ); 
    const int isUppercaseVowel = (ascii == 65 || ascii ==  69 || ascii== 73 || ascii ==  79 || ascii == 85 ); 
    if(isLowercaseCh || isUppercaseCh ){
        if(isLowercaseVowel || isUppercaseVowel){
            cout << ch << " is a vowel\n";
        }else{
            cout << ch << " is a consonant\n";
        }
    }else {
        cout << "INVALID Chataracter" << endl;
    }



    return 0;
}