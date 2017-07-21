// icst and i'll ngu 
#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define inf 1e18
int main()
{
	// ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("inp","r",stdin);
	// freopen ("out","w",stdout);
	int n;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;)
	{
		int cnt=0,j=i;
		for(;j<n;j++)
		{
			if(s[j]=='0')
				break;
			else
				cnt++;
		}
		cout<<cnt;
		i=j+1;
	}
	if(s[n-1]=='0')
		cout<<0<<endl;

	
	return 0;
}		