#include <bits/stdc++.h>

using namespace std;
const int MOD = 998244353;

long long int dp[1001][1001][2][2];
int main(){

  int X;
  string N;

  cin>>X>>N;
  reverse(N.begin(),N.end());
  dp[0][0][0][0]=1;
  for(int i=0;i<X;i++){
    for(int s=0;s<=i;s++){
        for(int f=0;f<=1;f++){
          for(int leading=0;leading<=1;leading++){
             for(int d=0;d<10;d++){
               int new_s;
               int new_f = int((d>N[i]-'0') || (d==N[i]-'0' && f));
               int new_leading;

               if(d==0 ){
                    if(leading){
                       new_s = s;
                       new_leading = 1;
                    }else{
                       new_s = s;
                       new_leading = 1;
                    }
               }else if(d==1)
                   if(leading){
                        new_s = 1;
                        new_leading = 0;
                   }else{
                       new_s = s + 1;
                       new_leading = 0;
                   }
               else{
                  new_s = 0;
                  new_leading = 0;
               }
               dp[i+1][new_s][new_f][new_leading] += dp[i][s][f][leading];
               dp[i+1][new_s][new_f][new_leading] %= MOD;
            }
          }
        }
    }
  }
  long long int ans = 0;
  for(int j=1;j<=X;j++){
        ans = (ans + (dp[X][j][0][0] * j)%MOD )%MOD;
        ans = (ans + (dp[X][j][0][1] * j)%MOD )%MOD;
  }
  cout<<ans<<endl;
  return 0;
}