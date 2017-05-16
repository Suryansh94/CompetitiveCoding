
		
// Suryansh Agnihotri _/\_ :)    


#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#define pi 3.1415926536
using namespace std;
int dfs(int node,int parent ,vector<int>*g,int *visited)
{
	visited[node]=1;
	for(int i=0;i<g[node].size();i++)
	{
		if(!visited[g[node][i]])
		{
			
			if(dfs(g[node][i],node,g,visited))
			{
				return 1;
			}
		}
		else	
		{
			if(g[node][i]!=parent)
			{
				return 1; /// There is cycle
			}
		}
	}
	return 0; /// No cycle
}
int main()
{
	int V,E,a,b;
	cin>>V>>E;
	vector<int>g[V+1];
	if(V-1!=E)
	{
		cout<<"NO\n";
	}
	else
	{
		for(int i=0;i<V-1;i++)
		{
			cin>>a>>b;
			g[a].push_back(b);
			g[b].push_back(a);
		}
		int visited[V+1];
		for(int v=1;v<=V;v++)
		{
			visited[v]=0;
		}
		if(dfs(1,0,g,visited))
		{		
			cout<<"NO\n";
		}		
		else
		{
			int f=0;
			for(int i=1;i<=V;i++)
			{
				if(!visited[i]){
					f=1;
					break;
				}
			}
			if(f)
			{
				cout<<"NO\n";
			}
			else
			{
				cout<<"YES\n";
			}
		}

	}
	
}

