#include <bits/stdc++.h>
using namespace std;
int main() {
   int N;
   cin>>N;
   int Max = -1;
   map<int,int> mp;
   for(int i=0;i<N;i++){
       int x;
       cin>>x;
       mp[x]++;
       if(mp[x]>Max)
         Max=mp[x];
   }
   for(auto x:mp)
     if(x.second==Max){
         cout<<x.first<<" "<<x.second<<'\n';
     }
}