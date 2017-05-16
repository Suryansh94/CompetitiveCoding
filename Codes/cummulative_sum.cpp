// credit raziman sir...
#include <bits/stdc++.h>
using namespace std;
int best_cumulative_sum(int ar[],int N,int K)
{
    set<int> cumset;
    cumset.insert(0);
    int best=0,cum=0;
    for(int i=0;i<N;i++)
    {
        cum+=ar[i];
        set<int>::iterator sit=cumset.lower_bound(cum-K);
        if(sit!=cumset.end())best=max(best,cum-*sit);
        cumset.insert(cum);
    }
    return best;
}
int main()
{
  int n,k,cumm=0,best=0;
  cin>>n>>k;
  int a[n];
  // Find subarray with sum <=k
  for(int i=0;i<n;i++)
    cin>>a[i];
  cout<<best_cumulative_sum(a,n,k)<<endl;;
  
}