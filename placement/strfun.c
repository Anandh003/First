
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void stcpy(char *s,char *s1)
{
	/*char *temp;
	temp=(char *)malloc(strlen(s)*sizeof(char));*/
	for(int i=0;s[i]!='\0';i++)
		s1[i]=s[i];
	for(int i=0;s1[i]!='\0';i++)
		printf("\n%c",s1[i]);	
	//return s1;
}
int main()
{
	char str[100],str1[30];
	printf("Enter the string :");
	scanf("%[^\n]",str);
	puts(str);
	//puts(stringcopy(str,str1));
	stcpy(str,str1);
	printf("The copy of string is: %s\n",str1);
	return 0;
}