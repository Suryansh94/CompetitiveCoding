
 
		
// Suryansh Agnihotri _/\_ :)    


#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int m[n],f[n];
		for(int i=0;i<n;i++)
		{
			cin>>m[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>f[i];
		}
		sort(m,m+n);
		sort(f,f+n);
		int ans=0;
		for(int i=0;i<n;i++)
		{
			ans+=m[i]*f[i];
		}
		cout<<ans<<endl;
	}
}

