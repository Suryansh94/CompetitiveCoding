
		
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
#define pi 3.1415926536
using namespace std;
int main()
{
	int t,d;
	string s;
	cin>>t;
	int f=0,cnt=0,check=1;
	while(t--)
	{

		cin>>d;
		cin>>s;
		cout<<d<<" ";
		string a[]={"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT" , "HHH"};
		
		for(int k=0;k<8;k++)
		{
			f=0,cnt=0,check=1;
			for(int i=0;i<s.length();i++)
			{
				check=1;
				f=0;
				for(int j=0;j<3;j++)
				{
					if(i+j<s.length())
					{
						if(s[i+j]==a[k][j])
							continue;
						else
							check=0;
					}
					else
					{
						f=1;
					}
				}
				if(f)
					break;
				else
				{
					if(check)
						cnt++;
				}
				
			}
			cout<<cnt<<" ";
		}
		cout<<endl;

	}
}

