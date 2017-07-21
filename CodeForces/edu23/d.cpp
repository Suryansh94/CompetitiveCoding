
// icst and i'll ngu { you know it :) }  
#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
int a[N];
int l1[N],r1[N],l2[N],r2[N];
stack<int>s1,s2,s3,s4;
int main()
{
    // ios_base:: sync_with_stdio(false); cin.tie(0);
    // freopen ("inp","r",stdin);
    // freopen ("out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];

    for(int i=1;i<=n;i++)
    {
        while(!s1.empty() and a[s1.top()]>=a[i])
            s1.pop();
        if(s1.empty())
            l1[i]=1;
        else
            l1[i]=s1.top()+1;
        s1.push(i);


        while(!s2.empty() and a[s2.top()]<=a[i])
            s2.pop();
        if(s2.empty())
            l2[i]=1;
        else
            l2[i]=s2.top()+1;
        s2.push(i);
    }
    for(int i=n;i>=1;i--)
    {
        while(!s3.empty() and a[s3.top()]>a[i])
            s3.pop();
        if(s3.empty())
            r1[i]=n;
        else
            r1[i]=s3.top()-1;
        s3.push(i);


        while(!s4.empty() and a[s4.top()]<a[i])
            s4.pop();
        if(s4.empty())
            r2[i]=n;
        else
            r2[i]=s4.top()-1;
        s4.push(i);
    }
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        ans+=(1ll*a[i]*(i-l2[i]+1)*(r2[i]-i+1));
        ans-=(1ll*a[i]*(i-l1[i]+1)*(r1[i]-i+1));
    }
    cout<<ans<<endl;
    
    return 0;
}