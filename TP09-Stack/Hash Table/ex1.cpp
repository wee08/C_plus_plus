#include <iostream>
using namespace std;
int hashFunction(int key){
    int index;
    index = key  % 12;

    return index;
}

int stringToNumber(string name){
    int sum= 0;
    for(int i = 0; i<name.size(); i++){
        sum = sum + (int)name[i];
    }
    return sum;
}

int hashFunction2(string name){
    int total = stringToNumber(name);

    int index = total % 120;
    return index;
}

int main(){
    int a[15];
    // string name[120];

    for(int j = 0; j < 15; j++){
        a[j] = 0; 
        // name[j] = ""; 
    }

    a[hashFunction(20)] = 20;
    a[hashFunction(35)] = 35;
    a[hashFunction(90)] = 90;
    a[hashFunction(76)] = 76;
    a[hashFunction(5)] = 5;
    a[hashFunction(1)] = 1;
    a[hashFunction(10)] = 10;

    for(int i = 0; i < 15; i++){
        cout << i << " : " << a[i] << endl;
    }
    // int input = 19;
    // int p = hashFunction(input);
    // if(a[p] == input){
    //     cout << "FOUND IN THE ARRAY!" << endl;
    // }else{
    //     cout <<"NOT FOUND!" << endl;
    // }

    // cout << "Total ASCII for sok: " << stringToNumber("sok") << endl;
    // cout << "Total ASCII for sok: " << stringToNumber("Dara") << endl;
    // cout << "Total ASCII for sok: " << stringToNumber("Sac") << endl;
    // cout << endl;
    // name[hashFunction2("Dara")] = "Dara";
    // name[hashFunction2("Sok")] = "Sok";
    // name[hashFunction2("Sac")] = "Sac";

    // for(int k = 0;  k < 120 ; k++){
    //     cout << "Position " << k;
    //     cout <<": "<< name[k];
    //     cout <<  endl;
    // }

}