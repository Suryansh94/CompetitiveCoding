https://www.hackerearth.com/august-clash-16/algorithm/joseph-and-arrayaugclash/


#include <bits/stdc++.h>
 
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ld long double
#define f first
#define s second
#define ll long long
 
using namespace std;
 
const int N = 2e6 + 5;
 
const int mod = 1e9 + 7;
 
void add(int &a, int b)
{
  a += b;
  if (a >= mod) a -= mod;
}
 
int sum(int a, int b)
{	
  add(a, b);
  return a;
}
 
int mult(int a, int b)
{
  return (1ll * a * b) % mod;
}
 
int n, m, a[N], ans, k, lp[N], f[N], inv[N];
 
int bp(int a, int n)  // Power
{
  int ans = 1;
  while(n)
  {
    if (n & 1) ans = mult(ans, a);
    a = mult(a, a);
    n >>= 1;
  }
  return ans;
}
 
map < int, int > cnt;
 
int cnk(int n, int k)
{
  if (n < k) return 0;
  int ans = mult(f[n], inv[k]);
  ans = mult(ans, inv[n - k]);
  return ans;
}
 
int main()
{
  ios_base::sync_with_stdio(0);
	
  clock_t start = clock();
 
  f[0] = 1;
  inv[0] = 1;
  for (int i = 1;i <= 2e6;i++) 
  {
    f[i] = mult(f[i - 1], i);
    inv[i] = bp(f[i], mod - 2);
  }
 
  for (int i = 2;i <= 1e6;i++)
    if (!lp[i])
      for (int j = i;j <= 1e6;j += i)
        if (!lp[j])
          lp[j] = i;       // BEAUTY
 
  cin >> n >> m;
  for (int i = 1;i <= n;i++) 
  {
    cin >> a[i];
    while(a[i] > 1)
    {
      int x = lp[a[i]];
      while(a[i] % x == 0) 
      {
        cnt[x]++;
        a[i] /= x;
      }
    }
  } 
  ans = 1;
  for (auto i : cnt) ans = mult(ans, cnk(i.s + m - 1, m - 1)); 
 
  cout << ans << endl;
 
  double duration = ((double) clock() - start) / (double) CLOCKS_PER_SEC;
//  cout << "Time: " << fixed << setprecision(10) << duration << endl;
	
  return 0;
}
