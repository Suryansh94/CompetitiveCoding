#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
vector<int>g[N];
int d1[N],d2[N];

void dfs(int node,int parent,int dist[])
{
	dist[node]=dist[parent]+1;
	for(int next : g[node])
	{
		if(next!=parent)
			dfs(next,node,dist);
	}
}
int main()
{
	// ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("inp","r",stdin);
	// freopen ("out","w",stdout);

	int n,a,b,x;
	cin>>n>>x;
	for(int i=0;i<n-1;i++)
	{
		cin>>a>>b;
		g[a].pb(b);
		g[b].pb(a);
	}
	d1[0]=-1;
	d2[0]=-1;
	dfs(1,0,d1);
	dfs(x,0,d2);
	int ans=0;
	for(int i=1;i<=n;i++)
		if(d1[i]>d2[i])
			ans=max(ans,2*d1[i]);

	cout<<ans<<endl;
	return 0;
}