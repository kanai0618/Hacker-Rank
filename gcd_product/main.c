#include<stdio.h>

int count=0;

void recursive(int x,int y,int n,char s[])
{ int i;
    if(y<=n&&count!=10)
    {
        for(i=x;i<=y;i++)
        {
            printf("%c",s[i]);



        }
        count++;

        printf("\n");
    }
    if(y<=n&&x<=n)
    {


    recursive(x,y+1,n,s);
    y=x+1;

     recursive(x+1,y,n,s);


    }

}



int main()
{
    char s[]={'a','b','c','d'};
    recursive(0,0,3,s);
}

