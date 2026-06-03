#include <iostream>
using namespace std;

struct Customer {
    string name;
    string sex;
    string phone;
    Customer* next;
};

struct Queue {
    Customer* front;
    Customer* rear;
};


void initQueue(Queue &q) {
    q.front = NULL;
    q.rear = NULL;
}

void enqueue(Queue &q, string name, string sex, string phone) {
    Customer* newCustomer = new Customer;

    newCustomer->name = name;
    newCustomer->sex = sex;
    newCustomer->phone = phone;
    newCustomer->next = NULL;

    if (q.front == NULL) {
        q.front = q.rear = newCustomer;
    } else {
        q.rear->next = newCustomer;
        q.rear = newCustomer;
    }

    cout << "Customer added to queue successfully!\n";
}

void dequeue(Queue &q) {
    if (q.front == NULL) {
        cout << "Queue is empty!\n";
        return;
    }

    Customer* temp = q.front;

    cout << "Serving customer, " << temp->name << "!\n";

    q.front = q.front->next;

    if (q.front == NULL) {
        q.rear = NULL;
    }

    delete temp;
}

void display(Queue q) {
    if (q.front == NULL) {
        cout << "Queue is empty!\n";
        return;
    }

    Customer* temp = q.front;

    cout << "\nCustomers in Queue:\n";

    while (temp != NULL) {
        cout << "Name  : " << temp->name << endl;
        cout << "Sex   : " << temp->sex << endl;
        cout << "Phone : " << temp->phone << endl;
        cout << "----------------------\n";

        temp = temp->next;
    }
}

int main() {
    Queue q;
    initQueue(q);

    int choice;
    string name, sex, phone;

    do {
        cout << "\n===== RESTAURANT QUEUE MENU =====\n";
        cout << "1. Enqueue Customer\n";
        cout << "2. Dequeue Customer\n";
        cout << "3. Display Customers\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore();

        switch(choice) {

            case 1:
                cout << "Enter customer name: ";
                getline(cin, name);

                cout << "Enter sex: ";
                getline(cin, sex);

                cout << "Enter phone number: ";
                getline(cin, phone);

                enqueue(q, name, sex, phone);
                break;

            case 2:
                dequeue(q);
                break;

            case 3:
                display(q);
                break;

            case 4:
                cout << "Program exited.\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 4);

    return 0;
}