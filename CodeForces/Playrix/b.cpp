#include <bits/stdc++.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
 //    freopen("inp", "r", stdin);
 //    freopen("out", "w", stdout);
	// #endif


	priority_queue<pair<int,int> > pq1,pq2,pq3;
	int n;
	cin>>n;
	int p[n];
	for(int i=0;i<n;i++)
		cin>>p[i];
	int f[n],b[n];
	for(int i=0;i<n;i++)
	{

		cin>>f[i];
		if(f[i]==1)
			pq1.push(make_pair(-p[i],i));
		else if(f[i]==2)
			pq2.push(make_pair(-p[i],i));
		else
			pq3.push(make_pair(-p[i],i));
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];

		if(b[i]==1)
			pq1.push(make_pair(-p[i],i));
		else if(b[i]==2)
			pq2.push(make_pair(-p[i],i));
		else
			pq3.push(make_pair(-p[i],i));
	}

	int m;
	cin>>m;
	int fav[m];
	for(int i=0;i<m;i++)
		cin>>fav[i];

	int selected[n];
	memset(selected,0,sizeof(selected));
	for(int i=0;i<m;i++)
	{
		if(fav[i]==1)
		{
			int flag=0;
			while(!pq1.empty())
			{
				pair<int,int> top = pq1.top();
				if(!selected[top.second])
				{
					flag=1;
					selected[top.second]=1;
					cout<<-top.first<<" ";
					pq1.pop();
					break;	
				}
				else
				{
					pq1.pop();
				}
			}
			if(!flag)
				cout<<-1<<" ";
		}
		if(fav[i]==2)
		{
			int flag=0;
			while(!pq2.empty())
			{
				pair<int,int> top = pq2.top();
				if(!selected[top.second])
				{
					flag=1;
					selected[top.second]=1;
					cout<<-top.first<<" ";
					pq2.pop();
					break;	
				}
				else
				{
					pq2.pop();
				}
			}
			if(!flag)
				cout<<-1<<" ";
		}
		if(fav[i]==3)
		{
			int flag=0;
			while(!pq3.empty())
			{
				pair<int,int> top = pq3.top();
				if(!selected[top.second])
				{
					flag=1;
					selected[top.second]=1;
					cout<<-top.first<<" ";
					pq3.pop();
					break;	
				}
				else
				{
					pq3.pop();
				}
			}
			if(!flag)
				cout<<-1<<" ";
		}

	}
}