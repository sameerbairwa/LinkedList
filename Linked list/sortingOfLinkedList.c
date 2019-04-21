#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *newnode=NULL,*start=NULL;
    int i=0;
    while( i!=-1 )
    {
        printf("Enter data\n");
        int n;
        scanf("%d",&n);

        newnode=(struct node * )malloc(sizeof( struct node ));
        newnode->data=n;
        newnode->next=NULL;
        if( start==NULL )
        {
            start=newnode;

        }
        else
        {
            struct node *ptr=NULL;
            ptr=start;
            while( ptr->next!=NULL )
            {
                ptr=ptr->next;

            }
            ptr->next=newnode;
        }
        printf("Enter a number except -1 to continue\n");
        scanf("%d",&i);
    }
    struct node *list=NULL;
    list=start;

    printf("list printing\n");

    while( list!=NULL )
    {
        printf("%d\n",list->data);
        list=list->next;

    }

    struct node *ptr1=NULL,*ptr2=NULL;
    ptr1=start;
    int temp;
    while( ptr1->next!=NULL )
    {
        ptr2=ptr1->next;
        while( ptr2!=NULL )
        {
            if( ptr1->data > ptr2->data )
            {
                temp=ptr1->data;
                ptr1->data=ptr2->data;
                ptr2->data=temp;
            }
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }

    printf("shorted list\n");

    list=start;

     while( list!=NULL )
    {
        printf("%d\n",list->data);
        list=list->next;

    }




    return 0;
}
