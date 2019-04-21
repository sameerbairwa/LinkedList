#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
};
int getCount(struct node* );

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

// finding length of linked list

 /*   struct node *ptr=start;
    int count=0;

        while( ptr->next != NULL )
        {

             ptr=ptr->next;
             count++;

        }
        */

    printf("the length of linked list is %d\n",getCount( start ));

    struct node *mid;
    int count=getCount( start );
     int j=0;
    mid=start;
    if( count%2==0 )
    {
        while( j!=count )
        {
            mid=mid->next;
            j++;
        }
        printf("middle of list is %d", mid->data );

    }
    else
    {
        while( j!=count+1 )
        {
            mid=mid->next;
            j++;
        }
        printf("middle of list is %d", mid->data );
    }


    return 0;
}


int getCount(struct node* head )
{
    int count = 0;  // Initialize count
    struct node* ptr = head;  // Initialize pointer
    while (ptr != NULL)
    {
        ptr = ptr->next;
        count++;
    }
    return count;
}

