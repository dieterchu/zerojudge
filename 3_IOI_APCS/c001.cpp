#include <bits/stdc++.h>
using namespace std;

char s[1010],t[1010];
int main(){

  while(scanf("%s%s",s+1,t+1)!=EOF){
    int LS=strlen(s+1);
    int LT=strlen(t+1);
    int dp[1010][1010]={};
    for(int i=1;i<=LS;i++)
      for(int j=1;j<=LT;j++){
          if(s[i]==t[j])
               dp[i][j] = dp[i-1][j-1] + 1;
          else
               dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
      }
    printf("%d\n",dp[LS][LT]);
  }
  return 0;
}