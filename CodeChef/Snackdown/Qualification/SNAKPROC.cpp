#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
const int  N = 1e5+5;
int main()
{
	int t,n,head=0,tail=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s;
		cin>>s;
		int flag=1;
		for(int i=0;i<n;)
		{
			if(s[i]=='T')
			{
				flag=0;
				break;
			}
			else if(s[i]=='.')
			{
				i++;
				continue;
			}
			else
			{
				int j=i+1;
				for(j=i+1;j<n;j++)
				{			
					if(s[j]=='.')
						continue;
					else if(s[j]=='H')
					{
						flag=0;
						break;	
					}
					else
					{
						break;
					}
				}
				if(!flag)
					break;
				else
				{
					if(j==n)
					{
						flag=0;
						break;
					}
					i=j+1;
				}
			}
		}
		if(!flag)
			cout<<"Invalid\n";
		else
			cout<<"Valid\n";
	}

}