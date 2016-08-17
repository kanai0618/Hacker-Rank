#include <stdio.h>
#include <stdlib.h>

int  numberOfPaths(int m, int n)
{
   // If either given row number is first or given column number is first
   if (m == 1 || n == 1)
        return 1;

   // If diagonal movements are allowed then the last addition
   // is required.
   return  numberOfPaths(m-1, n) + numberOfPaths(m, n-1);
           // + numberOfPaths(m-1,n-1);
}

int main()
{
    printf("%d" ,numberOfPaths(2, 3));
    return 0;
}
