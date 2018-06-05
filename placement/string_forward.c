#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void rev(char *str,char *s)
{
	int len,j,i;
	len=strlen(str);
	for(i=len-1,j=0;i>=0;i--,j++)
		s[j]=str[i];
	s[j]='\0';
	//puts(s);

}
void wordrev(char *s,int st,int en)
{
	int i,j;
	char t[en-st+1];
	for(i=0;i<=(en-st);i++)
		t[i]=s[en-i];
	t[i]='\0';
	//printf("In fun: ");
	//puts(t);
	for(i=st,j=0;i<=en;i++,j++)
	{	
		s[i]=t[j];
		//printf("\n Replcing i= %d st=%d en= %d t[%d]=%c s[%d]=%c\n",i,st,en,i,t[i],i,s[i]);
	}
}
int main()
{
	char *str,*s;
	int start=0,end;
	str=(char *)malloc(100*sizeof(char));
	s=(char *)malloc(100*sizeof(char));
	printf("Enter the string:");
	scanf("%[^\n]",str);
	rev(str,s);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i+1]==' ' || s[i+1]=='\0')
		{
			end=i;
			//puts(s);
			//printf("   st=%d  en=%d\n",start,end);
			wordrev(s,start,end);
			start=i+2;
		}

	}
	printf("\nThe output is: ");
	puts(s);
	return 0;
}