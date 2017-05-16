// Longest substring that is a regular bracket sequence
// http://codeforces.com/contest/5/problem/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	stack<int>st;
	cin>>s;
	int l = s.length();
	int req[l],curr[l];
	// cur : position of corresponding open bracket, or -1 if closing bracket doesn't belong to any regular bracket sequence.
	// req : position of earliest opening bracket, such that substring s(c[j], j) (both boundaries are inclusive) is a regular bracket sequence
	for(int i=0;i<l;i++)
	{
		req[i]=curr[i]=-1;
	}
	for(int i=0;i<l;i++)
	{
		if(s[i]=='(')
		{
			st.push(i);
		}
		else
		{
			// i got a closing one
			if(!st.empty())
			{
				req[i]=curr[i]=st.top();
				st.pop();
				if(s[curr[i]-1]==')' && req[curr[i]-1]!=-1)
				{
					req[i]=req[curr[i]-1];
				}
			}
		}
	}
	int ans=0,cnt=0;
	for(int i=0;i<l;i++)
	{
		if(req[i]!=-1)
			ans=max(ans,abs(i-req[i])+1);
	}
	for(int i=0;i<l;i++)
	{
		if(req[i]!=-1 && abs(i-req[i])+1==ans)
			cnt++;
	}
	cout<<ans<<" "<<max(cnt,1)<<endl;
}