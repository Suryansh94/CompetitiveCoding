// icst and i'll ngu { you know it :) }  
#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
int cnt[26][100001];
map<char,int>m;
int main()
{
	ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("inp","r",stdin);
	// freopen ("out","w",stdout);

	string s;
	cin>>s;
	map<int,char>m;
	int n  = s.length();
	m[n-1]=s[n-1];
	for(int i=n-2;i>=0;i--)
	{
		m[i]=min(m[i+1],s[i]);
	}
	stack<char>st;
	for(int i=0;i<s.length();i++)
	{
		while(!st.empty() and m[i]>=st.top())
		{
			cout<<st.top();st.pop();
		}
		if(m[i]!=s[i])
			st.push(s[i]);
		else
		{
			cout<<s[i];
		}
	}
	while(!st.empty())
	{
		cout<<st.top();
		st.pop();
	}



	return 0;
}