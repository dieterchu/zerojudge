#include <bits/stdc++.h>
using namespace std;


int main(){

   ios::sync_with_stdio(0);
   cin.tie(0);

   int N;
   cin>>N;
   while(N--){
       long long int a,b,c;
       cin>>a>>b>>c;
       if(a==1)
          cout<<b+c<<"\n";
       else if(a==2)
          cout<<b-c<<"\n";
       else if(a==3)
          cout<<b*c<<"\n";
       else
          cout<<b/c<<"\n";
   }
   return 0;
}
