#include <iostream>
#include<string.h>
using namespace std;


template<class t>
void cmp(t x[],t y[])
{
    int count=0;
    for(int i=0;x[i];i++)
    {
        if(x[i]==y[i])
        {
            count++;
        }
    }
    if(count==strlen(x))
    {
        cout<<"hey";
    }
}

int main()
{
    cout << "Hello world!" << endl;
    char s[20]="abc";
    char y[20]="abc";
    cmp(s,y);
    int x[10]={9};
    int z[10]={9};
    cmp(x,z);
    return 0;
}
