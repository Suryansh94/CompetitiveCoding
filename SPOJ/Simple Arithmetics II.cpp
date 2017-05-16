
		
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
using namespace std;
long long ans;
long long find(long long l,string s,string q)
{
	long long ans;
	if(s=="+")
	{
		ans = l+stoi(q);
	}
	if(s=="*")
	{
		ans = l*stoi(q);
	}
	if(s=="-")
	{
		ans = l-stoi(q);
	}
	if(s=="/")
	{
		ans = l/stoi(q);
	}
	return ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long ans;
		string s;
		cin>>s;
		ans=stoi(s);
		while(s!="=")
		{
			if(s=="+" || s=="-" || s=="*" || s=="/")
			{
				string p=s;
				cin>>s;
				ans=find(ans,p,s);
			}
			cin>>s;
		}
		cout<<ans<<endl;
	}
}

