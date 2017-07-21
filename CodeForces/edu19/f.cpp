#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
const int mod = 1e9+7; 
int dp[N],a[N],cnt[N],pw2[N];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        cnt[a[i]]++;
    }
    pw2[0]=1;
    for(int i=1;i<N;i++)
    {
        pw2[i]=(pw2[i-1]*2)%mod;
    }
    

    for(int g=N;g>=1;g--)
    {
        int tot = 0;
        for(int i=g;i<N;i+=g)
        {
            tot+=(cnt[i]);
        }
        long long val = pw2[tot]-1;
        for(int i=g+g;i<N;i+=g)
        {
            val-=dp[i];
        }
        dp[g]=(val%mod+mod)%mod;
    }
    cout<<dp[1]<<endl;

}