
		
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
	int t;
	cin>>t;
	string s[5];
	int a,b,c;
	while(t--)
	{
		for(int i=0;i<5;i++)
		{
			cin>>s[i];
			for(int j=0;j<s[i].length();j++)
			{
				if(s[i][j]>='a' && s[i][j]<='z')
				{
					if(i==0)
					{
						a=1,b=c=0;
					}
					if(i==2)
					{
						a=c=0,b=1;
					}
					if(i==4)
					{
						a=b=0,c=1;
					}
				}
			}
		}
		if(a)
		{
			int ans = stoi(s[4])-stoi(s[2]);
			cout<<ans<<" + "<<s[2]<<" = "<<s[4]<<endl;
		}
		if(b)
		{
			int ans=stoi(s[4])-stoi(s[0]);
			cout<<s[0]<<" + "<<ans<<" = "<<s[4]<<endl;
		}
		if(c)
		{
			int ans=stoi(s[0])+stoi(s[2]);
			cout<<s[0]<<" + "<<s[2]<<" = "<<ans<<endl;	
		}

	}	
}

