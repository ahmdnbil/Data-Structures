#ifndef _QUEUE_H_
#define _QUEUE_H_

#define QueueEntry int
#define NULLPTR ((*void)0)

typedef struct queueNode
{
    QueueEntry val;
    struct queueNode* next;
}QueueNode;

typedef struct queue
{
    QueueNode* front;
    QueueNode* rear;
    int size;
}Queue;

void CreateQueue(Queue* pq);
void Append(QueueEntry e, Queue* pq);
void Serve(QueueEntry*pe,Queue*pq);
int QueueEmpty(Queue*pq);
int QueueFull(Queue*pq);
int QueueSize(Queue*pq);
void ClearQueue(Queue*pq);
void TraverseQueue(Queue*pq,void (*pf)(QueueEntry));

#endif