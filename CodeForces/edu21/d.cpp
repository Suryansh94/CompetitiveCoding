#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
// ll a[100005],n,sum=0;
// void work()
// {
// 	map<ll,int>m;
// 	ll tot=0;
// 	for(int i=0;i<n;i++)
// 	{
// 		tot+=a[i];
// 		m[a[i]]=1;
// 		if(m[tot-sum/2])
// 		{
// 			cout<<"YES\n";
// 			exit(0);
// 		}
// 	}
// }
// int main()
// {
// 	cin>>n;
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 		sum+=a[i];
// 	}
// 	if(sum&1)
// 	{
// 		cout<<"NO\n";
// 		return 0;
// 	}
// 	work();
// 	reverse(a,a+n);
// 	work();
// 	cout<<"NO\n";
// }
const int N = 1234567;
ll a[N];
int n;
void solve()
{
	// cout<<"hi\n";
	{
		ll tot = 0;
		for(int i=0;i<n;i++)
			tot+=a[i];
		ll pre=0,suf=0;
		set<ll>s;
		for(int i=0;i<n;i++)
		{
			pre+=a[i];
			suf=tot-pre;
			s.insert(a[i]);
			if(pre==suf)
			{
				cout<<"YES\n";
				exit(0);
			}
			if((pre-suf)%2==0 and s.find((pre-suf)/2)!=s.end())
			{
				cout<<"YES\n";
				exit(0);
				// return 0;
			}
		}
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	solve();
	reverse(a,a+n);
	solve();
	cout<<"NO\n";
	return 0;
}