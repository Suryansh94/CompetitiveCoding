#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
vector<ll>a,b,ans;
ll x,y,l,r;
void get_pow(ll x,vector<ll>&res)
{
	ll cur =1;
	res.pb(cur);
	while(1)
	{
		if(cur > 1e18 / x){
			break;
		}
		cur *= x;
		res.push_back(cur);
		if(cur <= r){
			res.push_back(cur);
		}
		else{
			break;
		}
	}	
}
int main()
{
	// ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("inp","r",stdin);
	// freopen ("out","w",stdout);
	
	cin>>x>>y>>l>>r;
	ans.pb(l - 1);
	ans.pb(r + 1);
	get_pow(x,a);
	get_pow(y,b);
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<b.size();j++)
		{
			ll val = a[i]+b[j];
			if(val>=l and val<=r)
				ans.pb(val);
		}
	}
	sort(ans.begin(),ans.end());
	ll res=0;

	for(int i=1;i<ans.size();i++)
		res=max(res,ans[i]-ans[i-1]-1);
	
	cout<<res<<endl;
	return 0;
}