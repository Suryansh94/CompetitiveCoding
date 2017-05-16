http://codeforces.com/contest/377/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int x[]={1,0,-1,0};
int y[]={0,1,0,-1};
int visited[1000][1000];
char a[1000][1000];
int cnt=0,visit_cnt=0;
int n,m,k;
void dfs(int x1,int y1)
{
  visit_cnt++;
  visited[x1][y1]=1;
  a[x1][y1]='*';
  for(int i=0;i<4;i++)
    {
      int go_x = x1+x[i];
      int go_y = y1+y[i];
      if(visit_cnt!=cnt-k and !visited[go_x][go_y] and  a[go_x][go_y]=='.' and go_x<n and go_x>=0 and go_y>=0 and go_y<m)
        dfs(go_x,go_y);
    }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  cin>>n>>m>>k;
  int px,py;
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
      cin>>a[i][j];
      if(a[i][j]=='.')
      {
        px=i,py=j;
        cnt++;
      }
    }
    dfs(px,py);
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        if(a[i][j]=='*')
          cout<<".";
        else if(a[i][j]=='.')
        {
          cout<<"X";
        }
        else
        {
          cout<<a[i][j];
        }
      }
      cout<<endl;
    }
}
