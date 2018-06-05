#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char a[100];
	char *p;
	int n;
	printf("Enter the string:");
	scanf("%[^\n]",a);
	p=a;
	n=strlen(a);
	printf("\nThe result is:  ");
	while((p-a)<=n)
	{
		//printf("%p\n",a);
		//printf("%p\n",p);
		printf("%c",*p);
		p=p+5;
	}
	printf("\n");
}