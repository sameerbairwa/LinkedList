#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};

int main()
{
	int n=1,x;


	struct node *start=NULL;
	struct node *newNode=NULL;
	while( n!=-1)
	{
		newNode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the number:");
		scanf("%d",&x);
		newNode->data=x;
		newNode->next=start;
        start=newNode;


		struct node *ptrNode=NULL;
		ptrNode=start;

			while(ptrNode !=NULL)
			{
				ptrNode=ptrNode->next;
			}


		printf("\nEnter a number except -1 to cuntinue:");
		scanf("%d",&n);
	}
	printf("list is:\n");
	struct node *list=start;
	while( list !=NULL )
	{
        printf("%d\n",list->data);
        list=list->next;
	}




	return 0;
}
