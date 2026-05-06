#include <iostream>
#include <fstream>
using namespace std;
int main(){
    // create and open a txt file
    ofstream f1("ex1.txt");
    // write to the file
    f1 << "File can be trciky, but fun enough!" ;
    // close the file
    f1.close();

    // create text string used for ouput
    string text;
    // read from the text file
    ifstream f2("ex1.txt");
    // use loop together with the getline() function to read the file line by line
    while(getline(f2,text)){
        // ouput the text from the file
        cout << text ;
    }
    // close
    f2.close();
}