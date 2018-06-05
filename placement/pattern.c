#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	int count;
	char *n,*rev;
	n=(char*)malloc(20*sizeof(char));
	rev=(char*)malloc(20*sizeof(char));
	there:scanf("%s",n);
	count=strlen(n);
	for (int i = count-1,j=0; i >=0; i--,j++)
	{
		rev[i]=n[j];
	}
	//puts(rev);
	//printf("%d\n",count);
	if(!(count&1))
	{
		printf("The string should have odd number of lettrs\n");
		goto there;
	}
	for (int i = 0; i <count; i++)
	{
		for(int j=0;j<count;j++)
		{
			if((i==j))
				printf("%c",n[i]);
			else if(j+i==(count-1))
				printf("%c",rev[i]);
			else
				printf(" ");
		}
		printf("\n");
	}
}
