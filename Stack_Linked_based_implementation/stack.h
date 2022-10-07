#ifndef _STACK_H_
#define _STACK_H_


typedef struct stakNode{

    StackEntry entry;
    struct stackNode * next;

}StackNode;

typedef struct stack{
    StackNode * top;  
    int size;
}Stack;

//ps: pointer to struct
void CreateStack(Stack *ps);  //initaliztion stack to be empty  
void push(Stack *ps,StackEntry e);
int StackFull(Stack *ps);
//it could be StackFull(Stack s) but for saving time and space we just send the address
void Pop(StackEntry *pe ,Stack *ps);
int StackEmpty(Stack *ps);
void StackTop(Stack *ps,StackEntry *pe);
int StackSize(Stack *ps);
void ClearStack(Stack *ps);
void TraverseStack(Stack *ps,void (*pf)(StackEntry));

#endif