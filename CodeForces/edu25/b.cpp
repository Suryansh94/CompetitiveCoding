// icst and i'll ngu 
#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define inf 1e18
int main()
{
	// ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("inp","r",stdin);
	// freopen ("out","w",stdout);
	string s[10];
	for(int i=0;i<10;i++)
		cin>>s[i];

	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(s[i][j]=='.')
			{
				s[i][j]='X';
				int cnt=0;
				for(int k=j;k<10;k++)
				{
					if(s[i][k]=='X')
						cnt++;
					else
						break;
				}
				for(int k=j-1;k>=0;k--)
				{	
					if(s[i][k]=='X')
						cnt++;
					else
						break;
				}
				if(cnt>=5)
				{
					cout<<"YES\n";
					return 0;
				}

				cnt=0;
				for(int k=i;k<10;k++)
				{
					if(s[k][j]=='X')
						cnt++;
					else
						break;
				}
				for(int k=i-1;k>=0;k--)
				{	
					if(s[k][j]=='X')
						cnt++;
					else
						break;
				}
				if(cnt>=5)
				{
					cout<<"YES\n";
					return 0;
				}


				cnt=0;
				for(int k=i,l=j;k>=0 and l<10 ;k--,l++)
				{
					if(s[k][l]=='X')
						cnt++;
					else
						break;
				}
				for(int k=i+1,l=j-1;k>=0 and k<10 and l>=0 ;k++,l--)
				{
					if(s[k][l]=='X')
						cnt++;
					else
						break;
				}
				if(cnt>=5)
				{
					cout<<"YES\n";
					return 0;
				}
				cnt=0;
				for(int k=i,l=j;k>=0 and l>=0 ;k--,l--)
				{
					if(s[k][l]=='X')
						cnt++;
					else
						break;
				}
				for(int k=i+1,l=j+1;k<10 and l<10 ;k++,l++)
				{
					if(s[k][l]=='X')
						cnt++;
					else
						break;
				}
				if(cnt>=5)
				{
					cout<<"YES\n";
					return 0;
				}

			s[i][j]='.';
			}
		}

	}
	cout<<"NO\n";
	return 0;
}