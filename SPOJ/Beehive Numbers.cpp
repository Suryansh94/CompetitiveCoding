
		
// Suryansh Agnihotri :)    


#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#define pi 3.1415926536
using namespace std;
long long a[100000];
map<long,int>m;
int main()
{
	long long sum=1,n;
	a[0]=0;
	m[1]=1;
	for(int i=1;i<100000;i++)
	{
		a[i]=a[i-1]+6;
		sum+=a[i];
		m[sum]=1;
	}
	cin>>n;
	while(n!=-1)
	{
		if(m[n])
			cout<<"Y\n";
		else
			cout<<"N\n";
		cin>>n;
	}
}

