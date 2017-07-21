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
	int n,t;
	cin>>t;

	while(t--)
	{
		cin>>n;
		vector<int>v;
		for(int i=1;i<=n;i++)
			v.pb(i);
		for(int i=1;i<=n;i++)
			v.pb(i);
		int k=0;

		// int round;
		// if(n&1)
		// 	round=n;
		// else
		// 	round=n;
		// cout<<n<<endl;
		cout<<n<<endl; 
		for(int r=0;r<n;r++)
		{
			cout<<n<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<i+1<<" "<<v[k]<<" "<<v[k+1]<<endl;
				k=(k+2)%(2*n);
			}
			k+=2;
		}
	}
	
	return 0;
}