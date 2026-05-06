#include <iostream>
using namespace std;
struct Product{
    string data;
    Product *next;
    Product *prev;
};
struct ListProduct{
    int size;
    Product *head;
    Product *tail;
};

ListProduct *createEmptyProductList(){
    ListProduct *lp = new ListProduct();
    lp -> size = 0;
    lp -> head = nullptr;
    lp -> tail = nullptr;

    return lp;
}
void addProductToBeg(ListProduct *lp, string productName){
    Product *p = new Product;
    p -> data = productName;
    p -> next = lp -> head;
    p -> prev = nullptr;
    if(lp -> size == 0){
        lp -> tail = p;
    }else {
        lp -> head -> prev = p;
    }
    lp -> head = p;
    lp -> size++;
}
void addProductToEnd(ListProduct *lp, string productName){
    Product *p = new Product;
    p -> data = productName;
    p -> next = nullptr;
    p -> prev = lp -> tail;
    if(lp -> size == 0){
        lp -> head = p;
    }else {
        lp -> tail -> next = p;
    }
    lp -> tail = p;
    lp -> size++;
}
void displayAllProduct(ListProduct *lp){
    Product *p = lp -> head;
    while(p != nullptr){
        cout << p -> data << endl;
        p = p -> next;
    }
}


int main(){
    ListProduct *lp = createEmptyProductList();
    addProductToBeg(lp, "Socks");
    addProductToEnd(lp, "Shoes");
    addProductToEnd(lp, "gloves");
    addProductToBeg(lp, "Tie");

    displayAllProduct(lp);
}