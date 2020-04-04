#include "stackForm.h"
#include <stdio.h>
#include "student.h"
stack1 createstack(int x){

    stack1 stk;
    int i;
    stk.top =-1;
    stk.siz = x;

    for(i=0; i<x; i++)
        stk.arr[i]=0;
    return stk;
}

boolean isEmptyS(stack1 *stk){

    if(stk->top<0){
        printf("\nThe Stack is Empty!\n");
        return True;
            }
    else
        return False;
}

boolean isFullS(stack1* stk){

    if(stk->top == stk->siz-1){
        printf("\nThe Stack is Full!\n");
        return True;
        }
    else {
        return False;
        }
}

stack1* push(stack1* stk,int num){

    if(!isFullS(stk)){
        stk->top++;
        stk->arr[stk->top] = num;
    }
    else {}
    return stk;
}

stack1* pop(stack1* stk){

    if(!isEmptyS(stk)){
        stk->last_pop = stk->arr[stk->top];
        stk->arr[stk->top]=0;
        stk->top --;
        }
    else {}
    return stk;

}

void stkprint(stack1 stk){

    printf("\n\nThe Stack consists of %d elements as following:\n",(stk.top)+1);
    int i=0;
    for( i=0; i< stk.siz; i++ )
        printf("%d ", stk.arr[i]);

}
