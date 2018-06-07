#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int operation(char *s,int begin,int final)
{
    char temp[final-begin];
    int i;

    for(i=0;i<final-begin+1;i++)
    {
        temp[i]=s[begin+i];
       // t=(int)temp[i];
       if( (temp[i]>90 && temp[i]<=96) || (temp[i]<=65) || (temp[i]>122))
       {
         printf("\nEXe\n");
             return 0;
         }
    }
    temp[i]='\0';
    //puts(temp);
    for(int i=final,j=0;i>=begin;i--,j++)
        s[i]=temp[j];
    return 1;
}
int main() 
{
    int n,end,start=0;
    char *str;
    scanf("%d\n",&n);
   str=(char *)malloc((n+1)*sizeof(char));  
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if( (!((str[i+1]>=97 && str[i+1]<=122) || (str[i+1]>=65 && str[i+1]<=90) || (str[i+1]>=48 && str[i+1]<=57))) && ((str[i]>=97 && str[i]<=122) || (str[i]>=65 && str[i]<=90) || (str[i]>=48 && str[i]<=57) )) 
        {

            end=i;
            //printf("%d %d %d\n",i,start,end); 
            operation(str,start,end);
        }
        if((!((str[i-1]>=97 && str[i-1]<=122) || (str[i-1]>=65 && str[i-1]<=90) || (str[i-1]>=48 && str[i-1]<=57) ))&&((str[i]>=97 && str[i]<=122) || (str[i]>=65 && str[i]<=90) || (str[i]>=48 && str[i]<=57))) 
            start=i;
    }
    puts(str);

    return 0;
}
