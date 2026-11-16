#include<stdio.h>
struct node{
    int info;
    struct node * next;//Self referential pointer.
};
struct node * start=NULL;

void traverse(struct node *);

int main()

{
    struct node A,B,C,D;
    A.info=10;
    B.info=20;
    C.info=30;
    D.info=40;

    start=&A;
    A.next=&B;
    B.next=&C;
    C.next=&D;
    D.next=NULL;

    traverse(start);
    return 0;
}
void traverse(struct node * ptr)
{
    if(ptr==NULL)
    printf("\nLinked List is empty.");
    else
    {
        while(ptr!=NULL)
        {
            printf("[%d]->",ptr->info);
            ptr=ptr->next;
        }

    }
    printf("NULL");
}