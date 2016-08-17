# include <stdio.h>

/* Function to swap values at two pointers */
void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/* Function to print permutations of string
   This function takes three parameters:
   1. String
   2. Starting index of the string
   3. Ending index of the string. */
void permute(char *a, int i, int n)
{
   int j,k;
   //printf("%d",i);



   if(i<=n)
   {
        for(k=0;k<=i;k++)
   {printf("%c", a[k]);}printf("\n");

        for (j = i; j <= n; j++)
       {
          swap((a+i), (a+j));
          permute(a, i+1, n);
          swap((a+i), (a+j)); //backtrack
       }
   }
if(i<0)
   {
       permute(a, i+1, n);
   }
}
/* Driver program to test above functions */
int main()
{
   char a[] = "ABC";
   permute(a, -1, 2);
   getchar();
   return 0;
}
