#include <iostream>

using namespace std;
#include<list>

int main()
{
    cout << "Hello world!" << endl;;

    list<int>l1;
    l1.push_front(1);
    l1.push_front(2);
    for(list<int>::iterator i=l1.begin();i!=l1.end();i++)
    {
        cout<<*i;
    }
    return 0;
}
