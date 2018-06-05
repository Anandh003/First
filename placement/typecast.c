#include<stdio.h>
#include<stdlib.h>
int main()
{
	char st[20],buf[10];
	int t;
	printf("Enter the string Number: ");
	scanf("%s",st);
	t=atoi(st);
	printf("atoi: %d\n",t);
	printf("atol: %ld\n",atol(st));
	printf("atof: %f\n",atof(st));
	sprintf(buf,"%d",t);
	printf("itoa: %s\n",buf);
}