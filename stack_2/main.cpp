#include <iostream>
#include<stack>
using namespace std;


int main()
{
    cout << "Hello world!" << endl;


    stack<int>s1;
    s1.push(2);
    s1.push('+');
    s1.push(1);
    s1.push('+');
    s1.push(3);
    s1.push('-');
    s1.push(4);


    int p,z;
    while(s1.size()!=1)
    {

        if(s1.top()=='+')
        {

            s1.pop();

            p=s1.top();


            s1.pop();

            s1.push(p+z);


        }
        else if(s1.top()=='-')
        {

            s1.pop();

            p=s1.top();


            s1.pop();

            s1.push(z-p);


        }
        else
        {
            z=s1.top();
            //cout<<int(z)<<endl;
            s1.pop();
        }
    }
    cout<<s1.top();


    return 0;
}
