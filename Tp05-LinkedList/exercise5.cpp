// 5
#include <iostream>
using namespace std;
struct Number{
    int data;
    Number *next;
};
void insertNumber(Number *&head, int value){
    Number *newNumber = new Number();
    newNumber -> data = value;
    newNumber -> next = NULL;
    if(head == NULL){
        head = newNumber;
    }else{
        Number * temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = newNumber;
    }
}
void display(Number * head){
    Number *temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}
int getSum(Number *head){
    int sum = 0;
    Number *temp = head;
    while(temp != NULL){
        sum += temp->data;
        temp = temp -> next;
    }
    return sum;
}
int main(){
    Number *head = NULL;
    int input_number;
    int zeroCount = 0;

    cout << "*** A program to store number as many as possible: ***" << endl;

    while (true) {
        cout << "Enter a number: ";
        cin >> input_number;

        if (input_number == 0) {
            zeroCount++;

            if (zeroCount == 1) {
                cout << "You have entered the number 0 once. Only 1 more left. We will quit the program." << endl;
            }
            else if (zeroCount == 2) {
                cout << "You have entered the number 0 twice so far. The program is going to stop now." << endl;
                break;
            }
        } else {
            insertNumber(head, input_number);
        }
    }

    cout << "\nAll data in the list are: ";
    display(head);

    cout << "\nSummation of all numbers is: " << getSum(head) << endl;

}