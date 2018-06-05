#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0 || j==0 || i==(n-1) || j==(n-1))
				printf("*");
			else if( (j<(n/2)-i || j>(n/2)+i-1) && i<=(n/2)-1)
					printf(" ");
			else if( (i>((n/2)-1)) && ((i-(n/2)>=j) || (n-1-(i-(n/2))<=j)) )
				printf(" ");
			else
				printf("*");

		}
		printf("\n");
	}
}