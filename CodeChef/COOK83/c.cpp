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
	int n,m;
	cin>>n>>m;
	if(n==1)
	{
		cout<<m<<endl;
	}
	else if(n==2)
	{
		if(m&1)
			m++;
		cout<<m<<endl;
	}
	else
	{
		cout<<m*n<<endl;
	}
	
	return 0;
}