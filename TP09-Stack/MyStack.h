#ifndef MYSTACK_H
#define MYSTACK_H

#include<iostream>
using namespace std;

struct Element{
    int value;
    Element *next;
};
struct Stack{
    int size;
    Element *top;
};
Stack *CreateStack(){
    Stack *s = new Stack;
    s->size=0;
    s->top=NULL;
    return s;
}
bool isEmpty(Stack * s){
    if(s -> size == 0) return true;

    return false;
}
void push(Stack *s, int data){
    Element *e= new Element;
    e->value=data;
    e->next=s->top;
    s->top=e;
    s->size++;
}
void pop(Stack*s){
    if(s->top==nullptr){
        cout<<"stack is empty"<<endl;
        return ;
    }
    Element*tmp=s->top;
    cout<<tmp->value<<" poped "<<endl;
    s->top=s->top->next;
    s->size--; // fixed
    delete tmp;

}
void printStack(Stack*s){
    if(s->top==nullptr){
        cout<<"stack is empty"<<endl;
        return ;
    }
    Element*tmp=s->top;
    cout<<"stack element:";
    while(tmp!=nullptr){
        cout<<tmp->value<<" ";
        tmp=tmp->next;
    }
    cout<<endl;

}
void clearStack(Stack *s){
    while(s->top!= nullptr){
        pop(s);
    }
}
void remove_even_elements(Stack* s)
{
    Stack* odd_stack = CreateStack();
    Element* temp = s->top;

    while(temp != nullptr)
    {
        if(temp->value%2 != 0)
        {
            push(odd_stack, temp->value);
        }

        temp = temp->next; // fixed
    }

    printStack(odd_stack);

    clearStack(s);
    Element* e = odd_stack->top;
    while(e != nullptr)
    {
        push(s, e->value);
        e = e->next;
    }
}
int maximum = INT_MIN;
void findMaximum(Stack * s){
    if(isEmpty(s)){
        cout << "there is no data\n";
        return;
    }
    Element * e  = s -> top;
    while(e != nullptr){
        if(maximum < e -> value) maximum = e->value;
        
        e = e -> next;
    }

    

    cout << "Maximum value: " << maximum << endl;

}
void findTheSecondHighest(Stack * s){
    Element * e = s -> top;
    int secMax = INT_MIN;
    if(isEmpty(s)){
        cout << "There is no data\n" << endl;
        return;
    }
// 59
// 5
// 400
    while(e != nullptr){
        if(e->value > maximum){
          secMax = maximum;
          maximum = e->value;  
        } 
        else if(e->value > secMax && e->value < maximum){
            secMax = e->value;
        }
        e = e->next;

    }
    cout << "The second highest number is : " << secMax << endl;
}
void remvoeDuplication(Stack * s){
    Element * e = s -> top;
    Stack * seen = CreateStack();
    Stack * newStack = CreateStack();

    if(isEmpty(s)){
        cout << "there is no data\n";
        return;
    }
    while(e != nullptr){
        Element * check = seen->top;
        bool isDuplicated = false;
        while (check != nullptr)
        {
            if(check->value == e->value){
                isDuplicated = true;

                break;

            }
            if(isDuplicated){
                push(seen,check->value);
                push(newStack,e->value);
            }

            check = check->next;
        }
    }
    printStack(newStack);
    clearStack(seen);
    delete seen;
    clearStack(newStack);
    delete newStack;
}
Stack * primary = CreateStack();
void reverseStack(Stack * s){
    Element * e = s->top;
    if(isEmpty(s)){
        cout << "there is no data in stack\n" << endl;
        return;
    }
    while(e != nullptr){
        push(primary,e->value);
        e = e->next;
    }
}
void displayInReverse_clear(Stack * s){
    Element * e = s->top;
    reverseStack(s);
    cout << "Display in reverse: ";
    Element * en = primary->top;
    while(en != nullptr){
        cout << en->value << " ";
        en = en->next;
    }   
    cout << endl;
    clearStack(primary);
    delete primary;
}

void displayInreverse(Stack * s){
    reverseStack(s);
    Element * e = primary->top;
    printStack(primary);
    
} 

#endif