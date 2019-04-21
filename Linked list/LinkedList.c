#include<stdio.h>
#include<malloc.h>
struct number
{
    int data;
    struct number *next;
};
int main()
{
    int i=1;
    struct number *start=NULL;
    struct number *newNode=NULL;

    while( i != -1 )
    {
        newNode=( struct number * )malloc(sizeof(struct number ));
        int n;

        printf("Enter data\n");
        scanf("%d",&n);

        newNode->data=n;
        newNode->next=NULL;

        if( start==NULL )
        {
            start=newNode;
        }
        else
        {
            struct number *ptr=NULL;
            ptr=start;

            while( ptr->next!=NULL )
            {
                ptr=ptr->next;
            }

            ptr->next=newNode;

        }

        printf("Enter a number except -1 to continue\n");
        scanf("%d",&i);
    }

    printf("print list\n");

    struct number *list=NULL;
    list=start;

    while( list!=NULL )
    {
        printf("%d\n",list->data);
        list=list->next;

    }



    return 0;
}
