#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    char s[100]="ABCDEFGHIJ";
    int count=0,i=0,k,j;
    char s1[10][10];
    s1[10][10]='\0';
    k=0;


    for(j=0; j<7; j++)
    {
        if((j%2)!=0)
        {


            for(i=0; i<3; i++)
            {
                if(k<10)
                {s1[i][j]=s[k];
                k++;}
            }
        }
        else
        {
            if(k<10)
            {s1[1][j]=s[k];
            k++;}
        }
    }
  for(i=0;i<7;i++)
  {
      for(j=0;j<3;j++)
      {

              if((s1[i][j]>=65)&&(s1[i][j]<=90))
              {printf("%c",s1[i][j]);}

      }
      printf("\n");
  }
    return 0;
}
