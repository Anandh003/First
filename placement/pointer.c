#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	/* int a=50,**q;
 int *p=&a;
	q=&p;
	printf("The value is :%d \naddress of q is %p \nthe adderss of p is %p \n the adderss of a is %p\n",*(*q),&q,*q,&a);*/
	char *ptr="pskill.org";
	//ptr=(char *)malloc(20*sizeof(char));
	//ptr="pskill.org";
	printf("%c",++(*ptr++));
//printf("%c",*ptr);
}