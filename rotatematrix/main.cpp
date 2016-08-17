#include <iostream>

#define FOR(i,a)    for(int i = 0;i<a;i++)

#define REP(i,a,b)  for(int i = a;i<b;i++)



using namespace std;



void rotate(int [][100],int );



int main()

{

int initial_matrix[100][100];

int m;

cin>>m;

FOR(i,m)

FOR(j,m)
cin>>initial_matrix[j];

rotate(initial_matrix,m);

FOR(i,m)

{

FOR(j,m)    cout<<initial_matrix[j]<<" ";

cout<<"n";

}

return 0;

}



void rotate(int matr[][100],int m)

{

FOR(i,m/2)

{

REP(j,i,m-1-i)

{

int temp = matr[j];

matr[j] = matr[m-1-j];

matr[m-1-j] = matr[m-1-i][m-1-j];

matr[m-1-i][m-1-j] = matr[j][m-1-i];

matr[j][m-1-i] = temp;

}

}

}
