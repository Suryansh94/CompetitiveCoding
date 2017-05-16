
		
// Suryansh Agnihotri :)    


#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<climits>
#include<string>
#include<map>
#define pi 3.1415926536
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<int>primes;
		int k=n;
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				primes.push_back(i);
				while(n%i==0)
				{
					n/=i;
				}
			}
		}
		if(n!=1)
			primes.push_back(n);
		int ans=n;
		//cout<<"hi\n";
		for(int i=0;i<primes.size();i++)
		{
			ans=k-(k/primes[i]);
			k=ans;
		}
		cout<<ans<<endl;

	}
}

