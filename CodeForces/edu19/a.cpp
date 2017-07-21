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
	int n,k;
	int cnt=0;
	std::vector<int> ans;
	cin>>n>>k;
	if(k==1)
	{
		cout<<n<<endl;
		return 0;
	}
	for(int i=2;1ll*i*i<=n;i++)
	{
		while(n%i==0)
		{
			cnt++;
			ans.pb(i);
			n/=i;
			if(cnt==k-1)
				break;
		}	
		if(cnt==k-1)
			break;
	}
	if(n!=1)
		ans.pb(n);
	if((int)ans.size()!=k)
		cout<<-1<<endl;
	else
		for(int val : ans)
			cout<<val<<" ";
	return 0;
}