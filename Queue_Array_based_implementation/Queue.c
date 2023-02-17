#include "./Queue.h"

void CreateQueue(Queue* pq)
{
    pq->front=0;
    pq->rear=-1;
    pq->size=0;
}

void Append(QueueEntry e,Queue*pq)
{
    // if(pq->rear == MAXQUEUE-1)
    // {
    //     pq->rear=0;
    //     pq->entry[pq->rear]=e;
    // }
    // else pq->entry[++(pq->rear)]=e;

    //second method
    pq->rear=(pq->rear+1) % MAXQUEUE;
    /*
    if MAXQUEUE is 10 and rear is 9 so [pq->rear + 1 =10] and 10 %10 will be zero
    and if rear is 4 so [pq->rear + 1 =5] and 5 %10 =5    
    */
    pq->entry[pq->rear]=e;
    pq->size++;    
}

void Serve(QueueEntry*pe,Queue*pq)
{
    *pe=pq->entry[pq->front];
    pq->front=(pq->front+1) % MAXQUEUE;
    pq->size--;
}

int QueueEmpty(Queue*pq)
{
    //first
    // return pq->size == 0 ? 1:0;

    //second
    return !pq->size;
}
int QueueFull(Queue*pq)
{
    return (pq->size == MAXQUEUE);
}

int QueueSize(Queue*pq)
{
    return pq->size;
}

void ClearQueue(Queue*pq)
{
    pq->size=0;
    pq->front=0;
    pq->rear=-1;
}

void TraverseQueue(Queue*pq,void (*pf)(QueueEntry))
{
    int temp,s;
    for(temp=pq->front,s=0;s< pq->size;s++)
    {
        (*pf)(pq->entry[temp]);
        temp=(temp+1)%MAXQUEUE;
    }
}


