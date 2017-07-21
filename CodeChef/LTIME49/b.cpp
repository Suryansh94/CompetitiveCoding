// icst and i'll ngu { you know it :) }  
#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
ll a[N],sum[N],w[N];
int main()
{
	ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("inp","r",stdin);
	// freopen ("out","w",stdout);
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ans=-1;
		map<int,int>cnt;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}	
		for(int i=1;i<=n;i++ )
		{
			cin>>w[i];
			sum[i]=sum[i-1]+w[i];
		}
		int r=1;
		cnt[a[1]]++;
		for(int i=1;i<=n;i++)
		{
			while(r+1<=n and cnt[a[r+1]]==0)
			{
				r++;
				cnt[a[r]]++;
			}
			// cout<<"r = "<<r<<" i "<<i<<endl;
			ans=max(ans,sum[r]-sum[i-1]);
			cnt[a[i]]--;
		}
		cout<<ans<<endl;
		for(int i=1;i<=n;i++)
			sum[i]=0;
	}
	return 0;
}