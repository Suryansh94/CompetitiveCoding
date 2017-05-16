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
	int t,n;
	long long ans;
	cin>>n;
	while(n)
	{	ans=(n*(n+1)*(2*n+1))/6;
		cout<<ans<<endl;
		cin>>n;
	}	
}

