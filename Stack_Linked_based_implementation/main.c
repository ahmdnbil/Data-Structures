#include <stdio.h>

#define StackEntry int

#include "stack.h"

void Hello(int x);

void main ()
{
    Stack s;
    CreateStack(&s); 
    int e;

    if(!StackFull(&s))
    {
        push(&s,5);
    }
    push(&s,5);
    push(&s,6);
    push(&s,57);

    // if(!StackEmpty(&s))
    // {
    //     Pop(&e,&s);
    // }
    printf("the size of stack %d\n",StackSize(&s));
    TraverseStack(&s,Hello);
    ClearStack(&s);
    printf("the size of stack %d\n",StackSize(&s));
}

void Hello(int x)
{
    printf("Hello %d\n",x);
}
