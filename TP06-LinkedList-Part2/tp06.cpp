//#include <iostream>
//using namespace std;
//
//struct Element{
//    char data;
//    Element* next;
//};
//
//struct List{
//    int n;
//    Element* head;
//    Element* tail;
//};
//
//List* createEmptyList(){
//    List* ls = new List;
//    ls->n = 0;
//    ls->head = nullptr;
//    ls->tail = nullptr;
//    return ls;
//}
//
//void addEnd(List* ls, char data){
//    Element* e = new Element;
//    e->data = data;
//    e->next = nullptr;
//
//    if(ls->n==0){
//        ls->head = e;
//    }else{
//        ls->tail->next = e;
//    }
//    ls->tail = e;
//    ls->n++;
//}
//
//void display(List* ls){
//    Element* e = ls->head;
//    while(e != nullptr){
//        cout << e->data << " ";
//        e = e->next;
//    }
//    cout << endl;
//}
//
//void deleteBeg(List* ls){
//    if(ls->n ==0) return;
//    Element* tmp = ls->head; // current head
//    ls->head = tmp->next; // update new head
//    if(ls->n==1){
//        ls->tail = nullptr;
//    }
//    delete tmp;
//    ls->n--;
//
//}
//
//void deleteEnd(List* ls){
//    if(ls->n==0) return;
//
//    Element* e = ls->head;
//    while( e->next != ls->tail){ // second last element
//        e=e->next;
//    }
//    e->next = nullptr;
//    delete ls->tail;
//    ls->tail = e;
//
//    if(ls->n==1){
//        ls->head = nullptr;
//    }
//
//    ls->n--;
//}
//
//void deletePos(List* ls, int pos){
//    if(ls->n == 0 || pos<0 || pos>=ls->n){
//        cout << "Invalid" << endl;
//        return;
//    }
//
//    Element* current = ls->head;
//    for(int i=0;i<pos-1; i++){
//       current = current->next;
//    }
//
//    Element* tmp = current->next;
//    current->next = tmp->next;
//    delete tmp;
//
//    if(tmp->next = nullptr){
//        ls->tail = current;
//    }
//
//    ls->n--;
//}
//
//
//
//int main(){
//    List* list1 = createEmptyList();
//    for(int i=65; i<65+26; i++){
//        addEnd(list1, char(i));
//    }
//    display(list1);
//    deleteBeg(list1);
//    deleteBeg(list1);
//    display(list1);
//
//    List* list2 = createEmptyList();
//    for(char c = 'a'; c <= 'z'; c++){
//        addEnd(list2, c);
//    }
//    display(list2);
//    deleteEnd(list2);
//    display(list2);
//
//    deleteEnd(list2);
//    display(list2);
//
//    deleteEnd(list2);
//    display(list2);
//
//    deletePos(list2, 3);
//    display(list2);
//}
//

#include <iostream>
using namespace std;

struct Element{
    int data;
    Element* prev;
    Element* next;
};

struct List{
    int n;
    Element* head;
    Element* tail;
};

List* createEmptyList(){
    List* ls= new List;
    ls->n = 0;
    ls->head = nullptr;
    ls->tail = nullptr;
    return ls;
}

void addBeg(List* ls, int data){
    Element* e = new Element;
    e->data = data;
    e->next = ls->head;
    e->prev = nullptr;
    if(ls->n == 0){ // empty list
        ls->tail = e;
    }else{
        ls->head->prev = e;
    }
    ls->head = e;
    ls->n++;
}

void addEnd(List* ls, int data){
    Element* e = new Element;
    e->data = data;
    e->next = nullptr;
    e->prev = ls->tail ; // current tail;
    if(ls->n == 0){
        ls->head = e;
    }else{
        ls->tail->next = e;
    }
    ls->tail = e;
    ls->n++;
}

void displayForward(List* ls){
    Element* e = ls->head;
    while( e != nullptr){
        cout << e->data << " ";
        e = e->next;
    }
    cout << endl;
}

void displayBackward(List* ls){
    Element *e = ls->tail;
    while(e != nullptr){
        cout << e->data << " ";
        e = e->prev;
    }
    cout << endl;
}

int main(){
//    List* list1 = createEmptyList();
//    for(int i=0;i<=10;i++){
//        addBeg(list1, i);
//    }
//    displayForward(list1);
//    displayBackward(list1);

    List* list1 = createEmptyList();
    for(int i=10;i<=20;i++){
        addEnd(list1, i);
    }
    displayForward(list1);
    displayBackward(list1);


}


