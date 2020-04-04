#ifndef STACKFORM_H_INCLUDED
#define STACKFORM_H_INCLUDED
#include "student.h"
typedef struct {
    int arr[100];
    int top;
    int siz;
    int last_pop;
}stack1;

boolean isEmptyS(stack1* x);
boolean isFullS(stack1* x);
stack1 createstack(int siz);
stack1* push(stack1* x, int num);
stack1* pop(stack1* x);
void stkprint(stack1 x);

/*      ==TEST CASE==

    stack1 stk =createstack(6);
    stack1* stkptr= &stk;
    stkptr =push(stkptr,2);
    stkprint(stk);
    stkptr =push(stkptr,88);
    stkprint(stk);
    stkptr =push(stkptr,911);
    stkprint(stk);
    stkptr =push(stkptr,43);
    stkprint(stk);
    stkptr =push(stkptr,43);
    stkprint(stk);
    stkptr =push(stkptr,43);
    stkprint(stk);
    stkptr =push(stkptr,43);
    stkprint(stk);
    stkptr =pop(stkptr);
    stkprint(stk);
    stkptr =pop(stkptr);
    stkprint(stk);
    stkptr =pop(stkptr);
    stkprint(stk);
    stkptr =pop(stkptr);
    stkprint(stk);
    stkptr =pop(stkptr);
    stkprint(stk);
    stkptr =pop(stkptr);
    stkprint(stk);
    stkptr =pop(stkptr);
    stkprint(stk);
    stkptr =pop(stkptr);
    stkprint(stk);
*/

#endif // STACKFORM_H_INCLUDED
