#include <bits/stdc++.h>
using namespace std;
long Pow(int a,int b)
{
	long ans=1;
	while(b)
	{
		if(b&1)
			ans*=a;
		a*=a;
		b>>=1;
	}
	return ans;

}
int main()
{
	int n;;
	cin>>n;
	if(n<10)
		cout<<1<<endl;
	else
	{
		int dig=0,num=n;
		while(num)
		{
			num/=10;
			dig++;
		}
		int last = n/(Pow(10,dig-1));
		last++;
		cout<<last*Pow(10,dig-1)-n;
	}
}