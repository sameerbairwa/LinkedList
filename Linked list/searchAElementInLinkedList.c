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

    return 0;
}
