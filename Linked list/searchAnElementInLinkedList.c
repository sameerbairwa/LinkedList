#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
};
int search( struct node ,int   );

int main()
{
    int i=0;
    struct node *start=NULL, *newnode=NULL;
    while( i!=-1 )
    {
        newnode=(struct node *)malloc(sizeof(struct node) );
        int n;
        printf("Enter a data \n");
        scanf("%d",&n);
        newnode->data=n;
        newnode->next=NULL;

        if( start== NULL )
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
// print list
    struct node *list=NULL;
    list= start;
    while( list!=NULL )
    {
        printf("%d\n",list->data);
        list=list->next;
    }
// searching an element

    printf("Enter the number which you want search \n");
    int n;
    scanf("%d",&n);
    int n1= searching( start, n );

    if( n1 == 0 )
    {
        printf("the number %d is not in the list\n",n);
    }
    if( n1 == 1 )
    {
        printf("the number %d is  in the list\n",n);
    }

    return 0;
}

int searching( struct node *start, int val )
{
    struct node *ptr=start;

        while( ptr->next!=NULL )
        {
            if( ptr->data==val )
            {
                return 1;
            }

            ptr=ptr->next;
        }
        return 0;

}

