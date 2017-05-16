
		
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
	int g,b,ans;
	cin>>g>>b;
	while(g!=-1 && b!=-1)
	{

		if(b>g)
		{

			ans=b/(g+1);
			if(b%(g+1)!=0)
				ans++;
			cout<<ans<<endl;
		}
		else if(g>b)
		{
			ans=g/(b+1);
			if(g%(b+1)!=0)
				ans++;
			cout<<ans<<endl;
		}
		else
		{
			if(b==0)
				cout<<"0\n";
			else
				cout<<"1\n";
		}
		cin>>g>>b;

	}
}

