#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void palin(char *a)
{
    int i,j,k,count=0,flag;
    for(i=0,j=strlen(a)-1;i<strlen(a)/2&&j>=strlen(a)/2;i++,j--)
    {
        if(a[i]==a[j])
        {
            count++;
        }
    }
    if(count==strlen(a)/2)
      {printf("YES");
        break;
      }






}
void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *a, int i, int n)
{
   int j,count=0,z,flag=0;
   if (i == n)
     {printf("%s\n", a);

     palin(a);



     }
   else
   {
        for (j = i; j <= n; j++)
       {
          swap((a+i), (a+j));
          permute(a, i+1, n);
          swap((a+i), (a+j)); //backtrack
       }
   }

}
int main() {

    char arr[100001];
    scanf("%s",arr);
    permute(arr,0,strlen(arr)-1);
    return 0;
}
