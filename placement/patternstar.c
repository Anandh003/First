#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{ 
		for(int j=0;j<n-i-1;j++)
			printf(" ");

		for(int k=0;k<((2*i)+1);k++)
		{
			if(k%2==0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}