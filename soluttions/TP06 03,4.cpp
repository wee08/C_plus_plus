#include <iostream>
using namespace std;

struct Product {
    string name;
    float price;
    int quantity;
    string category;
    string brand;
    int id;
    Product* next;
};

struct ListProduct {
    Product* head;
};
void createEmptyList(ListProduct &l) {
    l.head = NULL;
}
Product* createProduct(string name, float price, int qty,
                       string category, string brand, int id) {
    Product* p = new Product;
    p->name = name;
    p->price = price;
    p->quantity = qty;
    p->category = category;
    p->brand = brand;
    p->id = id;
    p->next = NULL;
    return p;
}
void addProductToBegin(ListProduct &l, Product* p) {
    p->next = l.head;
    l.head = p;
}
void addProductToEnd(ListProduct &l, Product* p) {
    if (l.head == NULL) {
        l.head = p;
    } else {
        Product* temp = l.head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = p;
    }
}
void display(ListProduct l) {
    Product* temp = l.head;
    while (temp != NULL) {
        cout << "ID: " << temp->id
             << ", Name: " << temp->name
             << ", Price: " << temp->price
             << ", Qty: " << temp->quantity
             << ", Category: " << temp->category
             << ", Brand: " << temp->brand << endl;
        temp = temp->next;
    }
}
void searchByName(ListProduct l, string name) {
    Product* temp = l.head;
    bool found = false;

    while (temp != NULL) {
        if (temp->name == name) {
            cout << "Found: " << temp->name
                 << " Price: " << temp->price << endl;
            found = true;
        }
        temp = temp->next;
    }

    if (!found) cout << "Product not found!\n";
}
void searchByPrice(ListProduct l, float p) {
    Product* temp = l.head;

    cout << "\nProducts with price < " << p << ":\n";
    while (temp != NULL) {
        if (temp->price < p)
            cout << temp->name << " - " << temp->price << endl;
        temp = temp->next;
    }

    temp = l.head;
    cout << "\nProducts with price >= " << p << ":\n";
    while (temp != NULL) {
        if (temp->price >= p)
            cout << temp->name << " - " << temp->price << endl;
        temp = temp->next;
    }
}

void deleteFromBegin(ListProduct &l) {
    if (l.head == NULL) return;

    Product* temp = l.head;
    l.head = l.head->next;
    delete temp;
}


int main() {
    ListProduct list;

    createEmptyList(list);

    Product* p1 = createProduct("Phone", 30, 10, "Electronics", "Samsung", 1);
    Product* p2 = createProduct("Laptop", 800, 5, "Electronics", "Dell", 2);
    Product* p3 = createProduct("Book", 20, 50, "Education", "ABC", 3);

    if (p1->price < 50) addProductToBegin(list, p1);
    else addProductToEnd(list, p1);

    if (p2->price < 50) addProductToBegin(list, p2);
    else addProductToEnd(list, p2);

    if (p3->price < 50) addProductToBegin(list, p3);
    else addProductToEnd(list, p3);

    cout << "All Products:\n";
    display(list);

    searchByName(list, "Phone");
    searchByPrice(list, 50);

    deleteFromBegin(list);
    cout << "\nAfter deletion:\n";
    display(list);

    return 0;
}
