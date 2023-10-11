#include <bits/stdc++.h>

using namespace std;

int main(){

  long long dp[101]={1,1};

  for(int i=2;i<100;i++)
      dp[i] = dp[i-2] + dp[i-1];

  int n;
  while(cin>>n)
    cout<<dp[n]<<'\n';
  return 0;
}