
		
// Suryansh Agnihotri :)    


#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<climits>
#include<cmath>
#include<cstring>
#include<map>
#define INF 10000000
#define pi 3.1415926536
using namespace std;
int n;
int A[200002],a[200002],getIndex[200002],rank[200002];

void init()
{
	for(int i=1;i<=n;i++)
	{
		A[i]=i;
		rank[i]=1;
	}	

}
int find(int r)
{
	while(A[r]!=r)
	{
		A[r]=A[A[r]];
		r=A[r];
	}
	return r;
}

void Union(int a,int b)
{
	int pa=find(a);
	int pb=find(b);
	if(rank[pa]<rank[pb])
	{
		A[pa]=pb;
	}
	else
	{
		A[pb]=pa;
	}
	//A[pb]=pa; // Joining pb to pa
}
int main()
{
	scanf("%d",&n);
	init();
	for(int i=1;i<=n;i++)
	{
		scanf("%d",a+i);
	}
	int size=0;
	for(int i=1;i<=n;i++)
	{
		if(find(i)!=find(a[i]))
			Union(i,a[i]);
		else
		{
			// Not want cycle
			getIndex[size++]=i;
		}
	}
	int ans =size;
	int make_root=getIndex[0];
	for(int i=0;i<size;i++)
	{
		if(a[getIndex[i]]==getIndex[i])
		{
			ans--;
			make_root=getIndex[i];
			break;
		}
	}
	for(int i=0;i<size;i++)
	{
		a[getIndex[i]]=make_root;
	}
	cout<<ans<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
}

