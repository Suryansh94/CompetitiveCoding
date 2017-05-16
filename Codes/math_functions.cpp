#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
ll prime[10000000];
vector<ll>p;
#define matrix vector<vector<ll> > 

matrix matmul(matrix &a,matrix &b)
{
  int i,j,k,n=a.size(),temp;
  matrix ans(n,vector<ll>(n));
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      temp=0;
      for(int k=0;k<n;k++)
      {
        temp=(temp+a[i][k]*b[j][k])%mod;
      }
      ans[i][j]=temp;
    }
  }
  return ans;
}
matrix matpow(matrix &a,int p)
{
  
  int n=a.size();
  matrix ans(n,vector<ll>(n));
  for(int i=0;i<n;i++)
    ans[i][i]=1;
  while(p)
  {
    if(p&1)
      ans=matmul(ans,a);
    a=matmul(a,a);
    p>>=1;
  }
  return ans;
}
void seive()
{
  for(ll i=2;i*i<=1000000;i++)
  {
    if(prime[i])
      continue;
    for(ll j=i*i;j<=1000000;j+=i)
    {
      prime[j]=i;
    }
  }
  for(int i=2;i<200000;i++)
    if(!prime[i])
      p.push_back(i);
}
ll Pow(ll a,ll b)
{
  ll ans=1;
  while(b)
  {
    if(b&1)
      ans=(ans*a)%mod;
    a=(a*a)%mod;
    b>>=1;
  }
  return ans;
}
ll exgcd(ll a,ll b,ll &x,ll &y)
{
  if(b==0)
  {
    x=1;
    y=0;
    return a;
  }
  ll x1,y1,gcd;
  gcd = exgcd(b,a%b,x1,y1);
  x=y1;
  y=x1-(a/b)*y1;
  return gcd;
}
int phi(int n)
{
  int ans=n;
  for(int i=2;i*i<=n;i++)
  {
    if(n%i==0)
    {
      ans-=(ans/i);
      while(n%i==0)
        n/=i;
    }
  }
  if(n>1)
    ans-=ans/n;
  return ans;
}
ll gcd(ll a, ll b){
    if(b == 0)  return a;
    return gcd(b, a%b);
}


ll lcm(ll a, ll b){
    return (a*b) / gcd(a, b);
}


ll invmod(ll n){
    return Pow(n, mod-2);
}
int main()
{

}
