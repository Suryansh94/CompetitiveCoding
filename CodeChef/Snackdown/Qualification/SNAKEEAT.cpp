#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
const int N = 1000000;
ll sum[N],eaten_snakes=0,ans=0;
vector<ll>a;
int ok(ll l,ll h,ll k)
{
	ll m= (h-l)/2+l; //(l+h)/2;
	ll items=h-m+1;
	ll extras = (1ll*items*k)-(sum[h]-sum[m-1]);
	ll available = m-eaten_snakes-1;
	if(extras>available)
		return 0;
	eaten_snakes+=extras;
	return 1;
}
void solve(ll k,ll n)
{
	ll low=1,high=n;
	while(low<=high)
	{
		ll mid=(high-low)/2+low;
		if(ok(low,high,k))
		{
			ans+=(high-mid+1);
			high=mid-1;
		}
		else
			low=mid+1;
	} 
}
int main()
{
	ll t,q,n,k,val;
	cin>>t;
	while(t--)
	{
		cin>>n>>q;
		a.clear();
		for(int i=1;i<=n;i++)
		{
			cin>>val;
			a.push_back(val);
		}
		sort(a.begin(),a.end());
		for(int i=1;i<=n;i++)
			sum[i]=sum[i-1]+a[i-1];

		ll size=n;
		for(int i=0;i<q;i++)
		{
			cin>>k;
			ans=0;
			eaten_snakes=0;
			size=n;
			vector<ll>::iterator it=upper_bound(a.begin(),a.end(),k-1);
			if(it!=a.end())
			{
				ans=n-(it-a.begin());
				size=it-a.begin();
			}
			solve(k,size);
			cout<<ans<<endl;
		}
	}
}