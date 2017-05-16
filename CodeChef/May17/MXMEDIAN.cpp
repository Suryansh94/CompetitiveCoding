#include <bits/stdc++.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
 //    freopen("inp", "r", stdin);
 //    freopen("out", "w", stdout);
	// #endif
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[2*n];
		for(int i=0;i<2*n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+2*n);
		// 1 2 3 4 5 6 7 8 9 10
		cout<<a[n+n/2]<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" "<<a[i+n]<<" ";
		}
		cout<<endl;
	}	
}