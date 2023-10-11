#include <bits/stdc++.h>

using namespace std;

int main(){

  long long dp[101]={1,1};

  for(int i=2;i<101;i++)
      dp[i] = dp[i-1] + i*i;

  int n;
  while(cin>>n&&n)
    cout<<dp[n]<<'\n';
  return 0;
}