#include<stdio.h>
#include<malloc.h>


struct node
{
    int data;
    struct node *next;
};
int getCount(struct node * );

int main()
{
    struct node *start=NULL;
    struct node *newnode=NULL;
    int i=0;
    while( i!=-1 )
    {
        printf("Enter data\n");
        int n;
        scanf("%d",&n);
        newnode=(struct node *)malloc(sizeof(struct node ));
        newnode->data=n;
        newnode->next=NULL;
        if(start==NULL)
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
        printf("Enter a number except -1 to continue\n ");
        scanf("%d",&i);

    }
    struct node *list=NULL;
    list=start;
    printf("print list\n");
    while(list!=NULL)
    {
        printf("%d\n",list->data );
        list=list->next;
    }
   // int count=0;

   /* while( mid!=NULL )
    {
        count++;
        mid= mid->next;
    }
    */

   int count=getCount( start );
   printf("length of list %d\n",count);

   struct node *mid=NULL;
    mid=start;

    int j=0;
    mid=start;

        while( j!=count/2 )
        {
            mid=mid->next;
            j++;
        }
        printf("middle of list is %d", mid->data );




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
