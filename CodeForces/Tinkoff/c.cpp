#include <bits/stdc++.h>
using namespace std;
int comp(char a,char b)
{
	return a>b?1:0;
}
int main()
{
	// #ifndef ONLINE_JUDGE
 //    freopen("inp", "r", stdin);
 //    freopen("out", "w", stdout);
	// #endif
		


	string a,b;
	cin>>a>>b;
	int n=a.length();
	int x=0,y=0;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end(),comp);
	int turn =0;
	for(int i=0;i<n;i++)
	{	
		if(!turn)
		{
			cout<<a[x++];
			turn=1;
		}
		else
		{
			cout<<b[y++];
			turn=0;
		}
	}
}