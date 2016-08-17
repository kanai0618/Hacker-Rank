#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int substring(char *s,char *s1)
{
     printf("%s",s);
     printf("%s",s1);
     int i,j,k=0,count=0,z,flag=0,count1=0;
    for(i=0;i<=strlen(s);i++)
    {
       z=i;
        while(s[z]==s1[k])
        {
            z++;k++;count++;
        }
        if(count==strlen(s1))
            {
                 printf("present\n");count1++;flag=1;count=0;}
        else
        {
            k=0; count=0;
        }
    }
    printf("%d",count1);
    if(flag!=1)
    {
        printf("Not present");
    }

   return count1;
}

int main()
{
    printf("Hello world!\n");



    char s[1000]="SATYAJITABCSATYAABCSATYAA",w[100];int flag=0,max=1,l=0,k,i,j;
    //char s1[100]="SATYAP";

    for(i=0;i<strlen(s);i++)
    {
        k=i+1;
        while(flag!=1)
        {
            for(j=i;j<k&&k<strlen(s);j++)
            {
                w[l++]=s[j];
            }
            if(substring(s,w)>max)
            {
                max=substring(s,w);
                l=0;
            }
            else
            {
                l=0;k++;
            }
            if(k==strlen(s))
            {
                flag=1;
            }
        }
        flag=0;
    }
    printf("%d",max);




    return 0;
}
