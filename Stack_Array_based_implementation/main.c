#include <stdio.h>

#define MAXSTACK 10
#define StackEntry int

#include "stack.h"

void main ()
{
    Stack s;
    CreateStack(&s); 
    
    int i=5;
    
    int e;

    if(!StackFull(&s))
    {
        push(&s,5);
    }

    if(!StackEmpty(&s))
    {
        Pop(&e,&s);
    }
}

void CreateStack(Stack *ps)
{
    ps->top=0;
}

void push(Stack *s,StackEntry e)
{
    s->entry[s->top++]=e;
}
int StackFull(Stack *ps)
{
    if(ps->top==MAXSTACK)
    return 1;
    else
    return 0;

}
void Pop(StackEntry *pe ,Stack *ps)
{
    //first method
    // ps->top--;
    // *pe=ps->entry[ps->top];
    
    //second method
    *pe=ps->entry[--ps->top];
}
int StackEmpty(Stack *ps)
{
    if(ps->top==0)
    return 1;
    else
    return 0;
}

void StackTop(Stack *ps,StackEntry *pe){
    *pe=ps->entry[(ps->top)-1];
}
int StackSize(Stack *ps)
{
    return ps->top;
}
void ClearStack(Stack *ps)
{
    ps->top=0;
}

void TraverseStack(Stack *ps,void (*pf)(StackEntry))
{
    for(int i=ps->top;i>0;i--)
        (*pf)(ps->entry[i-1]);
}
