#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int higher_prec(char a,char b)
{
	if(b=='^')
		return 1;
	else if(b=='/' && a!='^')
		return 1;
	else if(b=='*' && (a!='^' || a!='/'))
		return 1;
	else if(b=='-' && (a!='^' || a!='/' || a!='*'))
		return 1;

	else if(b=='+' && (a!='^' || a!='/' || a!='*' || a!='-'))
		return 1;
	else
		return 0;
}
int main()
{
	string s;
	int t;
	cin>>t;
	stack<char>S;
	while(t--)
	{
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='(')
				S.push(s[i]);
			else if(s[i]>='a' && s[i]<='z')
				cout<<s[i];
			else
			{
				if(s[i]==')')
				{
					while(S.top()!='(')
					{
						char c=S.top();
						S.pop();
						cout<<c;	
					}
					S.pop();
				}
				else
				{
					while(!S.empty() && !higher_prec(S.top(),s[i]))  // b> a
					{
						
						char c=S.top();
						S.pop();
						cout<<c;
					}
					S.push(s[i]);
				}
			}
		}
		while(!S.empty())
		{
			char c=S.top();
			S.pop();
			cout<<c;
		}
		cout<<endl;
	}
}

