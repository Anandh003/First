#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int rev(char *name,int x)
{
	if(x<=0)
		return 1;
	else 
	{
		printf("%c",name[x-1]);
		return rev(name,x-1);
	}
}
int main()
{
	char *name;
	int l;
	name=(char *)malloc(100*sizeof(char));
	printf("Enter the Sentence\n");
	scanf("%[^\n]",name);
	l=strlen(name);
	rev(name,l);
	printf("\n");
}