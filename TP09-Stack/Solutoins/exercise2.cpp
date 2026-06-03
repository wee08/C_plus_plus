#include "MyStack.h"

int main(){
    Stack * s = createStack();
    Stack * s1 = createStack();

    push(s,1);
    push(s,2);
    push(s,3);
    push(s,5);
    removeAllEvensData(s);
    display(s);

    // push(s,100);
    // display(s);
    // push(s1,1000);
    // display(s1);
    // deleteStack(s);
    // display(s);
    // push(s,12);
    // push(s,12);
    // push(s,12);
    
    // pop(s);
    // display(s);
    
    // cout << endl;
    // removeAllData(s);
    // push(s,12);
    // push(s,12);
    // push(s,12);
    // push(s,12);
    // push(s,12);
    // display(s);

    // cout << endl;
    // removeAllData(s);
    // pop(s);
    // display(s);

    // cout << endl << endl;

    // Stack * s1 = createStack();
    // push(s1,1);
    // push(s1,3);

    // display(s1);
    // deleteStack(s1);

    // display(s1);
    // display(s);

}
