#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int count=0,len,start=0,end,no=0;
	char *st,*sample;
	sample=(char *)malloc(40*sizeof(char));
	st=(char *)malloc(400*15*sizeof(char));
	printf("\nEnter the paragraph:");
	gets(st);
	printf("Enter the sample word:");
	gets(sample);
	len=strlen(sample);
	for(int i=0;st[i]!='\0';i++)
	{
		if( (st[i+1]==' ' && st[i+2]!=' ') || st[i+1]=='\0')
		{
			end=i;
			if(end-start+1==len)
			{
				for(int j=0;j<len;j++)
					if(sample[j]==st[start+j])
						count++;
				if(count==len)
					no++;
				count=0;
			}
			start=i+2;
		}
	}
	printf("\nThe occurance of word is:%d",no);
	return 0;
}