#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*typedef struct employee  //ONE EXMPLE
{
	char name[10];
	int rollno;
}emp;
int main()
{
	emp e;
	strcpy(e.name,"Anga");
	e.rollno=14;
	printf("Name :%s\n",e.name );
	printf("Roll No:%d\n",e.rollno );
}*/

typedef struct employe employee;
employe employee
{
	char name[10];
	int rollno;
}e;

int main()
{
	e.name="Anga";
	//employe employee e;
	//strcpy(e.name,"Anga");
	e.rollno=14;
	printf("Name :%s\n",e.name );
	printf("Roll No:%d\n",e.rollno );
}
