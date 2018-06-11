//To print a string between two given string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int check(char *str,int last,int begin,char *word)
{
	int count=0;
	if(last-begin+1==strlen(word))
	{
		for(int j=0;word[j]!='\0';j++)
			if(word[j]==str[begin+j])
				count++;
		if(count==strlen(word))
			return 1;
	}
	return 0;
}
int main()
{
	char *string,*st,*en;
	int end=0,start=0,endstring=0,startstring=0;
	string=(char*)malloc(sizeof(char)*500);
	st=(char*)malloc(sizeof(char)*20);
	en=(char*)malloc(sizeof(char)*20);
	//scanf("%[^\n]",string);
	printf("Enter the Main String:");
	gets(string);
	printf("Enter the Start string:");
	gets(st);
	printf("Enter the end string:");
	gets(en);
	for(int i=0;string[i]!='\0';i++)
	{
		if( ( (string[i]<=122&&string[i]>=97) || (string[i]>=65&&string[i]<=90) ) &&
						 (string[i+1]>=123 || string[i+1]<65 || (string[i+1]>90 && string[i+1]<97)) )
		{
			end=i;
			if(check(string,end,start,st))
				endstring=i;
			else if(check(string,end,start,en))
				startstring=start;

		}
		else if( ( (string[i]<=122&&string[i]>=97) || (string[i]>=65&&string[i]<=90) ) &&
						 (string[i-1]>=123 || string[i-1]<65 || (string[i-1]>90 && string[i-1]<97)) )
	 		start=i;
	 }
	 //printf(" %d %d  ",endstring,startstring );
	 if(startstring<endstring)
	 	printf("\nInvalid u must give start word first and then end word");
	 	//for(j=startstring;j<=endstring;j++)
	 	//	printf("%c",string[j]);
	 else if(endstring==0)
	 	printf("\nThe start string is not present in main string");
	 else if(startstring==0)
	 	printf("\nThe endstring is not present in main string");
	  else
	  	for(int j=endstring+1;j<startstring-1;j++)
	 		printf("%c",string[j]);
	 	printf("\n");

}