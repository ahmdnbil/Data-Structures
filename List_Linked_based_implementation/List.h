#ifndef ABA4A2F4_FA38_4CBB_9983_F715EEDA35AE
#define ABA4A2F4_FA38_4CBB_9983_F715EEDA35AE

#define ListEntry int
#define NULLPTR ((void*)0)
typedef struct listNode
{
    ListEntry val;
    struct listNode* next;
}ListNode;

typedef struct list 
{
    int size;
    ListNode* head;
}List;


void CreateList(List* pl);
int ListEmpty(List* pl);
int ListFull(List* pl);
int ListSize(List* pl);
void DestroyList(List* pl);
void InsertList(int pos,ListEntry e,List*pl);
void DeleteList(int pos,ListEntry* pe,List*pl);
void TraverseList(List* pl,void (*Visit)(ListEntry));
void RetrieveList(int p,ListEntry *pe,List* pl);
void ReplaceList(int p,ListEntry pe,List* pl);

#endif /* ABA4A2F4_FA38_4CBB_9983_F715EEDA35AE */
