#include <bits/stdc++.h>
using namespace std;

int main(){
  int t,n,p;
  int len[30];

  cin>>t;
  while(t--){  
    int dp[1005]={0};
    cin>>n>>p;    
    for(int i=0;i<p;i++)
        cin>>len[i];
    dp[0] = 1;
    for(int i=0;i<p;i++){
        for(int j=n;j>=0;j--){
            int k = j-len[i];
            if(k>=0 && k<=n && dp[k]==1)
                dp[j] = 1;
        }
    }
    if(dp[n])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
  }
}