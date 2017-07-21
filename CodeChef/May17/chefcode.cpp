#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
const int  N = 1e5+5;
vll ans1,ans2;
ll set1,set2;
ll a[N],b[N];
#define INF 2e18
bool safe_mul(ll a,ll b)
{
	if (a <= (INF+b-1)/b) return true;
    return false;
}
void process(int set_size,int k,vll & res,ll *a)
{
	for(int i=0;i<(1<<set_size);i++)
	{
		int j=0;
		ll ans=1;
		int  temp=i;
		int flag=0;
		while(temp)
		{

			if(temp&1)
			{
				if(!safe_mul(ans,a[j]))
					flag=1;
				ans*=a[j];
			}
			j++;
			temp>>=1;
		}
		if(!flag and i and ans<=k)
			res.push_back(ans);
	}
}

int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	set1=n/2;
	set2=n-n/2;
	for(int i=0;i<set2;i++)
	{
		b[i]=a[set1+i];
	}
	process(set1,k,ans1,a);
	process(set2,k,ans2,b);
	sort(ans1.begin(),ans1.end());
	sort(ans2.begin(),ans2.end());
	int ans=0,flag=0;
	for(int i=0;i<ans1.size();i++)
	{
		int val=ans1[i];
		int low=0,high=ans2.size()-1,ind=-1;
		flag=0;
		while(low<=high)
		{
			int mid= (low+high)/2;
			ll pdt= a[mid]*ans1[i];
			if(safe_mul(a[mid],ans1[i]) and pdt<=k)
			{
				low=mid+1;
				ind=mid;
			}
			else
				high=mid-1;
		}
		ans+=(ind+1);
	}
	vector<ll>::iterator it ;
	it=lower_bound(ans1.begin(),ans1.end(),k);
	ans+=it-ans1.begin();
	it=lower_bound(ans2.begin(),ans2.end(),k);
	ans+=it-ans2.begin();
	cout<<ans<<endl;

}