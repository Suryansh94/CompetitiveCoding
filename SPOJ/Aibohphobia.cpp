
		
// Suryansh Agnihotri :)    


#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<climits>
#include<cmath>
#include<string>
#include<map>
#define INF 10000000
#define pi 3.1415926536
using namespace std;
string s;
int dp[7000][7000];
int Find(int start,int end)
{
	if(dp[start][end])
		return dp[start][end];
	if(start>end)
	{
		return 0;
	}
	if(start==end)
	{
		return 0;
	}
	else
	{
		if(s[start]==s[end])
		{
			dp[start][end]=Find(start+1,end-1);
			return dp[start][end];
		}
		else
		{
			dp[start][end]=1+min(Find(start+1,end),Find(start,end-1));
			return dp[start][end];
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		cin>>s;
		cout<<Find(0,s.length()-1)<<endl;	
		for(int i=0;i<7000;i++)
			for(int j=0;j<7000;j++)
				dp[i][j]=0;
	}
}

