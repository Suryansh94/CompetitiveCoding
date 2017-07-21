// icst and i'll ngu { you know it :) }  
#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
ll dp[N];
int main()
{
	// ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("inp","r",stdin);
	// freopen ("out","w",stdout);
	int n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	ll sum=0,odd_min=1e18;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
			sum+=a[i];
		if(a[i]&1 )
			odd_min=min(odd_min,abs(a[i]));

	}
	if(sum&1)
		cout<<sum<<endl;
	else
	{
		cout<<sum-odd_min<<endl;
	}
	

	return 0;
}