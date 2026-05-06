#include <iostream>
using namespace std;
// create a parent structure for contains data and next box
struct Student{
    int id;
    string name;
    int year;
    string deg;
    Student *next;
};
// create a list which is linked to the parent structure include head and tail;
struct ListStudent{
    Student *head;
    Student *tail;
    Student *pointer;
};
//3 
// in this function we create empty lsit of list student so to be able to do it we need ot point our list to sth and give it as a new list;
// since it a new list we have to give the head, tail and pointer of the list into NULL
// and we will return sth which is get pointed by the list
ListStudent *createEmptyList(){
    ListStudent *ls = new ListStudent();
    ls -> head = NULL;
    ls -> tail = NULL;
    ls -> pointer = NULL;

    return ls;
};
// in this add function we add to parent list and child list and pointed it into some name in short as a paramter
void add(Student *s, ListStudent *LS){
    // chcek if our parent list, where we go throug it so we go through head of the list so if list is empty that mean the head is null if the head is null so the head and the tail of the list is get assign from previouse value which is s as a parent list
    if(LS -> head == NULL){
        LS -> head = s;
        LS -> tail = s;
    }else{
        // in else condition mean we have data so if we have data we assign our list's tail and next as a parent structure;
        // after assign the value of the previous list box equal to the parent structure;
        // so that mean we add new data the next tail for LS will be equal that new data and push the previous data in to the tial of the previous box;
        LS -> tail -> next = s;
        LS -> tail = s;
    }
    // add the end at next box we don't have any data so we need to assign it as null
    s -> next = NULL;

}
// in this funcction we destruct our list as sth
// and we pointer temp which pointed by a parent structure and assing its value is the head of our list
// check is our parent structue is empty or not if it's not we will run the loop to display each data
void display(ListStudent *ls){
    Student *temp = ls -> head;
    while(temp != NULL){
        cout << temp -> id;
        cout << temp -> name;
        cout << temp -> year;
        cout << temp -> deg;
        temp = temp -> next;
    }
}
int main(){
    // in main we point our list to sth as a create empty list so each time we call it it will creat a new empty list if we have 3 data so our list will has 4 but the last one is null;

    ListStudent * NewClass = createEmptyList();
    // add data by using new method and create new empty list
    add(new Student{1," Manut ",2," GIC "}, NewClass);
    //  display the data since our data is insert inside NewClass;
    display(NewClass);
}