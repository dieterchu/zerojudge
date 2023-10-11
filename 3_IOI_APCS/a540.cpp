#include <iostream>
using namespace std;
int main(){

  int dp[10010];
  int N;

  while(cin>>N && N){
    for(int i=0;i<N;i++)
        cin>>dp[i];
    int ans = dp[0];
    for(int i=1;i<N;i++){
        dp[i] = max(dp[i],dp[i]+dp[i-1]);
        ans = max(ans,dp[i]);
    }
    if(ans<=0)
        cout<<"Losing streak.\n";
    else
        cout<<"The maximum winning streak is "<<ans<<".\n";
  }
  return 0;
}