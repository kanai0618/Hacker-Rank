#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
     int count=0,count1=0,p[100],i,k=0,n;
     char s[1000];

     scanf("%d",&n);


    while(n>0)
    {
        scanf("%s",s);
        for(i=0;i<strlen(s);i++)
        {
            if((s[i]=='A'&&s[i+1]=='B')||(s[i]=='B'&&s[i+1]=='A'))
            {
                count++;
            }
        }
        if(count==strlen(s)/2)
        {
            p[k++]=0;
        }
        else
        {
            for(i=0;i<strlen(s);i++)
            {
                if(s[i]==s[i+1])
                {
                    count1++;
                }
            }
            p[k++]=count1;
        }
        count=0;
        count1=0;
        n--;
    }
    for(i=0;i<k;i++)
        printf("%d",p[i]);
}
