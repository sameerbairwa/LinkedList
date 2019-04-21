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
// add data beginning of list

	int num;
	printf("For add more data beginning  enter 0 \n");
    scanf("%d",&num);

	if( num==0 )
	{
		int num2;
		newnode=( struct node *)malloc( sizeof( struct node ) );
		printf("Enter data \n");
		scanf("%d",&num2);
		newnode->data=num2;
		newnode->next=start;
		start=newnode;

		printf("Now list is \n");
		list =start;
		while( list!=NULL )
	     {
		     printf("%d\n",list->data);

		     list=list->next;
	      }
	}
	else
        {
            printf("You did not want add some data\n");
        }

// add data end of list

	printf("Enter 0 for add data in end of list\n ");
	int num1;
	scanf("%d",&num1);
	if( num1==0 )
	{
	    int n;
	    newnode=( struct node *)malloc( sizeof (struct node ) );
	    printf("Enter data\n");
	    scanf("%d",&n);
	    newnode->data=n;
	    newnode->next=NULL;
	    struct node *ptr;
	    ptr=start;
	    while( ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;

        list=start;
        printf("Now list is \n ");
        while( list!=NULL )
        {
            printf("%d\n",list->data);
            list=list->next;
        }
	}
	else
    {
        printf("You did not want add data\n");
    }

// add data before some data

    printf("Enter 0 for add data before value\n");
    int num2;
    scanf("%d",&num2);
    if( num2==0 )
    {
        int n,val;
        printf("Enter data which  before you add \n");
        scanf("%d",&val);
        struct node *ptr, *preptr;
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter data \n");
        scanf("%d",&n);
        newnode->data=n;
        ptr=start;
        while( ptr->data=!val )
        {
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=newnode;
        newnode->next=ptr;
    }
    else{
             printf("You did not want add data\n");
    }

    list=start;
    while( list!=NULL )
    {
        printf("%d\n",list->data);
        list=list->next;
    }

// add data after some value

    printf("Enter 0 for add data value\n");
    int num3;
    scanf("%d",&num3);
    if( num3==0 )
    {
        int n,val;
        printf("Enter data which  before you add \n");
        scanf("%d",&val);
        struct node *ptr, *preptr;
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter data \n");
        scanf("%d",&n);
        newnode->data=n;
        ptr=start;
        preptr=ptr;
        while( preptr->data=!val )
        {
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=newnode;
        newnode->next=ptr;
    }
    else{
             printf("You did not want add data\n");
    }

    list=start;
    while( list!=NULL )
    {
        printf("%d\n",list->data);
        list=list->next;
    }

// delete node end of list

	printf("Enter 0 for delete list end value\n");
	int num4;
	scanf("%d",&num4);
	if( num4==0 )
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

// delete  first node  of list

	printf("Eneter 0 for delete  list first value\n");
	int num5;
	scanf("%d",&num5);
	if( num5==0 )
	{
		struct node *ptr;
		ptr=start;
		start=ptr->next;
		free(ptr);
	}
	list = start;
	printf("Now list is\n");
	while( list!=NULL)
	{
		printf("%d\n",list->data);
		list=list->next;
	}

// delete a node of list

	printf("Enter 0 for delete a  value\n");
	int n;
	scanf("%d",&n);
	if( n==0 )
	{
        printf("Enter value\n");
        int val;
        scanf("%d",&val);
        struct node *ptr,*preptr;
        ptr=start;
        if( ptr->data==val )
        {
            start=ptr->next;
            free(ptr);
        }
        else
        {

            preptr=ptr;
            while( ptr->data!=val )
            {
                preptr=ptr;
                ptr=ptr->next;
            }
            preptr->next=ptr->next;
            free(ptr);
        }

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
