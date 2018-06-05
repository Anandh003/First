#include<stdio.h>
#include<math.h>
void fun(int q,int r,float t,float s)
{
	printf("%d\n",q+r);
	printf("%f\n",t+s);
}
int main(int argc, char const *argv[])
{
	int a,b;
	float x,y;
	printf("Enter the int num:");
	scanf("%d %d",&a,&b);
	printf("\n Enter float:");
	scanf("%f %f",&x,&y);
	void (*fun_p)(int,int,float,float)=fun;
	(*fun_p)(a,b,x,y);
	return 0;
}