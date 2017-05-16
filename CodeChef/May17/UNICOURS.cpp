#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("inp", "r", stdin);
    freopen("out", "w", stdout);
	#endif
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int ma=-1;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			ma=max(ma,a[i]);
		}
		cout<<n-ma<<endl;
	}	
}