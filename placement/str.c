#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20],str3[20];
	printf("Enter the string 1 :");
	//scanf("%[^\n]",str1);
	gets(str1);
	printf("Enter string 2 :");
	//scanf("%[^\n]",str2);
	gets(str2);
	printf("\nThe Length of first string is: %ld",strlen(str1));
	printf("\nThe Length of second string is: %ld",strlen(str2));
	printf("\nThe copy of first string is: ");
	strcpy(str3,str1);
	printf("%s",str3);	
	printf("\nThe comparision of two string is %d",strcmp(str1,str2));
	strcat(str1,str2);
	printf("\nConcatenation of two string is: %s",str1);
	printf("\nOccurence of string is : %s",strstr(str1,str2));
	printf("\nOccurence of char is : %ld\n",strchr(str1,'n')-str1);
	//strrev(str1);
	//printf("\nThe reverse of string is: %s",str1);
	//printf("\nThe lower case of string 1 is : %d  %s",strlwr(str1),str1);
	return 0;
}