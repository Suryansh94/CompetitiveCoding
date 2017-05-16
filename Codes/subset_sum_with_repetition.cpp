//http://codeforces.com/problemset/problem/538/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
#define mex INT_MAX
vector<int>keep;
int dp[1000010];
int valid(int n)
{
    while(n)
    {
        if(n%10==0 or n%10==1)
        {
            n/=10;
        }
        else
            return 0;
    }
    return 1;
}

void pre()
{
    for(int i=1;i<=1000001;i++)
    {
        if(valid(i))
            keep.push_back(i);
    }
}
void print(int N) {
  if(N ==0) return;
  for(int i = 0; i < 65; i++) {
    if(keep[i] <= N and dp[N-keep[i]] == dp[N] - 1) {
      cout << keep[i] << " ";
      print(N - keep[i]);
      return; 
    } 
  } 
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    pre();
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
        dp[i]=mex;
    dp[0]=0;
    for(int sum=1;sum<=n;sum++)
    {
        for(int i=0;i<65;i++)
        {
            if(keep[i]<=sum)
            {
                dp[sum]=min(dp[sum],1+dp[sum-keep[i]]);
            }
        }
    }
   cout<<dp[n]<<endl; 
   print(n);
   cout<<endl;    
}
