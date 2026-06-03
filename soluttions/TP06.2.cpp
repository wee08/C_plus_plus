#include <iostream>
#include <string>

using namespace std;

struct Student{
    string data;
    Student* next;
};

struct ListStudent{
    Student* head;
    int count;
};

void createEmptyList(ListStudent &list){
    list.head = nullptr;
    list.count = 0;
}

void addStudent(ListStudent &list, string name){
    Student* newls = new Student;

    newls->data = name;
    newls->next = list.head;

    list.head = newls;
    list.count++;
}

void displayData(ListStudent &list){
    Student* tmp = list.head;

    cout << "\n--- List of People (" << list.count << ") ---" << endl;

    while(tmp != nullptr){
        cout << "Name: " << tmp->data << endl;
        tmp = tmp->next;
    }
}

int main()
{
    ListStudent myfriend;

    createEmptyList(myfriend);

    // Fixed: Added double quotes around the names
    addStudent(myfriend, "Dara");
    addStudent(myfriend, "Seyha");
    addStudent(myfriend, "Makara");
    addStudent(myfriend, "Kanha");
    addStudent(myfriend, "Thida");
    addStudent(myfriend, "Minea");
    addStudent(myfriend, "Mano");
    addStudent(myfriend, "Vatanak");
    addStudent(myfriend, "Bopha");
    addStudent(myfriend, "Xavier");

    displayData(myfriend);
    return 0;
}
