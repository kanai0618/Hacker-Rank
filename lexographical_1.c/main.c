#include <stdio.h>
#include <stdlib.h>
void swap(char *i,char *j)
{
    char temp;
    temp=*i;
    *i=*j;
    *j=temp;
}

void per(char a[],int i,int n)
{  int j,k;
    if(i<=n)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",a[j]);
        }

        printf("\n");

    }
     for(j=i;j<=n;j++)
      {



        swap(a+i,a+j);
        per(a,i+1,n);
        swap(a+i,a+j);
      }






}
int main()
{
    printf("Hello world!\n");
    char a[]="abc";

    per(a,0,2);
    return 0;

}

