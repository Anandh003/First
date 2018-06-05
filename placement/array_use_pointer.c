#include<stdio.h>
#include<math.h>
int main()
{
	long int a[10],*p;
	int *p;//type compatability mismatch
	printf("Enter the 10 elements:");
	for(int i=0;i<10;i++)
		scanf("%ld",&a[i]);
	for(int i=0;i<10;i++)
		printf("The address of %ld is %p\n",a[i],&a[i]);
	p=a;
	for(long int i=0;i<10;i++)
		printf("The values %ld element is %d and address is %p\n",i,*(p+i),p+i);

}