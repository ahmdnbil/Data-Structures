#ifndef D7198E06_938B_4BB1_8FD5_A71DD8FC9C73
#define D7198E06_938B_4BB1_8FD5_A71DD8FC9C73

#define MAXLIST 100
typedef int ListEntry;

typedef struct list
{
    int size;
    ListEntry entry[MAXLIST];
}List;

void CreateList(List*);
int ListEmpty(List*);
int ListFull(List*);
int ListSize(List*);
void DestroyList(List*);
void InsertList(int p,ListEntry e,List*pl);
void DeleteList(int p,ListEntry* pe,List*pl);
void TraverseList(List*,void (*Visit)(ListEntry));
void RetrieveList(int,ListEntry*,List*);
void ReplaceList(int,ListEntry*,List*);



#endif /* D7198E06_938B_4BB1_8FD5_A71DD8FC9C73 */
