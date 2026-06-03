#include <iostream>

using namespace std;

struct Node{
    char data;
    Node* next;
};

struct List{
    Node* head = nullptr;
    Node* tail = nullptr;
    char n;
};

void append(List &list , char value){
    Node* newls = new Node;
    newls->data = value;
    newls->next = nullptr;

    if(list.head == nullptr){
        list.head = newls;
        list.tail = newls;
    }else{
        list.tail->next = newls;
        list.tail = newls;
    }
}

void printList(List &list, string Listname){
    cout << Listname << " ";
    Node* temp = list.head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    List lowcasehead;
    List upcasehead;

    for(char c = 'a' ; c <= 'z' ; c++){
        append(lowcasehead , c);
    }

    for(char c = 'A' ; c <= 'Z' ; c++){
        append(upcasehead , c);
    }

    printList(lowcasehead, "Small Letters");
    printList(upcasehead, "Capital Letters");

    return 0;
}
