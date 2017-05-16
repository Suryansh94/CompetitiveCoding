
		
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
int memo[3000][3000];
int n;
int getMax(int *a,int start,int end)
{
	int age=n-(end-start)	;
	int val=memo[start][end];
	if(val)
	{
		return val;
	}

	if(start==end)
	{
		memo[start][end]=a[start]*(age);
		return a[start]*(age) ; 
	}
	val=max(a[start]*age+getMax(a,start+1,end),a[end]*age+getMax(a,start,end-1));
	memo[start][end]=val;
	return val;
}
int main()
{
	ios::sync_with_stdio(false);
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<getMax(a,0,n-1)<<endl;
}

