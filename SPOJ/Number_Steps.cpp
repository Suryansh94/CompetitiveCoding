#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y,t;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		if(x<0 || y<0 || x<y)
			cout<<"No  Number\n";	
		else if((x-y)==0 || (x-y)==2)
		{
			if(x%2==0 && y%2==0)
			{
				cout<<x+y<<endl;
			}
			else if(x%2==1 && y%2==1)
			{
				cout<<x+y-1<<endl;
			}
			else
			{
				cout<<"No Number\n";
			}
		}
		else
		{
			cout<<"No Number\n";	
		}

	}

}