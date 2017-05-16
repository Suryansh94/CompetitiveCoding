#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
#define mp make_pair
#define inf 1e6
#define sz(v) ((int)v.size())
int dijkstra(int n,int m,vector< vector< pii> > &g)
{

	// First parameter is treated for sorting , Always remember
	priority_queue<pii, vector<pii> , greater<pii> > pq;
	int dist[n+1],visited[n+1];
	for(int i=1;i<=n;i++)
		dist[i]=inf;
	dist[1]=0;
	pq.push(make_pair(0,1));
	memset(visited,0,sizeof(visited));
	while(!pq.empty())
	{

		int v = pq.top().second;
		pq.pop();
		if(!visited[v])
		{
			visited[v]=1;
			for(int i=0;i<g[v].size();i++)
			{
				int b= g[v][i].first,w=g[v][i].second;
				if(dist[v]+w<dist[b])
				{
					dist[b]=dist[v]+w;
					pq.push(make_pair(dist[b],b));
				}
			}
		}
	}
    		
    return dist[n];
}
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("inp", "r", stdin);
    freopen("out", "w", stdout);
	#endif

	int n,m,a,b;
	cin>>n>>m;
		
	vector<vector<pair<int,int> > >  g(n+1);
	priority_queue<pair<int,int>,vector<pair<int,int> > ,greater<pair<int,int> > > pq;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		if(a==b)
			continue;
		g[a].push_back(make_pair(b,0));
		g[b].push_back(make_pair(a,1));
	}

	int ans = dijkstra(n,m,g);
	if(ans==inf)
    ans=-1;
    printf("%d",ans);
    
}