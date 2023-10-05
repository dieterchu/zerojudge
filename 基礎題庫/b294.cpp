#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int ans=0;
   cin>>n;
   for(int i=1;i<=n;i++){
       int x;
       cin>>x;
       ans+=x*i;
       
   }
   cout<<ans<<'\n';
     
}