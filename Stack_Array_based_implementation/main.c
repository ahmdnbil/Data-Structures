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

