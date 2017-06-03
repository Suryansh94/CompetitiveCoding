#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
vector<int> V[N], g[N];
bool mark[N];
int deg[N], size[N];
int ans[N], par[N],comp;

int find(int a)
{
    while(par[a]!=a)
    {
        par[a]=par[par[a]];
        a=par[a];
    }
    return a;
}
void join(int u, int v) {
    u = find(u);
    v = find(v);
    if(u == v) return;
    if(size[u] < size[v]) swap(u, v);
    size[u] += size[v];
    par[v] = u;
    comp--;
}
int main()
{
    int t,n,m,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        memset(deg, 0, sizeof deg);
        for(int i = 1; i <= n ;i++) V[i].clear(), g[i].clear();
        for(int i=0;i<m;i++)
        {
            cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
            deg[a]++;
            deg[b]++;
        }
        memset(mark, 0, sizeof mark);
        for(int i = 1; i <= n; i++) {
            V[deg[i]].push_back(i);
            par[i] = i;
            size[i] = 1;
        }

        comp = n;
        for(int i = n - 1; i >= 0; i--) {
            ans[i] = comp - 1;
            for(int u : V[i]) {
                mark[u] = 1;
                for(int v : g[u]) {
                    if(!mark[v]) continue;
                    join(u, v);
                }
            }
        }
        for(int i = 0; i < n; i++) printf("%d ", ans[i]);
            printf("\n");
    }
    

}