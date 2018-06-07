#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int operation(char *s,int begin,int final)
{
    char temp[25];
    int t;
    for(int i=0;i<final-begin+1;i++)
    {
        temp[i]=s[begin+i];
        t=(int)temp[i];
       if( (t>90 && t<=96) || (t<=65) || (t>122))
             return 0;
    }
    for(int i=final,j=0;i>=begin;i--,j++)
        s[i]=temp[j];
    
    puts(temp);
    return 1;
}
int main() 
{
    int n,end,start=0;
    char *str;
    scanf("%d\n",&n);
   str=(char *)malloc((n+1)*sizeof(char));  
    //str=(char *)malloc(sizeof(char)*(n+1));
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if( (!((str[i+1]>=97 && str[i+1]<=122) || (str[i+1]>=65 && str[i+1]<=90))) && ((str[i]>=97 && str[i]<=122) || (str[i]>=65 && str[i]<=90))) 
        {

            end=i;
              printf("%d %d %d\n",i,start,end); 
            operation(str,start,end);
            start=i+2;

        }
    }

    return 0;
}
