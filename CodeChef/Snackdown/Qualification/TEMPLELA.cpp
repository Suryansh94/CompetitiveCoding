#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
const int  N = 1e5+5;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(n%2==0)
		{
			cout<<"no\n";
			continue;
		}
		if(a[0]!=1)
		{
			cout<<"no\n";
			continue;
		}
		else
		{
			int flag=1;
			for(int i=0;i<n/2;i++)
			{
				if(a[i]+1!=a[i+1])
				{
					flag=0;
					break;
				}
			}
			if(!flag)
			{
				cout<<"no\n";
				continue;
			}
			for(int i=n/2;i<n-1;i++)
			{
				if(a[i]-1!=a[i+1])
				{
					flag=0;
					break;
				}

			}
			if(!flag)
			{
				cout<<"no\n";
				continue;
			}

		}
		cout<<"yes\n";
	}
}