#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// vector<int>primes;
// int p[100010];
// void init(int m)
// {
//   for(int i=2;i<=m;i++)
//   {
//     p[i]=1;
//   }
//   for(int i=2;i*i<=m;i++)
//   {
//     if(p[i])
//     {
//       for(int j=i+i;j<=m;j+=i)
//       {
//         p[j]=0;
//       }
//     }
//   }
//   for(int i=2;i<=m;i++)
//   {
//     if(p[i])
//       primes.push_back(i);
//   }
// }
int x[]={1,0,-1,0};
int y[]={0,1,0,-1};
int visited[500][500];
int n,m;
char a[500][500];
int cycle=0;
void dfs(int px,int py,int fromX,int fromY,char c)
{
  if(visited[px][py])
    cycle=1;
  else
  {
    visited[px][py]=1;
    for(int i=0;i<4;i++)
    {
      int go_x=px+x[i];
      int go_y=py+y[i];
      if(go_x==fromX and go_y==fromY)
        continue;
      if(go_x>=0 and go_y>=0 and go_x<n and go_y<m and a[go_x][go_y]==c)
        dfs(go_x,go_y,px,py,c);
    }
  }

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  cin>>n>>m;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>a[i][j];
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(!visited[i][j])
      {
        dfs(i,j,-1,-1,a[i][j]);
      }
    }
  }
  if(cycle)
    cout<<"Yes\n";
  else
    cout<<"No\n";
}