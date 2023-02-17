#include "./Queue.h"

void CreateQueue(Queue* pq)
{
    pq->front=NULLPTR;
    pq->rear=NULLPTR;
    pq->size=0;
}

void Append(QueueEntry e, Queue* pq)
{
    QueueNode* pn=(QueueNode*)malloc(sizeof(QueueNode));
    pn->next=NULLPTR;
    pn->val=e;
    if(pq->size==0) pq->front=pn;
    else pq->rear->next=pn;
    pq->rear=pn;
    pq->size++;
}

void Serve(QueueEntry*pe,Queue*pq)
{
    QueueNode*pn=pq->front;
    *pe=pq->front->val;
    pq->front=pq->front->next;
    free(pn);
    if(!pq->front) pq->rear=NULLPTR;
    pq->size--;

}

int QueueEmpty(Queue*pq)
{
    return (!pq->size);
}
int QueueFull(Queue*pq)
{
    return 0;
}
int QueueSize(Queue*pq)
{
    return pq->size;
}
void ClearQueue(Queue*pq)
{
    while (pq->front)
    {
        pq->rear=pq->front->next;
        free(pq->front);
        pq->front=pq->rear;
    }
    pq->size=0;
    
}

void TraverseQueue(Queue*pq,void (*pf)(QueueEntry))
{
    QueueNode*pn=pq->front;
    while(pn)
    {
        pf(pn->val);
        pn=pn->next;
    }
}