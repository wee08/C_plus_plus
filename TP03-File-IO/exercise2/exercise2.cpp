// 2
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
struct Student {
    string name;
    int age;
    string gmail;
};
void Acess_file(){
    Student s[100];
    ifstream readfile("data.txt");
    int s_line = 0;
    while(s_line < 100 && readfile >> s[s_line].name >> s[s_line].age >> s[s_line].gmail)
        {
            s_line++;
        }
    for(int i =0; i < s_line; i++)
    {
        cout << s[i].name << " " << s[i].age << " " << s[i].gmail << endl;
    }
    readfile.close();
}
int main(){
    Acess_file();
}