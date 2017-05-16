
		
// Suryansh Agnihotri :)    


#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
        int n;
        while(scanf("%d",&n)!=EOF)
        {
                if(n%10==0)
                        printf("2\n");
                else
                        printf("1\n%d\n",n%10);
        }
        return 0;
}
