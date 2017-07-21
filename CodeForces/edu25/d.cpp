// icst and i'll ngu 
#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define inf 1e18
int A[26],B[26];
int main()
{
    // ios_base:: sync_with_stdio(false); cin.tie(0);
    // freopen ("inp","r",stdin);
    // freopen ("out","w",stdout);

    string a,b;
    cin>>a>>b;
    for(int i=0;i<b.length();i++)
    {
        B[b[i]-'a']++;
    }
    for(int i=0;i<a.length();i++)
    {
        if(a[i]!='?')A[a[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        A[i]-=B[i];
    }
    int ptr=0;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='?')
        {
            int flag=0;
            for(int j=0;j<26;j++)
            {
                if(A[j]<0)
                {
                    cout<<(char)('a'+j);
                    flag=1;
                    A[j]++;
                    break;
                }
            }
            if(!flag)
            {
                while(ptr<b.length())
                {
                    if(A[b[ptr]-'a']>0)
                    {
                        A[b[ptr]-'a']--;
                        ptr++;
                        if(ptr==b.length())
                        {
                            ptr=0;
                        }
                    }
                    else
                    {
                        cout<<b[ptr];ptr++;
                        break;
                    }
                }
                if(ptr==b.length())ptr=0;
            }
        }
        else
        {
            cout<<a[i];
        }
    }
    cout<<endl;
    return 0;
}