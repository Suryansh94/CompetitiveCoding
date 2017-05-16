
		
// Suryansh Agnihotri :)    

// Chinese Remainder Theorem
/*
	x= a1 mod n1
	x= a2 mod n2
	
	CRT
	x = (a1b1n2 + a2b2n1)%N  (N=n1n2)
	bi = inv(N/ni)mod ni  

*/
#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<climits>
#include<cmath>
#include<string>
#include<map>
#define INF 10000000
#define pi 3.1415926536
using namespace std;

/*int expo(int a,int b)
{
	int res=1;
	while(b)
	{
		if(b&1)
		{
			res=(res*a)%mod
		}
		a=(a*a)%mod;
		b>>=1;
	}
	return res;
}*/


// Solving ax + by = c 

// x will be my inverse  since ax=1(mod m)

int extgcd(int a,int b,int &x,int &y)
{
	if(b==0)
	{
		x=1;
		y=0;
		return a;
	}
	int x1,x2;
	int g = extgcd(b,a%b,x1,y1);
	x=y1;
	y=x1-(a/b)*y1;
	return g;
}
int x,y,a1,a2,b1,b2,n1,n2;
int main()
{
	cin>>a1>>a2>>n1>>n2;

	/*b1 = expo(n2,n1-2);         Fermats not applicabe 
	b2 = expo(n1,n2-2);*/	
	extgcd(n2,n1,x,y);  // return gcd that must be 1
	b1=x;
	extgcd(n1,n2,x,y);	
	b2=x;
	int ans = (a1*b1*n2 + a2*b2*n1 )%(n1*n2);
	cout<<x<<endl;
}

