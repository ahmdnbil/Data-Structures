#ifndef _QUEUE_H_
#define _QUEUE_H_

#define MAXQUEUE 10
#define QueueEntry int

typedef struct queue
{
    int front;
    int rear;
    int size;
    QueueEntry entry[MAXQUEUE];
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