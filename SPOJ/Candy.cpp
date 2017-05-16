#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	long int n,a,sum;
	cin>>n;
	vector<long int>v;
	while(n!=-1)
	{
		sum=0;
		for(int i=0;i<n;i++)
		{	
			cin>>a;
			v.push_back(a);
			sum+=a;
		}
		if(sum%n!=0)
		{
			cout<<"-1\n";
			cin>>n;
			v.clear();
		}
		else
		{
			long int avg=sum/n,ans=0;
			for(int i=0;i<n;i++)
			{
				if(v[i]>avg)
					ans+=(v[i]-avg);
			}
			cout<<ans<<endl;
			cin>>n;
			v.clear();
		}
	}
}

