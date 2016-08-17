#include <stdio.h>
#include <stdlib.h>


void rev(char *s)
{
    if(*s)
    {
        rev(s+1);
        printf("%c\n",*s);

        //break;
    }

}

int main()
{
    char s[100];
    gets(s);
    rev(&s);
}
