
		
// Suryansh Agnihotri :)    


#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#define pi 3.1415926536
using namespace std;
vector<int>g[10001];
int visited[100001];
int left,right;
long int ans=0;

int dfs(long int node)
{
	long int max1=-1,max2=-1,m;
	visited[node]=1;
	for(int i=0;i<g[node].size();i++)
	{
		if(!visited[g[node][i]])
		{
			m=dfs(g[node][i]); /// return height
			if(m>max1)
			{
				max2=max1;
				max1=m;
			}
			else if(m > max2)
				max2=m;
		}
	}
	ans=max(ans,max1+max2+2);
	return max1+1;
}
int main()
{
	int n,u,v;
	cin>>n;
	
	for(int i=0;i<n-1;i++)
	{
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	dfs(1);
	cout<<ans<<endl;

}

