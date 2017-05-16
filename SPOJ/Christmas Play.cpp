
		
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
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int h=INT_MAX;
		for(int i=0;i<n;i++)
		{
			if(i+k-1<n)
				h=min(h,a[i+k-1]-a[i]);
			else
				break;

		}
		if(h==INT_MAX)
			h=0;
		cout<<h<<endl;
	}
}

