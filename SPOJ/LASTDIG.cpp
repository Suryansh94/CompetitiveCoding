
 
		
// Suryansh Agnihotri _/\_ :)    


#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

long long  POW(long long int a,long long int b)
{
	long long int res=1;
	while(b)
	{

		if(b&1)
		{
			res*=a;
			res%=10;
		}
		a=(a*a)%10;
		b>>=1;
	}
	return res;
}
int main()
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<POW(a,b)%10<<endl;
	}
}

