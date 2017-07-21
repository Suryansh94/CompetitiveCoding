// when the majic is going to happen !
#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define inf 1e18
vector<int>g[N];
int in[N],vis[N];
stack<int>st;
void dfs(int n)
{
	vis[n]=1;
	for(int v : g[n])
	{
		if(!vis[v])
			dfs(v);
	}
	st.push(n);
}
int main()
{
	// ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("inp","r",stdin);
	// freopen ("out","w",stdout);
	int n,m,a,b;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		g[a].pb(b);
		in[b]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(!in[i])
		{
			dfs(i);
			while(!st.empty())
			{
				cout<<st.top()<<endl;
				st.pop();
			}
		}
	}

	
	return 0;
}