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
    printf("Enter students details\n");
    scanf("%d %s %d",&s1.roll,s1.name,&s1.age);
    scanf("%d %s %d",&s2.roll,s2.name,&s2.age);
    scanf("%d %s %d",&s3.roll,s3.name,&s3.age);

    s1.next=&s2;
    s2.next=&s3;
    s3.next=NULL;
    struct student *p;
    p=&s1;
    while( p!=NULL )
    {
        printf("%d %s %d\n",p->roll,p->name,p->age);
        p=p->next;
    }





    return 0;
}
