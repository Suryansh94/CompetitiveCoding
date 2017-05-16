
		
// Suryansh Agnihotri _/\_ :)    


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
	stack<int>S;
	cin>>n;
	while(n)
	{
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int seq=1,k=0;
		for(int i=0;i<n;i++)
		{
			if(seq==a[i])
			{
				//b[k++]=seq;
				seq++;
			}
			else
			{
				while(!S.empty() && S.top()==seq)
				{
					//b[k++]=seq;
					seq++;
					S.pop();
				}		
				S.push(a[i]);
			}
		}
		int f=0;
		while(!S.empty())
		{
			if(seq!=S.top())
			{
				f=1;
				break;
			}
			else
			{
				seq++;
			}
			S.pop();
		}
		while(!S.empty())
		{
			S.pop();
		}
		if(f)
		{
			cout<<"no\n";
		}
		else
		{
			cout<<"yes\n";
		}
		cin>>n;

	}
}

