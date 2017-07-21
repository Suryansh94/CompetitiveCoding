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

	int n,val,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>val;
		sum+=val;
	}
	int flag=0,a,b,ans;
	cin>>n;
	for(int i=0;i<n;i++)
	{	
		cin>>a>>b;
		if(sum<=b)
		{
			flag=1;
			if(sum<=a)
				ans=a;
			else if(sum<b)
				ans=sum;
			else
				ans=b;
			break;
		}
	}
	if(!flag)
		cout<<-1<<endl;
	else
		cout<<ans<<endl;
	return 0;
}