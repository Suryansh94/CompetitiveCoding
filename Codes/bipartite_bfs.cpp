#include<bits/stdc++.h>
vector<int>g[100010];
int visited[100010];
int color[100010];
int bfs(int n,int c)
{
  visited[n]=1;
  color[n]=1;
  queue<int>q;
  q.push(n);
  while(!q.empty())
  {
    int front= q.front();
    q.pop();
    for(int i=0;i<g[front].size();i++)
    {
      if(!visited[g[front][i]])
      {
        visited[g[front][i]]=1;
        color[g[front][i]]=!color[front];
        q.push(g[front][i]);
      }
      else if(visited[g[front][i]] and color[g[front][i]]==color[front])
        {
          return 1;
        }
    }
  }
  return 0;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n,m;

}
