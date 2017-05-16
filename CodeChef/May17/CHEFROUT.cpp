#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("inp", "r", stdin);
    freopen("out", "w", stdout);
	#endif
	int t;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>s;
		int flag=1,i=0;
		int len = s.length();
		while(s[i]=='C'){
			i++;
		}
		if(i==len)
		{
			cout<<"yes\n";
			continue;
		}
		while(s[i]=='E'){
			i++;
		}
		if(i==len)
		{
			cout<<"yes\n";
			continue;
		}
		if(s[i]=='C')
		{
			cout<<"no\n";
			continue;
		}
		while(s[i]=='S'){
			i++;
		}
		if(i==len)
		{
			cout<<"yes\n";
			continue;
		}
		if(s[i]=='C' or s[i]=='E')
		{
			cout<<"no\n";
			continue;
		}
	}
}