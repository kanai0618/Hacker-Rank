#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int a[4]={1,2,3};

    sort(a,a+3);

    do
    {
        for(int i=0;i<3;i++)
        {
            cout<<a[i];
        }
       cout<<endl;
    }while(next_permutation(a,a+3));
    return 0;
}
