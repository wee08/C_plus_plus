#include <iostream>
using namespace std;

struct Box {
    string url;
    Box * next;
};
struct Stack {
    int size;
    Box * top;
};

Stack * s;

Stack * createEmptyStack(){
    Stack * mystack = new Stack();

    mystack -> top = nullptr;
    mystack -> size = 0;

    return mystack;

}
void push(string url){
    Box * mybox = new Box;

    mybox -> url = url;
    mybox -> next = s -> top;
    s -> top = mybox;
    s -> size++;

}
bool isEmpty(Stack * s){
    if(s -> size == 0)  return true;
    return false;
}
void pop(){
    if(isEmpty){
        cout << "Stack is empty. C'ANT REM";
    }else{
        Box * t = s -> top;
        s -> top = s -> top -> next;
        delete t;

        s -> size--;
    }
}
string peek(){
    if(isEmpty){
        cout << "No Data in stack." << endl;
        return "";
    }

    return s -> top -> url;

}
void display(){
    Box * t = s -> top;
    while (t != nullptr)
    {
        cout << t -> url << endl;
        t = t -> next;
    }

    cout << endl;
    
}
void displayV2() {
    Box * t = s -> top ;
    while(t != nullptr){
        cout << t -> url << endl;
        t = t -> next;
    }
}
int main(){
    s = createEmptyStack();
    push("youtube.com");
    push("itc.edu.kh");
    push("moodule.ccun.edu.kh");
    cout << "Peek function " << peek() << "\n" ;


     displayV2();
    push("google.com");
    cout << "\n\n\n";
     displayV2();

    display();

    pop();
    pop();
    pop();


}