#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define sll set<ll,ll>
#define mll map<char,ll>
int a[1000];
int main()
{
	int t;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>s;
		int c1=0,c2=0;
		memset(a,0,sizeof(a));
		int l = s.length();
		for(int i=0;i<l;i++)
		{
			if(s[i]=='s')
				c1++;
			else
				c2++;
		}
		for(int i=0;i<l;i++)
		{
			if(s[i]=='m')
			{
				if(s[i-1]=='s')
				{
					c1--;

				}
				else if(s[i+1]=='s')
				{
					c1--;
					s[i+1]='.';
				}

			}
		}
		if(c1>c2)
			cout<<"snakes\n";
		else if(c1<c2)
			cout<<"mongooses\n";
		else
			cout<<"tie\n";
	}
} 