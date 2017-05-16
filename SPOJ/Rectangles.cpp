
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
	int A,ans=0;
	cin>>A;
	for(int i=1;i*i<=A;i++)
	{
		ans+=((A/i)-(i-1));
	}
	cout<<ans<<endl;
}

