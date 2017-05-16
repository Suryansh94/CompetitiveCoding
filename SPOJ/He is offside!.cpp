
		
// Suryansh Agnihotri :)    


#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<climits>
#define pi 3.1415926536
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	
	while(a && b)
	{
		int c[a],d[b];
		int second=INT_MAX,first=INT_MAX;
		for(int i=0;i<a;i++)
		{
			cin>>c[i];
		}
		for(int i=0;i<b;i++)
		{
			cin>>d[i];
			if(d[i]<first)
			{
				second=first;
				first=d[i];
			}
			else if(d[i]<second)
				second=d[i];
		}
		int f=0;
		for(int i=0;i<a;i++)
		{
			if(c[i]<second)
			{
				f=1;
				break;
			}
		}
		if(f)
		{
			cout<<"Y\n";
		}
		else{
			cout<<"N\n";
		}
		cin>>a>>b;

	}
}

