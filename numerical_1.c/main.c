#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  unsigned int a[1][2],b[2][2],c[2][1], i=0, j=0, k=0;
  printf("-=Program to Multiply two Matrices=-");


//--------------------------------------------------------------------

 printf("\nEnter the values of Matrix A: \n");

  for(i=0;i<1;i++)
    {
      for(j=0;j<2;j++)
        {
         // printf("\n");
          scanf("%d",&a[i][j]);
        }
     }
   printf("\nMatrix A: ");
   for(i=0;i<1;i++)
    {
      printf("\n");
      for(j=0;j<2;j++)
        {
          printf(" ");
          printf("%d",a[i][j]);
        }
     }
//----------------------------------------------------

printf("\nEnter the values of Matrix B: \n");
  for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
        {
         // printf("\n");
          scanf("%d",&b[i][j]);
        }
     }
   printf("\nMatrix B: ");
   for(i=0;i<2;i++)
    {
      printf("\n");
      for(j=0;j<2;j++)
        {
          printf(" ");
          printf("%d",b[i][j]);
        }
     }

//--------------------------------------------------------

  printf("\n\nMultiplication of matrices A and B is : \n\n");
  for(i=0;i<2;i++)
   {
     for(j=0;j<2;j++)
       {
          c[i][j]=0;
          for(k=0;k<1;k++)
            {
        c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
       }
   }
  printf("\nMatrix C (Resultant Matrix): ");
    for(i=0;i<2;i++)
    {
      printf("\n");
      for(j=0;j<1;j++)
        {
          printf(" ");
          printf("%d",c[i][j]);
        }
     }
printf("\n");
  return 0;
}
