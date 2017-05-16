
		
// Suryansh Agnihotri :)    


#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#define pi 3.1415926536
using namespace std;
string a,b;
long dp[3001][3001];
int Min(long int a,long int b,long int c)
{
	return min(min(a,b),c);
}
int solution(int x,int y)
{
	if(dp[x][y]>=0)
	{
		//cout<<"Yes "<<x<<" "<<y<<endl;
		return dp[x][y];
	}
	if(x==0)
		return y;
	if(y==0)
		return x;
	if(a[x-1]==b[y-1])
	{
		dp[x][y]=solution(x-1,y-1);
		
	}
	else
	{                				// Replacing        deleting        inserting
		dp[x][y]=1+Min(   solution(x-1,y-1),  solution(x-1,y),  solution(x,y-1) );
		
	}
	return dp[x][y];
}


int main()
{

	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		for(int i=0;i<3000;i++)
			for(int j=0;j<3000;j++)
				dp[i][j]=-1;
		cin>>a>>b;
		int x=a.length();
		int y=b.length();
		cout<<solution(x,y)<<endl;
	}
}



