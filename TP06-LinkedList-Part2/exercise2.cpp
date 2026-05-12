#include <iostream>
using namespace std;
struct Element {
    string name;
    Element *next;
    Element *prev;
};
struct List {
    int n;
    Element *head;
    Element *tail;
};
List *createEmptyList(){
    List *ls = new List();
    ls -> n = 0;
    ls -> head = nullptr;
    ls -> tail = nullptr;

    return ls;
}
// dara, sokheng
void addPerson(List *ls, string name){
    Element *e = new Element;
    e -> name = name; // -> dara
    e -> next = ls -> head; // -> nullptr
    e -> prev = nullptr;
    if(ls -> n == 0){
        ls -> tail = e ;
    }else {
        ls -> head -> prev = e;
        ls -> head = e;
    }
    ls -> n++;
}
void displayAllData(List *ls){
    Element *e = ls -> head;
    while (e != nullptr)
    {
        cout << e -> name << endl;
        e = e -> next;
    }
    
}
int main(){
    List* listName = createEmptyList();
    addPerson(listName,"Kim Heng");
    addPerson(listName,"Dara");
    addPerson(listName,"Menghong");
    addPerson(listName,"Nithya");
    addPerson(listName,"Chantha");
    addPerson(listName,"Vachna");
    addPerson(listName,"Rachna");
    addPerson(listName,"Viwat");
    addPerson(listName,"Oudom");
    addPerson(listName,"Bunthet");
    addPerson(listName,"Bunthoen");
    
    displayAllData(listName);
}