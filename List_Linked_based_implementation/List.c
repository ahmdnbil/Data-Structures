#include "./List.h"

void CreateList(List* pl)
{
    pl->head=NULLPTR;
    pl->size=0;
}
int ListEmpty(List* pl)
{
    return !pl->size;
}
int ListFull(List* pl)
{
    return 0;
}
int ListSize(List* pl)
{
    return pl->size;
}
void DestroyList(List* pl)
{
    ListNode*pn=(ListNode*)malloc(sizeof(ListNode));
    pn=pl->head;
    while(pn)
    {
        pl->head=pl->head->next;
        free(pn);
        pn=pl->head;
    }
    pl->size=0;
}
void InsertList(int pos,ListEntry e,List*pl)
{
    ListNode* p= (ListNode*)malloc(sizeof(ListNode));
    ListNode*q=pl->head;
    int i;
    p->val=e;
    p->next=NULLPTR;
    if(pos ==0)
    {
        p->next=pl->head;
        pl->head=p;
    }
    else
    {
        for(i=0;i<pos-1;i++)
            q=q->next;
        p->next=q->next;
        q->next=p;
    }
    pl->size++;
}
void DeleteList(int pos,ListEntry* pe,List*pl)
{
    ListNode*tmp,*q=pl->head;
    if(pos ==0)
    {
        *pe=pl->head->val;
        tmp=pl->head;
        pl->head=pl->head->next;
        free(tmp);
    }
    else
    {
        for(i=0;i<pos-1;i++)
            q=q->next;
        *pe=q->next->val;
        tmp=q->next;
        q->next=q->next->next;
        free(tmp);
    }
    pl->size--;
}

void TraverseList(List* pl,void (*Visit)(ListEntry))
{
    ListNode*pn=pl->head;
    while(pn)
    {
        Visit(pn->val);
        pn=pn->next;
    }
}
void RetrieveList(int pos,ListEntry *pe,List* pl)
{
    ListNode*q=pl->head;
    for(i=0;i<pos;i++)
        q=q->next;
    *pe=q->val;
}
void ReplaceList(int pos,ListEntry pe,List* pl);