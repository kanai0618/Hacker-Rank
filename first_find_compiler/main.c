#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[20][200],temp[100];
    int flag=0,i=0,k,l,flag1=0;


    while(flag!=1)
    {
        scanf("%s",s[i]);
        i++;
        printf("Want more");
        scanf("%d",&flag);

    }

    for(k=0; k<i; k++)
    {
        for(l=k+1; l<i; l++)
        {
            if(s[k][0]>s[l][0])
            {
                strcpy(temp,s[k]);
                strcpy(s[k],s[l]);
                strcpy(s[l],temp);
            }
        }
    }

    for(k=0; k<i; k++)
    {
        printf("%s\n",s[k]);
    }
    for(k=0; k<i; k++)
    {
        if((s[k][0]=='S'))
        {
            if(flag1!=1)
            {

                printf("$");
                flag1=1;
            }
            if(s[k][3]>='a'&&s[k][3]<='z')
            {
                printf("%c\n",s[k][3]);
            }
            else
            {
                printf("First(%c)\n",s[k][3]);
            }
            while(s[k]!=NULL)
            {
                while(s[k][l]!='|')
                {
                    k++;
                }
            }
        }
    }


    return 0;
}
