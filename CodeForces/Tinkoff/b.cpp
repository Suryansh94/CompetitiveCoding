#include <bits/stdc++.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
 //    freopen("inp", "r", stdin);
 //    freopen("out", "w", stdout);
	// #endif
		

	double n,h;
	cin>>n>>h;
	// cout<<h<<endl;
	for(double i=0;i<n-1;i++)
	{
		double ans;
		// cout<<i+1<<" "<<n<<endl;
		ans = h*sqrtl((i+1)/n);
		printf("%0.12f ",ans);
	}
}