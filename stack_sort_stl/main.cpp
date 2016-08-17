#include <iostream>
#include <stack>
#include <queue>
#include <list>

using namespace std;


int main()
{


   stack<int> li;

  for (int nCount=0; nCount < 6; nCount++)
        li.push(nCount);

    stack <int>::iterator it;
    it = li.begin();

    while (it != li.end())
    {
        cout << *it << " ";
        it++;
    }


    cout << endl;
}
