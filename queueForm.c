#include "queueForm.h"
#include <stdio.h>
#include "student.h"
#include "swap.h"
boolean isEmptyQ(queue1* q){

    printf("\n");

    if(q->rear<0){
        printf("\nThe Queue is Empty!");
        return True;
        }
    else
        return False;
}
boolean isFullQ(queue1* q){


     printf("\n");
    if(q->rear == q->siz-1){
        printf("\nThe Queue is Full!");
        return True;
        }
    else
        return False;
}
queue1 createqueue(int y){



    queue1 q;
        int i;
        q.rear =-1;
        q.siz = y;

        for(i=0; i<y; i++)
            q.arr[i]=0;
        return q;
}
queue1* Enqueue(queue1* q, int num){


    if(!isFullQ(q)){
        q->rear++;
        q->arr[q->rear] = num;
    }
    else {}
    return q;
}
queue1* Dequeue(queue1* q){



    if(!isEmptyQ(q)){
        q->last_dequeue = q->arr[q->rear];
        q->arr[0]=0;
        int i;
        for( i=0; i<(q->rear); i++)
            swp(&q->arr[i],&q->arr[i+1]);
        q->rear --;
        }
    else {}
    return q;
}
void queprint(queue1 q){

      printf("\nThe Queue consists of %d elements as following:\n",(q.rear)+1);
    int i=0;
    for( i=0; i< q.siz; i++ )
        printf("%d ", q.arr[i]);
}

