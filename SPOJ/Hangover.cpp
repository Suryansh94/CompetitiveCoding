
		
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
	double d,sum=0.5,c=2;
	cin>>d;
	while(d!=0.00)
	{
		sum=0.5,c=2;
		while(1)
		{
			if(sum>=d)
				break;
			else
			{
				c++;
				sum+=(1/c);
			}
		}
		cout<<c-1<<" card(s)\n";
		cin>>d;
	}
}

