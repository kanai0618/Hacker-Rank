#include <iostream>
#include<queue>
#include<stack>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    queue <int> q;
    stack <int> q1;
    q.push(1);
    q.push(2);
    cout<<q.front();
    cout<<q.back();
    q1.push(1);
    q1.push(2);
    q1.pop();
    cout<<q1.top();

    return 0;
}
