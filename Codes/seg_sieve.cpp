// Seg-Sieve
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>primes;
int p[100010];
void init(int m)
{
  for(int i=2;i<=m;i++)
  {
    p[i]=1;
  }
  for(int i=2;i*i<=m;i++)
  {
    if(p[i])
    {
      for(int j=i+i;j<=m;j+=i)
      {
        p[j]=0;
      }
    }
  }
  for(int i=2;i<=m;i++)
  {
    if(p[i])
      primes.push_back(i);
  }
}
void solve()
{
  int s=primes.size();
  for(int i=100001;i<=1000000000;i++)
  {
    int f=0;
    for(int j=0;j<s;j++)
    {
      if(i%primes[j]==0)
      {
        f=1;
        break;
      }
    }
    if(!f)
      primes.push_back(i);
  }
}
int main()
{
  int n,m;
  cin>>n>>m;
  int lim =ceil(sqrt(m));
  init(lim);
  // cout<<primes.size()<<endl;
  vector<int>list;
  int check[1000010];
  memset(check,1,sizeof(check));
  if(lim>n)
  {
    for(int i=n;i<=lim;i++)
    {
      // cout<<i<<" "<<p[i]<<endl;
      if(p[i])
        list.push_back(i);
    }
    // lim to m 
    for(int i=0;i<primes.size();i++)
    {
      int start = floor(lim/primes[i])*primes[i];
      if(start<lim)
        start+=primes[i];
      for(int j=start;j<=m;j+=primes[i])
      {
        check[j-lim]=0;
      }  
    }
    for(int i=lim;i<=m;i++)
    {

      if(check[i-lim])
        list.push_back(i);;
    }
  }
  else
  {
     for(int i=0;i<primes.size();i++)
     {
       int start=floor(n/primes[i])*primes[i];
       if(start<n)
        start+=primes[i];
      for(int j=start;j<=m;j+=primes[i])
      {
        check[j-n]=0;
      }
     }
     for(int i=n;i<=m;i++)
     {
      if(check[i-n])
        list.push_back(i);
     }
  }
  int total = list.size();
  int curr;
  if(total>0) curr= list[0];
  int ans=0;
  for(int i=1;i<total;i++)
  {
    // cout<<list[i]<<endl;
    if(abs(curr-list[i])==2)
      ans++;
    curr=list[i];
  } 
  cout<<ans<<endl;
}
