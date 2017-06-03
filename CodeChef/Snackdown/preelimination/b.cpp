#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define sll set<ll,ll>
#define mll map<char,ll>
#define inf 1e9
int a[1000][1000],vis[1000][1000],ans[1000][1000];
int n,m,Count=0;
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {1,0,-1,-1,1,-1,0,1};
int cnt=0,mex=-1;
int Min(int a,int b,int c,int d)
{
	return min(a,min(b,min(c,d)));
}
int dfs(int x,int y)
{
	vis[x][y]=1;
	for(int i=0;i<8;i++)
	{
		if(x+dx[i]>=0 and x+dx[i]<n and y+dy[i]<m and y+dy[i]>=0)
		{

			if(a[x+dx[i]][y+dy[i]]!=mex)
			{
				Count++;
				a[x+dx[i]][y+dy[i]]=mex;
				vis[x+dx[i]][y+dy[i]]=1;
			}
			else if(a[x+dx[i]][y+dy[i]]==mex and !vis[x+dx[i]][y+dy[i]])
			{
				dfs(x+dx[i],y+dy[i]);
			}
		}
	}
}

void bfs(int x,int y)
{
	// cout<<x<<" "<<y<<endl;
	int dis[n][m];
	memset(dis,0,sizeof(dis));
	pair<int,int> p = make_pair(x,y);
	queue<pair<int,int> >q;
	q.push(p);
	vis[x][y]=1;
	while(!q.empty())
	{
		pair<int,int >front = q.front();
		q.pop();
		for(int i=0;i<8;i++)
		{
			if(front.first+dx[i]>=0 and front.first+dx[i]<n and front.second+dy[i]<m and front.second+dy[i]>=0)
			{
				if(!vis[front.first+dx[i]][front.second+dy[i]])
				{
					// cout<<"pushing "<<front.first+dx[i]<<" "<<front.second+dy[i]<<endl;
					vis[front.first+dx[i]][front.second+dy[i]]=1;
					q.push(make_pair(front.first+dx[i],front.second+dy[i]));
					dis[front.first+dx[i]][front.second+dy[i]]=dis[front.first][front.second]+1;
					ans[front.first+dx[i]][front.second+dy[i]]=min(ans[front.first+dx[i]][front.second+dy[i]],dis[front.first+dx[i]][front.second+dy[i]]);
					// cout<<"ans = "<<ans[x+dx[i]][y+dy[i]]<<endl;
				}
			}
		}

	}
}
int main()
{
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		mex=-1;
		int dis[n][m],ans=inf;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				dis[i][j]=inf;
				cin>>a[i][j];
				if(a[i][j]>mex)
					mex=a[i][j];
			}
		}
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				if(a[i][j]==mex)
					dis[i][j]=0;
		for(int x=0;x<n;x++)
		{
			for(int y=0;y<m;y++)
			{
				if(a[x][y]==mex)
				{
					dis[x][y]=0;
				}
				else
				{
					int val = inf;
					for(int i=0;i<8;i++)
					{
						if(x+dx[i]>=0 and x+dx[i]<n and y+dy[i]<m and y+dy[i]>=0)
						{

							val = min(val,dis[x+dx[i]][y+dy[i]]+1);
						}
					}
					dis[x][y]=val;
				}
			}
		}
		for(int x=n-1;x>=0;x--)
		{
			for(int y=m-1;y>=0;y--)
			{
				if(a[x][y]==mex)
				{
					dis[x][y]=0;
				}
				else
				{
					int val = inf;
					for(int i=0;i<8;i++)
					{
						if(x+dx[i]>=0 and x+dx[i]<n and y+dy[i]<m and y+dy[i]>=0)
						{

							val = min(val,dis[x+dx[i]][y+dy[i]]+1);
						}
					}
					dis[x][y]=val;
				}
			}
		}
		// for(int i=0;i<n;i++)
		// {
		// 	for(int j=0;j<m;j++)
		// 	{
		// 		cout<<dis[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
		// cout<<ans<<endl;
		ans=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				// cout<<dis[i][j]<<" ";
				if(a[i][j]!=mex)
					ans=max(ans,dis[i][j]);
			}
			// cout<<endl;
		}

		cout<<ans<<endl;

	}
}