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
	// ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("inp","r",stdin);
	// freopen ("out","w",stdout);
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;

	if(abs(c-a)%e !=0 or abs(d-b)%f!=0)
	{
		cout<<"NO\n";
		return 0;
	}
	int sx = abs(c-a)/e;
	int sy = abs(d-b)/f;
	if(sx>sy)
		swap(sx,sy);
	int rem = sy-sx;
	if(rem&1)
		cout<<"NO\n";
	else
		cout<<"YES\n";
	
	return 0;
}