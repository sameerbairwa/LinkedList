#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int i=1;

	struct node *start=NULL;
	struct node *newnode=NULL;

// creating linked list

	while( i!=-1)
	{
		newnode=( struct node * )malloc(sizeof( struct node ));
		int n;

		printf("Please Enter data\n");
        scanf("%d",&n);

		newnode->data=n;
		newnode->next=NULL;

		if( start==NULL )
		{

			start = newnode;
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

	printf("Enter a number except -1 to continue  \n");
	scanf("%d",&i);

	}
	// printing list

	printf("print list \n");

	struct node *list;
	list= start;

	while( list!=NULL )
	{
		printf("%d\n",list->data);

		list=list->next;
	}

// reverse of linked list

    struct node *next=NULL, *pre=NULL, *current=NULL;
    current= start;
    while( current!=NULL )
    {
         next=current->next;
         current->next=pre;
         pre=current;
         current=next;
    }
    start=pre;

    list= start;
    printf("reverse list\n");

	while( list!=NULL )
	{
		printf("%d\n",list->data);

		list=list->next;
	}





		return 0;
}

