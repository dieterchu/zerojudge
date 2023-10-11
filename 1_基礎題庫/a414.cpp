#include <bits/stdc++.h>

using namespace std;

int main(){

   ios::sync_with_stdio(0);
   cin.tie(0);
   int N;
   while(cin>>N&&N){
      int ans=0;

      while(N && N&1){
         ans++;
         N=N>>1;

      }
      cout<<ans<<'\n';
   }

   return 0;
}
