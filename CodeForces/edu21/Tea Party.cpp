#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,w;
	cin>>n>>w;
	pair<int,int>arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i].first;
		arr[i].second=i;
	}
	sort(arr,arr+n);
	// reverse(arr,arr+n);
	int ans[n];
	for(int i=0;i<n;i++)
	{
		ans[i]=arr[i].first+1>>1;
		w-=ans[i];
	}
	if(w<0)
	{
		cout<<-1<<endl;
		return 0;
	}
	// for(int i=0;i<n;i++)
	// 	cout<<arr[i].first<<" "<<arr[i].second<<" "<<ans[i]<<endl;
	for(int i=n-1;i>=0 && w;i--)
	{
		if(arr[i].first-ans[i]>=w)
		{
			ans[i]+=w;
			w=0;
		}
		else
		{
			
			w-=(arr[i].first-ans[i]);
			ans[i]=arr[i].first;
		}
	}
	if(w>0)
	{
		cout<<-1<<endl;;
		return 0;
	}
	int A[n];
	for(int i=0;i<n;i++)
	{
		A[arr[i].second]=ans[i];
	}
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
}