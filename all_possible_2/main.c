#include<stdio.h>

#define MAX_LENGTH 32

int number[MAX_LENGTH];
void int_buffer_rec(int n, int length) {
    int i;
    if(n > 0) {
        number[4-n] = 0;
        int_buffer_rec(n - 1, length);
        number[4-n] = 1;
        int_buffer_rec(n - 1, length);
    }
    else {
        for(i = 0; i < length; ++i) {
            printf("%u", number[i]);
        }
        printf("\n");
    }
}
int main() {
    int_buffer_rec(4, 4);
    printf("\n");
    return 0;
}
