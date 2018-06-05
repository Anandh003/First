#include<stdio.h>
#include<string.h>
int main()
{
	int l,b;
	printf("Enter the length and breath of parellogram: ");
	scanf("%d %d",&l,&b);
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<b;j++)
		{
			if(i==0&&j==0)
				printf("*");
			else if(i==l-1&&j==1)
				printf("*");
			else if(i==0&&j==b-2)
				printf("*");
			else if(i==l-1&&j==b-1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}