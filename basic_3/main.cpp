#include <iostream>
#include<stdio.h>
#include<vector>
#include<queue>
#include<limits.h>
using namespace std;
int height(int *arr , int size)
{
	int root=size;
	vector<int> varr[size];
	for(int i=0;i<size;i++)
	{
		if(arr[i]==-1)
		root=i;
		else
		varr[arr[i]].push_back(i);
	}
     for(int i=0;i<size;i++)
	{
	for (int j=0; j<varr[i].size(); j++)
    cout << ' ' << varr[i].at(j);
    cout<<endl;
	}
	queue<int>q;
	q.push(root);
	q.push(INT_MAX);
	int level=0;
	while(!q.empty())
	{
		int t=q.front();
		q.pop();
		if(t==INT_MAX)
		{
			level++;
			q.push(INT_MAX);
		}
		else
		{
			for(int i=0;i<varr[t].size();i++)
			q.push(varr[t].at(i));
		}
		if(t==q.front())
		break;
	}
	return (level);
}
int main()
{
	int arr[]={-1, 0, 0, 1, 1, 3, 5};;
	int size =sizeof(arr)/sizeof(arr[0]);
	cout<<"Height of the tree is "<<height(arr,size);
	return 0;
}
