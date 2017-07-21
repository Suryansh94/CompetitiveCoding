// icst and i'll ngu 
#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define inf 1e18
int main()
{
	// ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("inp","r",stdin);
	// freopen ("out","w",stdout);
	int n,k,ans=0;
	cin>>n>>k;
	int a[n],r[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	sort(a,a+n);
	for(int i=0;i<n;i++)
		r[i]=ceil(a[i]/2.0);
	for(int i=0;i<n;i++)
	{
		while(a[i]>2*k)
		{
			ans++;
			k=k*2;
		}
		k=max(k,a[i]);
	}
	cout<<ans<<endl;
	
	return 0;
}