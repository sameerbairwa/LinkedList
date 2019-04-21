#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    int position;
    struct node *next;

};
struct node * insert( struct node * );
struct node *Display( struct node * );
struct node *Search( struct node * );
void secondLargest(struct node * );
struct node *reverse( struct node * );
int main()
{
    struct node *start=NULL;

    start=insert( start );
    Display( start );
    secondLargest(start);
    Search( start );
    printf("reverse of linked list\n ");
    reverse( start );


    return 0;
}

struct node * insert( struct node *start )
{
    struct node *newnode=NULL;
    int i=0;
    while( i!=10 )
    {
        printf("Enter data\n");
        int n;
        scanf("%d",&n);
        newnode=(struct node *)malloc(sizeof(struct node));

        newnode->data=n;
        newnode->position=i+1;
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
        i++;
    }
    return start;
};

struct node *Display( struct node *start )
{
    struct node *list=NULL;
    list=start;
    while( list!=NULL )
    {
        printf("%d\n",list->data);
        list=list->next;

    }
    return start;
};

struct node *Search( struct node *start )
{
    struct node *ptr=start;
    printf("Enter the number which you want to search\n");
    int val;
    scanf("%d",&val);
    printf("the position of %d is",val );
    while( ptr!=NULL )
    {
        if( val==ptr->data )
        {
            printf("%d ",ptr->position);
        }
        ptr=ptr->next;
    }

    return start;
};


struct node *reverse( struct node *start )
{
    struct node *current=NULL, *next=NULL, *pre=NULL;
    current=start;
    while( current!=NULL )
    {
        next=current->next;
        current->next=pre;
        pre=current;
        current=next;
    }
    start=pre;

    return start;
};

void secondLargest(struct node *start)
{
    struct node *ptr;
    ptr=start;
    int max=start->data;
    int secondMax;

    while( ptr->next!=NULL )
    {
        ptr=ptr->next;
        if( max < ptr->data )
        {
            secondMax=max;
            max=ptr->data;

        }
        else if( secondMax < ptr->data ){

            secondMax=ptr->data;
        }


    }
    printf("second Largest is %d\n", secondMax);
    return ;
};

