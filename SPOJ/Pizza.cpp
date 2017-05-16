
		
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
#include<cmath>
#define INF 10000000
#define pi 3.1415926536
using namespace std;
int main()
{
	int t;
	cin>>t;
	double a=0;
	string s;
	int ans=0;
	map<string,int>m;
	double c1=0,c2=0,c3=0;
	while(t--)
	{
	
		cin>>s;
		
		if(s=="3/4")
			c1++;
		else if(s=="1/4")
			c2++;
		else	
			c3++;
		
	}
	ans=1;
	ans+=c1+ceil(c3/2);
	int extra=c1+((int)c3%2)*2;
	if(c2>=extra)
	{
		c2-=extra;
		ans+=ceil(c2/4.0);
	}
	cout<<ans<<endl;

}

