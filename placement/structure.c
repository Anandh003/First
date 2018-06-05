#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[20],roll[10],attendance[10];

};
int main()
{	
	int n;
	printf("Enter the number of student : ");
	scanf("%d",&n);
	struct student x[n];
	printf("The sizeof structure is %ld\n",sizeof(x));
	printf("Enter the name of %d student :",n);
	for(int i=0;i<n;i++)
		scanf("%s %s %s",x[i].name,x[i].roll,x[i].attendance);
	printf("The stored names are:");
	for(int i=0;i<n;i++)
		printf("\n%s \n%s \n%s \n",x[i].name,x[i].roll,x[i].attendance);
}