
		
// Suryansh Agnihotri _/\_ :)    


#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#define pi 3.1415926536
using namespace std;
int main()
{
	double n,ans;
	cin>>n;
	double r;
	while(n)
	{
		r=n/(pi);
		ans = pi*r*r;
		ans=ans/2;
		printf("%.2f\n",ans);
		cin>>n;

	}
}

