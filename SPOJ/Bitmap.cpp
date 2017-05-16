
		
// Suryansh Agnihotri :)    


#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<climits>
#include<string>
#include<map>
#define pi 3.1415926536
#define INF 10000000
using namespace std;

int validate(int i,int j,int n,int m)
{
	// valid row and column
	if(i>=0 && i<n)
	{
		if(j>=0 && j<m)
			return 1;
	}
	return 0;
}


int main()
{
	ios::sync_with_stdio(false);
	int t,n,m;
	
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		string s[n];
		for(int i=0;i<n;i++)
			cin>>s[i];


		int a[n][m];
		pair<int,int>dir[4]={ {0,-1},{1,0} , {0,1}, {-1,0} };  /// We will go in four direction from a position

		queue<pair<int,int> > q;
		vector<pair<int,int> >ones;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				a[i][j]=10000;

				if(s[i][j]-'0')
				{
					a[i][j]=0;
					ones.push_back(make_pair(i,j));
				}

			}
		}

		for(int k=0;k<ones.size();k++)
		{
			q.push(make_pair(ones[k].first,ones[k].second));
			while(!q.empty())
			{
				pair<int,int>  p =q.front();
				q.pop();
				for(int i=0;i<4;i++)
				{
					int x=dir[i].first+p.first,y=dir[i].second+p.second;
					if(validate(x,y,n,m))
					{
						int dis=abs(ones[k].first-x)+abs(ones[k].second-y);
						//cout<<dis<<" hi\n";
						if(a[x][y]<=dis)
						{
							//cout<<"Hi\n";
							continue;
						}
						else
						{
							a[x][y]=dis;
							q.push(make_pair(x,y));	
						}
					}
				}
			}
		}
		ones.clear();


		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}

