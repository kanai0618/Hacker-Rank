#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,flag=0,i,k=0;


    char s[10000],s1[10000];

    scanf("%d",&n);

    while(n>0)
    {
        scanf("%s",s);
        strcpy(s1,s);
        for(i=strlen(s)-1;i>=0;i--)
        {
            s[k++]=s1[i];
        }


        for(i=1;i<strlen(s);i++)
        {
            if((abs(s[i]-s[i-1]))!=abs(s1[i]-s1[i-1]))
            {
                printf("Not Funny");
                flag=1;
                break;
            }
        }
        if(flag!=1)
        {
            printf("Funny");
        }
        printf("\n");
        flag=0;
        k=0;
        n--;


    }
    return 0;
}
