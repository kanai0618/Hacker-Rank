#include <iostream>
#include <stack>
#include <queue>


using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int i,x=1,count=0;


    for(i=1;i<=5;i++)
    {
        while(count<i)
        {
            if(i&x)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }

            x=x<<1;
            count++;
        }
        cout<<endl;
        count=0;
        x=1;
    }
    return 0;
}
