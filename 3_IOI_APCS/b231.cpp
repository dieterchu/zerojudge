#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  while(cin>>n){
      priority_queue<pair<int,int>> pq;
      for(int i=0;i<n;i++){
          int p,b;
          cin>>p>>b;
          pq.push({b,p});
      }
      int ptime=0;
      int ans=0;
      while(!pq.empty()){
         ptime += pq.top().second;
         ans = max(ans, ptime+pq.top().first);
         pq.pop();
      }
      cout<<ans<<'\n';
  }
  return 0;
}