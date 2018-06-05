#include<stdio.h>
#include<stdlib.h>
union student
{
	char name[20],roll[10],attendance[10];

};
int main()
{	
	int n;
	printf("Enter the number of student : ");
	scanf("%d",&n);
	union student x[n];
	printf("The size of union is:%ld %p",sizeof(x),x);
	printf("\nEnter the name of %d student :",n);
	for(int i=0;i<n;i++)
	{	
	scanf("%s",x[i].name);
	printf("\nThe name is %s\n",x[i].name);
	scanf("%s",x[i].roll);
	printf("\nThe roll number is %s\n ",x[i].roll);
	scanf("%s",x[i].attendance);
	printf("\nThe attendance is %s \n",x[i].attendance );
	}
}
