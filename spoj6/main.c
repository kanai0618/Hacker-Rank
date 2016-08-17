#include <cstdio>
#include <algorithm>
using namespace std;

pair< long int, long int > ar[100000];

inline bool comp(const pair< int, int > &a, const pair< int, int > &b) {
 return (a.first == b.first) ? a.second < b.second : a.first < b.first;
}

int main() {
 long int t, i, n, l,r,c=1,u;
 scanf("%ld", &t);
 while(t--) {
  u=0;
  scanf("%ld %ld", &r,&n);
  for(i = 0; i < n; i++)
  scanf("%ld %ld", &ar[i].first, &ar[i].second);
  sort(ar, ar + n, comp);
  for(i=0;i<n;i++){
   if(ar[i].first==ar[i+1].first){
    if(ar[i].second==ar[i+1].second){
     u=1;
     break;
    }
   }
  }
  if(u==1){
   printf("Scenario #%ld: impossible\n",c);
  }else{
   printf("Scenario #%ld: possible\n",c);
  }
  c++;
 }
 return 0;
}#include<stdio.h>

int main()
{




    int x,a[100000][2]={0},k,m,p,o,flag,i=1;
    int n;
    scanf("%d",&n);

    while(n>0)
    {
        scanf("%d%d",&k,&m);
        while(m>0)
        {

        scanf("%d%d",&p,&o);
        if(a[p][1]!=o)
           {
               a[p][1]=o;

           }
            else
            {
                flag=1;
            }
            m--;
        }
        if(flag==1)
        {
            printf("Scenario # %d : impossible",i);
            printf("\n");
            i++;
        }
        else
        {

            printf("Scenario # %d : possible",i);
            printf("\n");
            i++;
        }
            n--;
    }



}

