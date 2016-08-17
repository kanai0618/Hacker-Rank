#include <iostream>
#include <cstring>

using namespace std;

void fun(char s[10][100],int j)
{
    int k,i,count=0;
    int flag=0;


    while(flag!=1)

    {
        for(i=0; i<4; i++)
        {
            if((s[j][i]=='e'))
            {
                cout<<i;


            }
            else
            {
                count++;
            }

        }
        if(count==4)
        {
            flag=1;
        }
        else
        {
            j=i;
        }
        count=0;

    }

}



int main()
{
    cout << "Hello world!" << endl;

    char s[10][100];
    int i,j,count=0;


    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            cin>>s[i][j];
        }
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(s[i][j]=='e')
            {
                cout<<"closure"<<i<<" "<<j;
                fun(s,j);
            }
            else
            {
                count++;
            }
        }
        if(count==4)
        {
            cout<<"NULL";
        }
        count=0;
        cout<<endl;

    }


    return 0;
}
