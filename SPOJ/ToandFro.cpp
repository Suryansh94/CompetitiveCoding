
 		
//    Suryansh Agnihotri       


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
	int n;
	string s;
	cin>>n;
	while(n)
	{
		cin>>s;
		int column = n,rows=s.length()/column,k=0,check=0;
		char a[rows][column];
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<column;j++)
			{
				if(!check)
				{
					
					a[i][j]=s[k++];
					check=1;
				}
				else
				{
					
					a[i][column-j-1]=s[k++];
					check=0;
				}
			}
		}
		for(int c=0;c<column;c++)
		{
			for(int r=0;r<rows;r++)
			{
				cout<<a[r][c];
			}
		}
		cout<<endl;


		cin>>n;
	}
}

