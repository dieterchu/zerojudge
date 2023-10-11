#include <bits/stdc++.h>
using namespace std;

int a[110],b[100];
int na,nb;

int LCS(){
    
    int dp[110][110]={0};   
    for(int i=1;i<=na;i++)
      for(int j=1;j<=nb;j++){
          if(a[i] == b[j])
             dp[i][j] = dp[i-1][j-1] + 1;
          else
             dp[i][j] = max(dp[i-1][j],dp[i][j-1]);         
      }
      return dp[na][nb];
}
int main()
{
    
  int Case=1;
  
  while(cin>>na>>nb&&na&&nb){   
     for(int i=1;i<=na;i++)
       cin>>a[i];
     for(int i=1;i<=nb;i++)
       cin>>b[i];
     cout<<"Twin Towers #"<<Case++<<"\nNumber of Tiles : "<<LCS()<<"\n\n";  
  }
  return 0;
}