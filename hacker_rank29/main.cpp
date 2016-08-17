#include <iostream>
#include<string.h>
using namespace std;
#include<stack>

int main()
{


    int count=0,i,n;
    char s[10000];
    cin>>n;

    stack<char>s1;
    while(n>0)
    {
cin>>s;

    s1.push(s[0]);
    for(i=1;i<strlen(s);i++)
    {
        if(s1.top()==s[i])
        {
            count++;
        }
        else
        {
            s1.push(s[i]);
        }
    }
    cout<<count;
    count=0;
    while(!s1.empty())
    {
        s1.pop();
    }

    n--;
    }
    return 0;
}

