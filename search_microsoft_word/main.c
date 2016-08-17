#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int searchword(char s[10][100],int i,int j,int k,char *r,int l)
{
    int o,m;
    for(o=0;o<4;o++)
    {
        for(m=0;m<4;m++)
        {
            printf("%c",s[l][m]);
        }
        printf("\n");
    }
    if(k==0)
        return 1;
    if(i>4||j>4||l>9)
        return 0;

    if(s[i][j+1]==r[l])
        return searchword(s,i,j+1,k-1,r,l++);
    if(s[i+1][j]==r[l])
        return searchword(s,i+1,j,k-1,r,l++);
    if(s[i][j-1]==r[l])
        return searchword(s,i,j-1,k-1,r,l++);
    if(s[i-1][j]==r[l])
        return searchword(s,i-1,j,k-1,r,l++);
}

int main()
{
    printf("Hello world!\n");
    char s[10][100],r[20]="abcd";
    int l,m,i,j;

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {

            scanf("%s",&s[i][j]);

        }
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(s[i][j]=='a')
            {
                l=i;
                m=j;
            }
        }
    }


    printf("%d",searchword(s,l,m,strlen(r),r,1));

    return 0;
}
