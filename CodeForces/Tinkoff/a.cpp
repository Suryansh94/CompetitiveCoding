#include <bits/stdc++.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
 //    freopen("inp", "r", stdin);
 //    freopen("out", "w", stdout);
	// #endif
		

	int a,b,c,n;
	cin>>a>>b>>c;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
		{
			int val;
			cin>>val;
			v.push_back(val);
		}
	sort(v.begin(),v.end());
	// >b <c
	vector<int>:: iterator it;
	it = upper_bound(v.begin(),v.end(),b);
	if(it==v.end())
	{
		cout<<0<<endl;
		return 0;
	}
	std::vector<int> :: iterator it1;
	// for(int i=0;i<v.size();i++)
	// 	cout<<v[i]<<" ";
	// cout<<endl;
	// 1 2 2 2 5 6 6 6 
	it1 = lower_bound(v.begin(),v.end(),c);
	// cout<<*it<<" "<<*it1<<endl;
	cout<<it1-it<<endl;
}