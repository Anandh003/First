#include<stdio.h>
#include<math.h>
int main()
{
	int a[10],b[10],*q,*p,c[5],*r,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("\nEnter the first array %d elements: ",n);
	p=a;
	for(int i=0;i<n;i++)
		scanf("%d",p+i);
	printf("\nEnter the second array %d elements: ",n);
	q=b;
	for(int i=0;i<n;i++)
		scanf("%d",q+i);
	r=c;
	printf("\nThe result is:");
	for(int i=0;i<n/2;i++)
	{
		*(r+i)=*(a+((2*i)+1))+*(b+(2*i));
		printf("\n%d",*(r+i));
	}
	printf("\n");
	return 0;
}