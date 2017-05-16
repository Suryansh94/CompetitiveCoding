
		
// Suryansh Agnihotri :)    


#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<climits>
#define pi 3.1415926536
using namespace std;
long int dp[1000][1000];
long int inp[1000][1000];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{

		int a,b;
		cin>>a>>b;
		for(int i=0;i<a;i++)
			for(int j=0;j<b;j++)
				dp[i][j]=0;
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				cin>>inp[i][j];
			}
		}
		dp[0][0]=inp[0][0];
		for(int i=1;i<b;i++)
			dp[0][i]=inp[0][i];


		for(int i=1;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				if(j==0)
				{
					dp[i][j]=inp[i][j]+max(dp[i-1][j],dp[i-1][j+1]);	
				}
				else if(j==b-1)
				{
					dp[i][j]=inp[i][j]+max(dp[i-1][j],dp[i-1][j-1]);
				}
				else
				{
					dp[i][j]=inp[i][j]+max(dp[i-1][j+1],max(dp[i-1][j],dp[i-1][j-1]));	
				}
			}
		}
		long int ans =INT_MIN;
		for(int i=0;i<b;i++)
		{
			ans=max(ans,dp[a-1][i]);
		}
		cout<<ans<<endl;
	}
}

