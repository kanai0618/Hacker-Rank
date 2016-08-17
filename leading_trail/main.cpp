#include <iostream>
#include <cstring>

using namespace std;


char s[10][100];


void leading(char l,int j)
{
    int i;
    for(i=0;i<5;i++)
    {
        if(s[i][0]==l&&i!=j)
        {
            if(s[i][3]>='A'&&s[i][3]<='Z')
            {
                leading(s[i][3],i);
            }
            else
            {
                cout<<s[i][3];
                break;
            }
        }
    }
}

int main()
{
    cout << "Hello world!" << endl;


    int i;


    for(i=0;i<5;i++)
    {
        cin>>s[i];
    }


    for(i=0;i<5;i++)
    {

       if((s[i][3]>='A'&&s[i][3]<='Z')&&(s[i][4]>='a'&&s[i][4]<='z'))
        {
            cout<<"Leading"<<s[i][0];
            cout<<s[i][4];

            leading(s[i][3],i);
            cout<<endl;
        }
        else if(s[i][3]>='A'&&s[i][3]<='Z')
        {
            cout<<"Leading"<<s[i][0];

            leading(s[i][3],i);
            cout<<endl;
        }
        else
        {
            cout<<"Leading"<<s[i][0]<<s[i][3]<<endl;
        }
    }
    return 0;
}
