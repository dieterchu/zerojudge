#include <bits/stdc++.h>

using namespace std;
int dp[2][100010];

int main()
{
    int m,s,n;
    
    while(cin>>m>>s>>n){
        int idx=1,sum=0;
        int keep=m-s;
        for(int i=0;i<n;i++,idx^=1){
            int x;
            cin>>x;
            sum += x;
            for(int j=0;j<=keep;j++){
                 if(j<x)
                     dp[idx][j] = dp[idx^1][j];
                 else
                     dp[idx][j] = max(dp[idx^1][j], dp[idx^1][j-x]+x);
            }
        }
        cout<<sum - dp[idx^1][keep]<<endl;
    }

    return 0;
}