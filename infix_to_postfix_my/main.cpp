#include <iostream>
#include <stack >
#include <string.h>
using namespace std;

int prec(char s)
{

    if(s=='^')
        return 5;
    else if((s=='*')||(s=='/'))
        return 4;
    else if((s=='+')||(s=='-'))
        return 2;
    else if(s=='(')
        return 1;

}

int main()
{
    char s[100];
    stack<char>s1;
    int flag=0;
    char s2[100],z;
    int i=0,j,k=0;
    cout<<"Enter the infix expression :"<<endl;
    cin>>s;
    while(s[i])
    {


        if(s[i]=='(')
        {
            s1.push(s[i]);

        }

        else if(isalnum(s[i]))
        {
            s2[k++]=s[i];
        }
        else if(s[i]==')')
        {
            while((s1.top()!='(')&&!s1.empty())
            {

                s2[k++]=s1.top();
                s1.pop();
            }
            s1.pop();

        }

        else if((s[i]=='*')||(s[i]=='/')||(s[i]=='+')||(s[i]=='-')||s[i]=='^')
        {


            while((prec(s1.top()))>prec(s[i])&&!s1.empty())
            {


                s2[k++]=s1.top();

                s1.pop();
            }
            s1.push(s[i]);
        }
        i++;

    }

    while(!s1.empty())
    {
        s2[k++]=s1.top();
        s1.pop();
    }
    s2[k]='\0';

    cout<<endl;
    cout<<"Postfix Expression :"<<endl;

    for(i=0; i<k; i++)
    {
        cout<<s2[i];
    }

    return 0;
}
