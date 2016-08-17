#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void call(char s[10][10],int i,int j,char a[10][10],int p)
{
    int k,l;



    while(flag!=1)
    {


        for(l=0; l<3; l++)
        {

            if(a[j][l]=='e')
            {
                //s[i][p++]=l;
                printf("%d",l);


            }




        }
        if(l==3)
        {
            flag=1;
        }
        j=
    }


}
int main()
{


    char s[10][100],a[10][10];
    int i,j,p=0,k=0;


    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%s",&a[i][j]);
        }

    }
    for(i=0; i<3; i++)
    {
        printf("E closure \t%d\t",i);
        for(j=0; j<3; j++)
        {
            if(a[i][j]=='e')
            {
                printf("%d",j);
                call(s,i,j,a,p);
            }
        }
        printf("\n");
    }


    return 0;
}
