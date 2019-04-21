#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;

};

int main()
{
	int i=0;
	struct node *newnode=NULL, *start=NULL;
	while( i!=-1)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		int n;
		printf("Enter data\n");
		scanf("%d",&n);
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
	printf("printing linked list\n");
    struct node *list;
    list=start;
    while( list!=NULL )
    {
        printf("%d\n",list->data);
        list=list->next;
    }



    printf("Enter 0 for delete linked list\n");
	int num;
	scanf("%d",&num);
	if( num==0 )
	{
		struct node *ptr=start;
		while( ptr!=NULL )
		{
			ptr=start;
			printf("We are deleting %d \n",ptr->data);
			start=ptr->next;
			free(ptr);

		}

	}
    return 0;
}
