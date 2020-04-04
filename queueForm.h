#ifndef QUEUEFORM_H_INCLUDED
#define QUEUEFORM_H_INCLUDED
#include "student.h"
typedef struct {
    int arr[100];
    int rear;
    int siz;
    int last_dequeue;
}queue1;

boolean isEmptyQ(queue1* q);
boolean isFullQ(queue1* q);
queue1 createqueue(int y);
queue1* Enqueue(queue1* q, int num);
queue1* Dequeue(queue1* q);
void queprint(queue1 q);

#endif // QUEUEFORM_H_INCLUDED


/* ==TEST CASE==
    queue1 que =createqueue(4);
    queue1* qptr= &que;
    qptr =Enqueue(qptr,2);
    queprint(que);
    qptr =Enqueue(qptr,88);
    queprint(que);
    qptr =Enqueue(qptr,911);
    queprint(que);
    qptr =Enqueue(qptr,43);
    queprint(que);
    qptr =Enqueue(qptr,43);
    queprint(que);
    qptr =Dequeue(qptr);
    queprint(que);
    qptr =Dequeue(qptr);
    queprint(que);
    qptr =Dequeue(qptr);
    queprint(que);
    qptr =Dequeue(qptr);
    queprint(que);
    qptr =Dequeue(qptr);
    queprint(que);
*/
# Interfacing
