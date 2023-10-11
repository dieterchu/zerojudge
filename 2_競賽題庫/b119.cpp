#include <bits/stdc++.h>
using namespace std;

int main(){
  int s,t,n;
  int a[300];
  

  ios::sync_with_stdio(0);
  cin.tie(0);
  
  while(cin>>s>>t>>n){
      int sum=0;
      for(int i=0;i<n;i++){
         cin>>a[i];
         sum += a[i];
      }     
      double total = 0;
      total += min(sum,t/5) * s * 0.7;
      sum -= min(sum,t/5);
      total += min(sum,t/5) * s * 0.8;
      sum -= min(sum,t/5);
      total += min(sum,t/5) * s * 0.9;
      sum -= min(sum,t/5);
      total += sum * s;
      cout<<fixed<<setprecision(0)<<total - s*0.3*t<<"\n";
  }
    return 0;
}