#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(((n/2)+1==j) && (i==1))
				printf("*");
			else if(i==(n/2)+1)
			{
				if(j==1)
					printf("*");
				else if(j==n)
					printf("*");
				else 
					printf(" ");
			}
			else if(i==n)
			{
				if(j==(n/4)+1 ||j==n-(n/4))
					printf("*");
				else
					printf(" ");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}