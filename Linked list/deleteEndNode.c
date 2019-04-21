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

// delete node end of list

	printf("Eneter 0 for delete list end value\n");
	int n;
	scanf("%d",&n);
	if( n==0 )
	{
		struct node *ptr, *preptr;
		ptr=start;
		preptr=ptr;
		while( ptr->next != NULL )
		{
			preptr=ptr;
			ptr=ptr->next;

		}
		preptr->next=NULL;
		free(ptr);
	}
	list = start;
	printf("Now list is\n");
	while( list!=NULL)
	{
		printf("%d\n",list->data);
		list=list->next;
	}




return 0;

}
