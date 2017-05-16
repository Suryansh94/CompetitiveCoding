#include<bits/stdc++.h>
using namespace std;
int n,w;
int a[1000],min_a[1000];

int check_sum()
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=min_a[i];
	}
	return sum==w?1:0;
}
int satisfy(int u)
{
	for(int i=0;i<n;i++)
	{
		if(i!=u)
		{
			if(a[i]>a[u] and min_a[i]<min_a[u])
				return 0;
		}
	}
	return 1;
}
int main()
{
	cin>>n>>w;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		min_a[i]=ceil(a[i]/2);

}