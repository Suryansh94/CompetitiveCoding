// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int N = 12345678;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
vector<int>g[N],cycle;
int color[N],par[N];
// method to check cycle in digraph
#define black 1
#define gray 0
#define white -1
bool dfs(int node,int *color)
{
	color[node]=gray;
	for(int next : g[node])
	{
		if(color[next]==gray)
		{
			while(node!=next)
			{
				cycle.pb(node);
				node=par[node];
			}
			cycle.pb(node);
			return true;
		}
		else if(color[next]=white )
		{
			par[next]=node;
			if(dfs(next,color))
				return true;
		}
	}
	color[node]=black;
	return false;
}
int main()
{
	ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("input.txt","r",stdin);
	// freopen ("output.txt","w",stdout);
	int n,m,a,b;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		g[a].pb(b);
	}
	for(int i=1;i<=n;i++)
		color[i]=white;
	for(int i=1;i<=n;i++)
	{
		if(color[i]==white)
		{
			if(dfs(i,color))
			{
				cout<<"YES\n";
				reverse(cycle.begin(), cycle.end());
				for(int node : cycle)
					cout<<node<<" ";
				cout<<endl;
				return 0;
			}
		}
	}
	cout<<"NO\n";
	return 0;
}