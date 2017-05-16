#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	double sum[n+1];
	memset(sum,0,sizeof(sum));
	for(int i=1;i<=n;i++)
		sum[i]=sum[i-1]+a[i];


	// 1 2 3 4 5
	double ans=0;
 	for(int i=k;i<=n;i++)
	{
		// cout<<"weak "<<sum[i]-sum[i-k]<<endl;
		ans+=(sum[i]-sum[i-k]);
	}
	printf("%0.10f\n",ans/(n-k+1));
}