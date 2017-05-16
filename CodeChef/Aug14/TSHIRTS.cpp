#include <bits/stdc++.h>
using namespace std;
vector<int> split(const string &s, char delim) {
    stringstream ss(s);
    string item;
    vector<int> tokens;
    while (getline(ss, item, delim)) {
    	int val;
    	stringstream(item)>>val;
        tokens.push_back(val);
    }
    return tokens;
}
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("inp", "r", stdin);
    freopen("out", "w", stdout);
	#endif
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin.ignore();
		string s;
		vector<int>v[n];
		for(int i=0;i<n;i++)
		{
			getline(cin,s);
			v[i]=split(s,' ');
		}
		
	}	
}