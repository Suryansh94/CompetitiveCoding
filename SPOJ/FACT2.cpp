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
	int t,n;
	cin>>t;
	
	while(t--)
	{
		int a[10000];
		cin>>n;
		a[0]=1;
		int k=0;
		for(int i=1;i<=n;i++)
		{
			int num,carry=0;
			//cout<<i<<" "<<k<<endl; 
			for(int j=0;j<=k;j++)
			{
				num=i*a[j]+carry;
				//cout<<num<<endl;
				a[j]=(num)%10;
				carry=(num)/10;
			}
			while(carry!=0)
			{
				k++;
				a[k]=carry%10;
				carry/=10;
			}
			
		}
		for(int i=k;i>=0;i--)
		{
			cout<<a[i];
		}
		cout<<endl;
	}
}

