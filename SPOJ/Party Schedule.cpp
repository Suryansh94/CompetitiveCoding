
		
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
int main()
{
	int b,n;
	cin>>b>>n;
	while(b&&n)
	{


		int entry[n],fun[n];
		for(int i=0;i<n;i++)
		{
			cin>>entry[i]>>fun[i];
		}
		int dp[n+1][b+1],charge,val;
		for(int i=0;i<=n;i++)
			for(int j=0;j<=b;j++)
				{
					dp[i][j]=0;
					//charge[i][j]=0;
				}
		for(int i=0;i<=b;i++)
		{
			dp[0][i]=0;
			
		}
		for(int i=0;i<=n;i++)
			{
				
				dp[i][0]=0;
			}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=b;j++)
			{
				if(entry[i-1]<=j)
				{
					if(fun[i-1]+dp[i-1][j-entry[i-1]]>dp[i-1][j])
					{
						dp[i][j]=fun[i-1]+dp[i-1][j-entry[i-1]];
						
					}
					else
					{
						dp[i][j]=dp[i-1][j];
						
					}
					//dp[i][j]= max(dp[i-1][j],fun[i-1]+dp[i-1][j-entry[i-1]]);
				}
				else
				{
					dp[i][j]=dp[i-1][j];
				}
			}
		}
		int ans=0;
		val=dp[n][b];
		for(int i=1;i<=b;i++)
		{
			if(dp[n][i]==val)
			{
				ans=i;
				break;
			}
		}
		cout<<ans<<" "<<dp[n][b]<<endl;
		cin>>b>>n;
}
}

