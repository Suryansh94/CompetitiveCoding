// icst and i'll ngu { you know it :) }  
#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
ll pwr(ll a,ll b)
{
	// cout<<"pwr\n";
	ll ans=1;
	while(b)
	{
		if(b&1)
			ans=(ans*a);
		a=(a*a);
		b>>=1;
	}
	return ans;
}
int main()
{
	ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("inp","r",stdin);
	// freopen ("out","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{ll a,b,c;
	cin>>a>>b>>c;
	ll a1=0,a2=0;
	if(c&1)
	{
		cout<<max(a*2/b,b/(a*2))<<endl;
	}
	else
	{
		cout<<max(a/b,b/a)<<endl;	
	}
	// ll k1 = ceil(c/2.0),k2=floor(c/2.0);
	// cout<<k1<<" "<<k2<<endl;
	// cout<<"hi\n";
	// a1= (1ll*a*pwr(2,k1-k2))/b;
	// if(k2>=k1)a2= (1ll*b*pwr(2,k2-k1))/a;
	// cout<<"hi\n";
	// cout<<a1<<" "<<a2<<endl;
	// cout<<max(a1,a2)<<endl;}
	}
	return 0;
}