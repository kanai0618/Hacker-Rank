#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void quickSort(int ar_size, int *  ar) {


    int h[256]={0},i;


    for(i=0;i<ar_size;i++)
    {
        h[ar[i]]++;
    }
    for(i=0;i<127;i++)
    {
        if(h[i]>=1)
        {
            printf("%d",i);
        }
    }


}
int main(void) {

   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
   scanf("%d", &_ar[_ar_i]);
}

quickSort(_ar_size, _ar);

   return 0;
}
