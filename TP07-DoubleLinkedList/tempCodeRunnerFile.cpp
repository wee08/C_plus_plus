#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//1
struct Node {
    int data;
    Node* prev;
    Node* next;
};

struct List {
    Node* head;
    Node* tail;
};

List* createEmpty() {
    List* l = new List;
    l->head = NULL;
    l->tail = NULL;
    return l;
}
void addBegin(List* l, int value) {
 Node* n = new Node;
    n->data = value;
    n->prev = NULL;
    n->next = NULL;
    if (l->head == NULL) {
        l->head = l->tail = n;
    } else {
        n->next = l->head;
        l->head->prev = n;
        l->head = n;
    }
}
void addEnd(List* l, int value) {
Node* n = new Node;
    n->data = value;
    n->prev = NULL;
    n->next = NULL;
    if (l->tail == NULL) {
        l->head = l->tail = n;
    } else {
        l->tail->next = n;
        n->prev = l->tail;
        l->tail = n;
    }
}

void addAtPosition(List* l, int value, int pos) {
    if (pos == 0) {
        addBegin(l, value);
        return;
    }

    Node* temp = l->head;
    int i = 0;

    while (temp != NULL && i < pos - 1) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL || temp->next == NULL) {
        addEnd(l, value);
        return;
    }

Node* n = new Node;
    n->data = value;
    n->prev = NULL;
    n->next = NULL;
    n->next = temp->next;
    n->prev = temp;

    temp->next->prev = n;
    temp->next = n;
}

void display(List* l) {
    Node* temp = l->head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout <<"NULL"<<endl;
}

//2
void generateRandom(List* l, int n) {
    srand(time(0));

    for (int i = 0; i < n; i++) {
        int num = rand() % 100;
        addEnd(l, num);
    }
}

void sumAndAverage(List* l) {
    Node* temp = l->head;
    int sum = 0, count = 0;

    while (temp != NULL) {
        sum += temp->data;
        count++;
        temp = temp->next;
    }

    if (count == 0) return;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << (float)sum / count << endl;
}

//3


void deleteBegin(List* l) {
    if (l->head == NULL) return;

    Node* temp = l->head;

    if (l->head == l->tail) {
        l->head = l->tail = NULL;
    } else {
        l->head = l->head->next;
        l->head->prev = NULL;
    }

    delete temp;
}


void deleteEnd(List* l) {
    if (l->tail == NULL) return;

    Node* temp = l->tail;

    if (l->head == l->tail) {
        l->head = l->tail = NULL;
    } else {
        l->tail = l->tail->prev;
        l->tail->next = NULL;
    }

    delete temp;
}


void deleteAtPosition(List* l, int pos) {
    if (l->head == NULL) return;

    if (pos == 0) {
        deleteBegin(l);
        return;
    }

    Node* temp = l->head;
    int i = 0;

    while (temp != NULL && i < pos) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL) return;

    if (temp == l->tail) {
        deleteEnd(l);
        return;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    delete temp;
}
//4

int findMin(List* l) {
    if (l->head == NULL) return -1;

    int minVal = l->head->data;
    Node* temp = l->head;

    while (temp != NULL) {
        if (temp->data < minVal)
            minVal = temp->data;
        temp = temp->next;
    }

    return minVal;
}

int findMax(List* l) {
    if (l->head == NULL) return -1;

    int maxVal = l->head->data;
    Node* temp = l->head;

    while (temp != NULL) {
        if (temp->data > maxVal)
            maxVal = temp->data;
        temp = temp->next;
    }

    return maxVal;
}
int main() {
    List* l = createEmpty();
//    addBegin(l, 2);
//    addBegin(l, 7);
//    addBegin(l, 9);
//    addEnd(l, 1);
//    addEnd(l, 0);
//    addAtPosition(l,3, 4);
//    addAtPosition(l,8, 9);

    int n;
    cout << "Enter n: ";
    cin >> n;
    generateRandom(l, n);

    cout << "List: ";

    sumAndAverage(l);

    cout << "Min = " << findMin(l) << endl;
    cout << "Max = " << findMax(l) << endl;

    deleteBegin(l);
    deleteEnd(l);
    deleteAtPosition(l, 3);

    cout << "After deletion: ";
    display(l);

    return 0;
}
