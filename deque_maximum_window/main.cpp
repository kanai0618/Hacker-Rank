#include <iostream>
#include <queue>
#include <stack>


using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int a[100]={12,1,78,90,57,89,56},k=3,n=7;
    deque<int>q;
    int i;
    cout<<"maximum of all windows of k size"<<endl;
    for(i=0;i<k;i++)
    {
        while(!q.empty()&&a[i]>a[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);

    }
    for(i=k;i<n;i++)
    {
        cout<<a[q.front()]<<endl;
        while(!q.empty()&&q.front()<=i-k)
        {
            q.pop_front();
        }
        while(!q.empty()&&a[i]>a[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);

    }
    cout<<a[q.front()];


    return 0;
}
