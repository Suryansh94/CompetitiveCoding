#include <bits/stdc++.h>
using namespace std;
int dp[1000000];
int main()
{
	// #ifndef ONLINE_JUDGE
 //    freopen("inp", "r", stdin);
 //    freopen("out", "w", stdout);
	// #endif
	
	
	int n,k,p;
	string s;
	cin>>n>>k>>p;
	int a[2*n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[n+i]=a[i];
	}
	for(int i=1;i<=2*n;i++)
	{
		dp[i]=dp[i-1]+a[i];
	}
	cin>>s;
	int start=1;
	for(int i=0;i<p;i++)
	{
		if(s[i]=='?')
		{
			cout<<dp[start+k-1]-dp[start-1]<<endl;
		}
		else
		{
			if(start==1)
				start=n;
			else
				start--;
		}
	}

}