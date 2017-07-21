#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define sll set<ll,ll>
#define mll map<ll,ll>
ll n,k,f=0;
ll solve(ll g)
{
	f=1;
	for(int i=1;i<k;i++)
		cout<<i*g<<" ";
	cout<<n-(((k*(k-1)))/2)*g<<endl;
}
int main()
{
	cin>>n>>k;
	if(k>1e7)
	{
		cout<<-1<<endl;
		return 0;
	}
	vector<ll>divs;
	for(int i=1;1ll*i*i<=n;i++)
	{
		if(n%i==0)
		{
			divs.push_back(i);
			ll g=n/i;
			ll val1= (n/g)-(k*(k-1)/2);
			ll val2 = k-1;  
			if(val1>val2)
				solve(g);
			if(f)
				break;
		}
	}
	if(f)
		return 0;
	for(int i=divs.size()-1;i>=0;i--)
	{
			
			ll g=divs[i];
			ll val1= (n/g)-(k*(k-1)/2);
			ll val2 = k-1;
			if(val1>val2)
				solve(g);
			if(f)	
				break;
	}
	if(f)
		return 0;
	cout<<-1<<endl;
}