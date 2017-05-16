
https://www.codechef.com/LTIME08/problems/CHRL4	

// Suryansh Agnihotri :)    

#include<bits/stdc++.h>
#define INF 10000000
#define pi 3.1415926536
#define mod 1000000007
#define maxn 100000
using namespace std;
int n, k, a[maxn], i, helper[maxn];
double dp[maxn];
priority_queue<pair<double, int> > pq;
using namespace std;
int main()
{
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	dp[0] = log(a[0]); // initializing dp for the first street
	helper[0] = a[0]; // initializing helper for the first street
	pq.push(make_pair(-dp[0], 0)); // using priority queue in order to the the optimal "from" street
	for(i = 1; i < n; i++) {
		while (i - pq.top().second > k) pq.pop(); // delete all the streets, from which we're no longer able to reach the current
		dp[i] = dp[pq.top().second] + log(a[i]); // take the optimal previous street to recalculate dp
		helper[i] = (helper[pq.top().second] * 1LL * a[i]) % mod; // and helper
		pq.push(make_pair(-dp[i], i)); // adding this street to the priority queue to be able to recalculate some dp values from it
	}
	printf("%d\n", helper[n - 1]); // outputting an answer
    return 0;
	
}

