#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define inf 1e9
const int N = 2e5+10;
int l[N],r[N];
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i-1];
		l[i-1]=r[i+1]=inf;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i-1]!=0)
		{
			l[i]=l[i-1]+1;
		}
		else
			l[i]=0;
	}
	for(int i=n;i;i--)
	{
		if(a[i-1])
		{
			r[i]=r[i+1]+1;
		}
		else
		{
			r[i]=0;
		}
	}
	for(int i=0;i<n;i++){
		l[i+1]=min(l[i+1],r[i+1]);
		cout<<l[i+1]<<" ";
	}
	cout<<endl;

}