#include <bits/stdc++.h>
using namespace std;

int main() {

    int dp[25010]={0};
    int p[510];
    int n,k;

    cin>>n>>k;
    int sum = 0;
    for(int i=0;i<n;i++){
         cin>>p[i];
         sum += p[i];
    }
    int half = sum / 2;
    for(int i=0;i<n;i++){
        for(int j=half;j>=p[i];j--){
            dp[j] = max(dp[j],dp[j-p[i]]+p[i]);
        }
    }
    cout<<dp[half]<<" "<<sum-dp[half]<<'\n';
    return 0;
}