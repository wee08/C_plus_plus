// the structure is stored integer value and pointer link.

#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
struct NumList {
  Node *head;
  Node *tail;
  int size;  
};
