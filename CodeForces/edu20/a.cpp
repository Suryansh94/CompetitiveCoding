#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define mod 1000000007
int a[200][200];
int main()
{
	int n,k;
	cin>>n>>k;
	int ptr=1;
	for(int i=0;i<n;)
	{
		if(k and !a[i][i])
		{
			a[i][i]=1;
			k--;
		}
		else
		{
			if(k>=2)
			{
				if(i==n-1)
					break;
				a[i][i+ptr]=1;
				a[i+ptr][i]=1;
				k-=2;
				ptr++;
				if(i+ptr==n)
				{
					i++;
					ptr=1;
				}
			}
			else
			{
				if(k and !a[i][i])
				{
					a[i][i]=1;
					k--;
					break;
				}
				if(k and a[i][i])
				{
					if(i==n-1)
						break;
					i++;
					a[i][i]=1;
					k--;
					break;
				}
				else
				{
					break;
				}

			}
		}
	}
	if(k)
	{
		cout<<-1<<endl;
		return 0;
	}
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;
		}
}