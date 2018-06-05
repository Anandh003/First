#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,*ar,value,temp=0,temp1=0;
	printf("Enter N value:");
	scanf("%d",&n);
	ar=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
		scanf("%d",ar+i);
	value=*(ar+n-1);
	n=n-1;
	for(int i=0;i<n;i++)
	{
		temp=0;
		for(int j=i;j<n;j++)
		{
			temp=ar[j]+temp;
			for(int k=j+1;k<n;k++)
			{
				temp1=temp+ar[k];
				if(temp1==value)
					goto end;
			}
		}
		for(int j=i;j<n;j++)
		{
			temp=ar[i]+ar[j];
			for(int k=j+1;k<n;k++)
			{
				temp1=temp+ar[k];
				if(temp1==value)
					goto end;
			}
		}
	}
	printf("\nNO");
	goto end1;
	end:printf("\nYES\n");
	end1:return 0;
}