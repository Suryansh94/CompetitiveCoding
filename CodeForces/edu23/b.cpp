// icst and i'll ngu { you know it :) }  
#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
ll c3(ll n)
{
	return n*(n-1)*(n-2) / 6;
}
ll c2(ll n)
{
	return n*(n-1)/2;
}
int main()
{
	// ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("inp","r",stdin);
	// freopen ("out","w",stdout);

	int n,ans=0;
	cin>>n;
	int a[n];
	map<int,int>m;	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	sort(a,a+n);
	
	if(a[0]==a[1] and a[1]==a[2])
		cout<<c3(m[a[0]])<<endl;
	else if(a[0]==a[1])
		cout<<m[a[2]]<<endl;
	else if(a[1]==a[2])
		cout<<c2(m[a[2]])<<endl;
	else
		cout<<m[a[2]]<<endl;
	return 0;
}