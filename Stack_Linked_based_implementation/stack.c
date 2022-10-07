#include <stddef.h>
#include <stdlib.h>

#define StackEntry int

#include "stack.h"

void CreateStack(Stack *ps)
{
    ps->top=NULL;  
    ps->size=0;
}

void push(Stack *ps,StackEntry e)
{
    StackNode *pn=(StackNode *)malloc(sizeof(StackNode));
    pn->next=ps->top;
    pn->entry=e;
    ps->top=pn;
    ps->size++;

}
int StackFull(Stack *ps)
{
    return 0;

}
void Pop(StackEntry *pe ,Stack *ps)
{
    StackNode*pn=ps->top;
    *pe=ps->top->entry;
    ps->top=ps->top->next;
    free(pn);
    ps->size--;
}
int StackEmpty(Stack *ps)
{
    return (ps->top==NULL);
}

void StackTop(Stack *ps,StackEntry *pe){
    *pe=ps->top->entry;
}

int StackSize(Stack *ps)
{
    // int count=0;
    // StackNode *pn;
    // pn=ps->top;
    // while(pn)
    // {
    //     count++;
    //     pn=pn->next;
    // }
    // return count;

    //another solution
    // int x;
    // StackNode*pn;
    // for(x=0;pn;pn=pn->next)
    //     x++;
    // return x;
    
    // after modifiying the stack structure 
    return ps->size;
}
void ClearStack(Stack *ps)
{
    StackNode *pn,*qn;
    pn=ps->top;
    while(pn->next!=NULL)
    {
        qn=pn;
        pn=pn->next;
        free(qn);
    }
    ps->top=NULL;
    ps->size=0;
}

void TraverseStack(Stack *ps,void (*pf)(StackEntry))
{
    StackNode*pn;
    pn=ps->top;
    while(pn)
    {
        (*pf)(pn->entry);
        pn=pn->next;
    }
}
