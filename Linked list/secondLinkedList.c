#include<stdio.h>
struct student
{

    int roll;
    char name[20];
    int age;
    struct student *next;

};



int main()
{
    struct student s1,s2,s3;
    struct student *p=NULL;


    s1.next=&s2;
    s2.next=&s3;
    s3.next=NULL;

    printf("Enter students details\n");
    p=&s1;
     while( p!=NULL )
    {
        scanf("%d %s %d\n",&p->roll,p->name,&p->age);
        p=p->next;
    }


    p=&s1;
    while( p!=NULL )
    {
        printf("%d %s %d\n",p->roll,p->name,p->age);
        p=p->next;
    }





    return 0;
}
