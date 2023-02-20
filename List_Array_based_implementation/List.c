#include "./List.h"

void CreateList(List*pl)
{
    pl->size=0;
}//Θ(1)
int ListEmpty(List*pl)
{
    return !pl->size;
}//Θ(1)
int ListFull(List*pl)
{
    return pl->size == MAXLIST;
}//Θ(1)
int ListSize(List*pl)
{
    return pl->size; 
}//Θ(1)
void DestroyList(List*pl)
{
    pl->size=0;
}//Θ(1)

/* 0 <= p <= size*/
void InsertList(int p,ListEntry e,List*pl)
{
    int i;
    /*The loop shifts up all the elements in the range
    [p,size-1] to free the p th location*/
    for(i=pl->size-1;i>=p;i--)
        pl->entry[i+1]=pl->entry[i];
    pl->entry[p]=e;
    pl->size++;

}//Θ(n)

/* 0 <= p <= size-1*/
void DeleteList(int p,ListEntry* pe,List*pl)
{
    int i;
    *pe=pl->entry[p];
    for(i=p+1;i <= pl->size-1;i++)
        pl->entry[i-1]=pl->entry[i];
    pl->size--;
}//Θ(n)

void TraverseList(List*pl,void (*Visit)(ListEntry))
{
    int i;
    for(i=0;i<pl->size;i++)
        Visit(pl->entry[i]);
}
void RetrieveList(int p ,ListEntry* pe,List* pl)
{
    *pe=pl->entry[p];
}
void ReplaceList(int p,ListEntry e,List*pl)
{
    pl->entry[p]=e;
}
