//http://codeforces.com/contest/327/problem/A
// dp[i] stores maximum sum till that element , ans and start stores indices
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
int main()
{
  int n,i;
  cin>>n;
  int a[n],dp[n],ans,start[n],b[n],sum=0;;
  for(int i=0;i<n;i++)
  {
    cin>>b[i];
    if(b[i])
      a[i]=-1;
    else
      a[i]=1;
  }
  dp[0]=a[0];
  start[0]=ans=0;
  for(i=1;i<n;i++)
  {
    if(a[i]+dp[i-1]>a[i])
    {
      dp[i]=dp[i-1]+a[i];
      start[i]=start[i-1];
    }
    else
    {
      dp[i]=a[i];
      start[i]=i;
    }
    if(dp[ans]<dp[i])
      ans=i;
  }
  // cout<<start[ans]<<" "<<ans<<" "<<dp[ans]<<endl;
  for(int i=0;i<n;i++)
  {
    if(i>=start[ans] and i<=ans)
    {
      if(!b[i])
        sum++;
    }
    else
      sum+=b[i];
  }
  cout<<sum<<endl;
}
