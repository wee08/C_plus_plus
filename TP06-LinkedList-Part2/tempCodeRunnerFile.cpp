#include <iostream>
using namespace std;
// create a box to contains data
struct Element {
    string data;
    Element *next;
    Element *prev;
};
//' create a list to store data
struct List{
    int n;
    Element *head;
    Element *tail;
};

// create empty list funciton
List * createEmptyList(){
    List *ls = new List();
    ls -> n = 0;
    ls -> head = nullptr;
    ls -> tail = nullptr;

    return ls;
}
void AddBeg(List *ls, string data){
    Element *e = new Element;
    e -> data = data;
    e -> next = ls -> head;
    e -> prev = nullptr;
    if(ls -> n == 0){
        ls -> tail = e;
    }else {
        ls -> head -> prev = e;
    }
    ls -> head = e;
    ls -> n++;
}
void displayForward(List *ls){
    Element * e = ls->head;
    while (e != nullptr){
        cout << e -> data << " ";
        e = e -> next;
    }

    cout << endl;   

}
 
int main(){
    List *lowerCase = createEmptyList();
    List *upperCase = createEmptyList();

    for(char ch = 'Z'; ch >= 'A'; ch--){
        AddBeg(upperCase, string (1, ch));
    }
        for(char ch = 'z'; ch >= 'a'; ch--){
        AddBeg(upperCase, string (1, ch));
    }
    displayForward(upperCase);
    displayForward(lowerCase);
}