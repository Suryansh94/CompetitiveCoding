#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int a[m],ans=0;
		vector<int>pos[500];
		set<int>seat;
		for(int i=0;i<m;i++)
		{
			cin>>a[i];
			pos[a[i]].push_back(i);
		}
		for(int i=0;i<m;i++)
		{
			if(seat.find(a[i])!=seat.end())
			{
				continue;
			}
			
			if(seat.size()<n)
			{
				seat.insert(a[i]);
				ans++;
			}
			else
			{
				int max_ind=-1,candidate;
				for(auto it : seat)
				{
					vector<int>::iterator ite = upper_bound(pos[it].begin(),pos[it].end(),i);
					if(ite==pos[it].end())
					{
						candidate=it;
						break;
					}
					else if(*ite>max_ind)
					{
						max_ind=*ite;
						candidate=it;
					}
				}
				
				seat.erase(seat.find(candidate));
				seat.insert(a[i]);
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}