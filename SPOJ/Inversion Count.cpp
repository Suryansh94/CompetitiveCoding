
		
// Suryansh Agnihotri :)    


#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#define pi 3.1415926536
using namespace std;
long long ans=0;

void Merge(long int *a,long int *left,long int l,long int *right,long int r)
{
	int i=0,j=0,k=0;
	while(i<l && j<r)
	{
		if(left[i]<right[j])
		{
			a[k++]=left[i];
			i++;
		}
		else
		{
			//  a[i] > a[j]   and i < j
			ans+=(l-i);
			//cout<<"l = "<<l<<"i ="<<i<<"The ans becomes "<<ans<< " Left = "<<left[i]<<" Right ="<<right[i]<<endl;
			a[k++]=right[j];
			j++;
		}
	}
	while(i<l)
	{
		a[k++]=left[i++];
	}
	while(j<r)
	{
		a[k++]=right[j++];
	}
}

long long  Count(long *a,long n)
{
	if(n>1)
	{
		long * left = new long int[n/2];
		long * right = new long int[n-(n/2)];
		for(int i=0;i<n/2;i++)
		{
			left[i]=a[i];
		}
		for(int i=0;i<n-(n/2);i++)
		{
			right[i]=a[n/2 + i];
		}
		long long l = Count(left,n/2);
		long long r = Count (right,n-(n/2));
		//cout<<"l = "<<l << "  r = "<<r<<endl;
		ans =(l+r);
		Merge(a,left,n/2,right,n-(n/2));
		return ans;
	}
	return 0;
}
int main()
{
	long int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		ans=0;
		Count(a,n);
		cout<<ans<<endl;
	}
}

