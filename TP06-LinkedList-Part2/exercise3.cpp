#include <iostream>
using namespace std;

struct Product {
    string name;
    int price;
    int id;
    string importDate; //mm-dd-yyyy
    string color;
    int storage;

    Product *next;
    Product *prev;
};

struct List {
    int size;

    Product *head;
    Product *tail;
};

List * createEmptyList(){
    List * ls = new List();

    ls -> size = 0;
    ls -> head = nullptr;
    ls -> tail = nullptr;

    return ls;
}

void addBegin(List  * ls,string name, int price, int id, string importDate, string color, int storage){
    Product * p = new Product;

        p -> name = name;
        p -> price = price;
        p -> id = id;
        p -> importDate = importDate;
        p -> color = color;
        p -> storage = storage;
        p -> next = ls -> head;
        p -> prev = nullptr;
    
    if( ls -> size == 0){
        ls -> head = p;
    }else {
        ls -> head -> prev = p;
    }

    ls -> head = p;
    ls -> size++;
}
void addEnd(List * ls, string name, int price, int id,string importDate, string color, int storage){
    Product * p = new Product;

        p -> name = name;
        p -> price = price;
        p -> id = id;
        p -> importDate = importDate;
        p -> color = color;
        p -> storage = storage;
        p -> prev = ls -> tail;

    if( ls -> size == 0){
        ls -> tail = p;
    }else {
        ls -> tail -> next = p;
    }
    ls -> tail = p;
    ls -> size++;
}

void display(List * ls){
    Product * p = ls -> head;
    while ( (p != nullptr))
    {
        cout << "__________________________________________________" << endl;
        cout << "Product Name: " << p -> name << endl;
        cout << "Product ID: " << p -> id << endl;
        cout << "Product Price: " << p -> price << endl;
        cout << "Product Import Date: " << p -> importDate << endl;
        cout << "Product Color: " << p -> color << endl;
        cout << "Product Storage: " << p -> storage << endl;

        p = p -> next;
    }

    cout << endl;

}

void addPosition(List *ls, int price){

    if(price > 50){
        addBegin(ls,"iphone 16 Pro Max",price, 01, "12-March-2026","blue",256);
    }else{
        addEnd(ls,"iphone 12 Pro Max",price, 01, "12-March-2026","blue",256);
    }
}

int main(){
    List * ls = createEmptyList();

    addPosition(ls,600);
    addPosition(ls,10);

    display(ls);

}