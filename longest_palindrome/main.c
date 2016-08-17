#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    printf("Hello world!\n");
    char s[100]="forgeekslskeegfor";int max=1,i,j,z,p,o;






    for(i=0;i<strlen(s)-1;i++)
    {
        z=i-1;
        j=i+1;
        //printf("%c%c\n",s[i],s[j]);

        while((s[z]==s[j]))
        {

            if((j-z)>max)
            {
                max=j-z;
                p=z;o=j;
            }
            j++;z--;

        }
    }
    printf("%d\n",max+1);

    printf("longest substring \n");

    for(i=p;i<=o;i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}
