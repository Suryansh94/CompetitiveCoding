/// Every COmposite Number has prime factor less than sqrt(n)
#include<stdio.h>
#include<iostream>
#define ll long long
using namespace std;
int prime[31624];
void isprime()
{
	for(int i=0;i<31624;i++)  // prime till sqrt(10^9)
	{
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(int i=2;i*i<=31624;i++)
	{
		for(int k=2;i*k<=31264;k++)
		{
			prime[k*i]=0;
		}
	}
}

int main()
{
	isprime();
	ll n,m,f=0;
	int t;
	cin>>t;
	//scanf("%d",&t);
	while(t--)
	{	
		cin>>m>>n;
		for(ll i=m;i<=n;i++)
		{
			f=0;
			for(ll k=2;k*k<=i;k++)
			{
				if(prime[k])
				{	if(i%k==0)
					{
						f=1;
						break;
					}
				}
			}
			if(f==0 && i!=1)
				cout<<i<<endl;

		}

	}
}
