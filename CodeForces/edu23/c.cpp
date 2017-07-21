// icst and i'll ngu { you know it :) }  
#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
int check(ll n,ll sum)
{
	ll tot=0,val=n;
	while(val)
	{
		tot+=val%10;
		val/=10;
	}
	return n-tot>=sum;

}
int main()
{
	ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("inp","r",stdin);
	// freopen ("out","w",stdout);
	ll n,s;
	cin>>n>>s;
	ll low=0,high=n,ans;
	while(low<=high)
	{
		ll mid = (high-low)/2+low;
		// cout<<mid<<endl;
		// cout<<check(mid,s)<<endl;
		if(check(mid,s))
			high=mid-1;
		else
		{
			ans=mid;
			low=mid+1;
		}
	}
	// cout<<n<<" "<<ans<<endl;
	cout<<n-ans<<endl;
}