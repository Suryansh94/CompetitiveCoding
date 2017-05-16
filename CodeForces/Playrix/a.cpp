#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,k,d;
	int s;
	cin>>n>>t>>k>>d;
	int time1 = 0;
	int time2=0;
	s=n;
	// cout<<time1<<endl;
	for(int i=0;;i++)
	{
		time1++;
		if(time1%k==0)
			s-=k;
		if(s<=0)
			break;
	}
	s=n;
	for(int i=0;;i++)
	{
		time2++;
		if(time2>d and (time2-d)%k==0)
			s-=k;
		if(time2%k==0)
			s-=k;
		if(s<=0)
			break;
	}
	if(time2<time1)
		cout<<"YES";
	else
		cout<<"NO";
}	