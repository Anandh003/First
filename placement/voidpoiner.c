#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	int a;
	char b[5]="Anga";
	float f;
	printf("Enter the numbers:");
	scanf("%d %f",&a,&f);
	void *p=&a;
	printf("\nInterger: %d",*(int*)p);
	p=&f;
	printf("\nFloat: %f",*(float*)p);
	printf("\nFloat in int : %d",(int)*(float*)p);
	p=b;
	printf("\ncharacter is: %s\n",b);
	printf("\ncharacter is: %s\n",(char*)p);
	return 0;
}