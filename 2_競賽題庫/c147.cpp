#include <bits/stdc++.h>

using namespace std;
int w[1010],v[1010];
int dp[1000010];
int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  stringstream ss1,ss2;
  string s1,s2;
  getline(cin,s1);
  getline(cin,s2);
  ss1.str(s1);
  ss2.str(s2);
  int n=0;

  while(ss1>>w[n]){
    ss2>>v[n];
    n++; 
  }	
  int L;
  cin>>L;
  for(int i=0;i<n;i++)
    for(int j=L;j-w[i]>=0;j--)
        dp[j] = max(dp[j],dp[j-w[i]]+v[i]);
  cout<<dp[L]<<'\n';
  return 0;
}