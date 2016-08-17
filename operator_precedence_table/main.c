#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int op(char s)
{
    if(s==')'||s=='('||s=='^'||s==',')
        return 1;
}
int main()
{
    char l[10][100],t[10][100],s[10][100],flag[100]= {0};
    char mat[100][100];

    int i,count=0,j,k=1,v=1,o=0,m;

    for(i=0; i<5; i++)
    {
        scanf("%s",s[i]);
    }

    for(i=0; i<2; i++)
    {
        scanf("%s",l[i]);
    }
    /*for(i=0; i<2; i++)
    {
        scanf("%s",t[i]);
    }*/
    for(i=0; i<5; i++)
    {
        for(j=0; j<strlen(s[i]); j++)
        {

            if(((s[i][j]>='a'&&s[i][j]<='z')||((s[i][j]==')'||s[i][j]=='('||s[i][j]==','||s[i][j]=='^'))))
            {

                count++;
                mat[0][k++]=s[i][j];

                flag[s[i][j]]=1;
            }
        }
    }
    mat[0][0]=' ';

    for(i=1; i<=count; i++)
    {
        mat[i][0]=mat[0][i];
    }


    for(i=0; i<5; i++)
    {
        for(j=0; j<strlen(s[i]); j++)
        {
            if(op(s[i][j])&&op(s[i][j+2])&&(s[i][j+1]>='A'&&s[i][j+1]<='Z'))
            {

                for(k=1; k<=count; k++)
                {

                    if(mat[k][0]==s[i][j])
                    {

                        for(m=0; m<2; m++)
                        {
                            if(l[m][0]==s[i][j+1])
                            {

                                for(v=1; v<=count; v++)
                                {
                                    while(l[m][o]!=NULL)
                                    {
                                        //printf("%c",mat[m][o]);
                                        if(mat[0][v]==l[m][o])

                                        {
                                            mat[k][v]='<';
                                        }
                                        //v++;
                                        o++;

                                    }
                                    o=1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for(i=0; i<=count; i++)
    {
        for(j=0; j<=count; j++)
        {
            if(mat[i][j])
            {
                printf("%c\t",mat[i][j]);
            }
        }

        printf("\n");
        printf("\t");
    }



    return 0;
}
