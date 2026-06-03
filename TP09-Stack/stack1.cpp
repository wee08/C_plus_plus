#include "MyStack.h"
int main(){
Stack*s=CreateStack();
push(s,1);
push(s,2);
push(s,5);
push(s,3);
push(s,5901);
push(s,5901);
push(s,4);
push(s,59);
push(s,59);
printStack(s);

remvoeDuplication(s);
// displayInReverse_clear(s);
// displayInreverse(s);
// // findMaximum(s);

// remove_even_elements(s);
// findTheSecondHighest(s);
// remvoeDuplication(s);
return 0;
}



