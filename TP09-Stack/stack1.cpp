#include<iostream>
using namespace std;
////3


//4
//void deleteStack(Stack *s){
//    clearStack(s);
//    delete s;
//}
//2
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
    cout<<tmp->value<<"poped"<<endl;
    s->top=s->top->next;
    s->size--; // fixed
    delete tmp;

}
void diplay(Stack*s){
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

    diplay(odd_stack);

    clearStack(s);
    Element* e = odd_stack->top;
    while(e != nullptr)
    {
        push(s, e->value);
        e = e->next;
    }




}
int main(){
Stack*s=CreateStack();
push(s,1);
push(s,2);
push(s,3);
push(s,4);
push(s,5);
diplay(s);

remove_even_elements(s);
diplay(s);
return 0;
}



