// icst and i'll ngu { you know it :) }  
#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
int main()
{
	ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("inp","r",stdin);
	// freopen ("out","w",stdout);
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll ans=1e18,cnt=0,diff;
	map<int,int>m;
	for(int i=0;i<n-1;i++)
	{
		diff = abs(a[i]-a[i+1]);
		if(ans>=diff)
		{
			ans=diff;
			m[ans]++;
		}
	}
	cout<<ans<<" "<<m[ans]<<endl;
	return 0;
}