#include <bits/stdc++.h>

using namespace std;

int main(){

   ios::sync_with_stdio(0);
   cin.tie(0);

   int T;
   cin>>T;
   while(T--){
      string s;
      cin>>s;
      int ans=1;
      for(auto x:s)
          ans *= x - '0';
      cout<<ans<<'\n';
   }

   return 0;
}