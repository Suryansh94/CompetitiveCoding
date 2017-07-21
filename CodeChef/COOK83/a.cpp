// icst and i'll ngu { you know it :) }  
#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
int main()
{
	// ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("inp","r",stdin);
	// freopen ("out","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
	int a=0,b=0;
	string s;
	cin>>s;
	for(char c : s)
		if(c=='D')
			a++;
		else
			b++;
	int ans1=0,ans2=0;
	char want;
	// if(a>b)
	// 	want = 'U';	
	// else
	// 	want='D';
	// // cout<<a<<" "<<b<<endl;
	want='D';
	for(int i=0;i<s.length();i++)
		{
			if(s[i]==want)
			{
				// cout<<"i is s"<<i<<endl;
				int j = i;
				for(j=i;j<s.length();j++)
					if(s[j]!=want)
						break;
				ans1++;
				i=j-1;
			}		
		}
	want='U';
	for(int i=0;i<s.length();i++)
		{
			if(s[i]==want)
			{
				// cout<<"i is s"<<i<<endl;
				int j = i;
				for(j=i;j<s.length();j++)
					if(s[j]!=want)
						break;
				ans2++;
				i=j-1;
			}		
		}

	cout<<min(ans1,ans2)<<endl;}
	return 0;
}