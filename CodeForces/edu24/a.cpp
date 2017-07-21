// icst and i'll ngu { you know it :) }  
#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
int main()
{
	ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("inp","r",stdin);
	// freopen ("out","w",stdout);
	ll n,k,dip;
	cin>>n>>k;
	ll p = n/2;
	dip=p/(k+1);
	cout<<dip<<" "<<dip*k<<" "<<n-(k+1)*dip<<endl;
	return 0;
}