#include <iostream>
#include<algorithm>
#include<queue>
using namespace std;

int push1(int x)
{
    queue<int>q1;
    queue<int>q2;

    q2.push(x);
    while(!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }
    while(!q2.empty())
    {
        q1.push(q2.front());
        q2.pop();

    }
   cout<<q1.front();


}

int main()
{
    cout << "Hello world!" << endl;
      push1(1);
    cout<<endl;
    push1(2);
    cout<<endl;
    push1(3);
    cout<<endl;







    return 0;
}
