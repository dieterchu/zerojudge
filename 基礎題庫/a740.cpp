#include <bits/stdc++.h>

using namespace std;

bool sieve[45000];

int main(){

   sieve[0]=sieve[1]=true;
   for(int i=2;i<45000;i++){
      if(!sieve[i]){
         for(int j=i+i;j<45000;j+=i)
            sieve[j]=true;
      }
   }
   int x;
   while(cin>>x){
       int ans=0;
       for(int i=2;i*i<=x;i++){
          while(x%i==0){
             ans+=i;
             x/=i;
          }
       }
       if(x>1)
         ans+=x;
       cout<<ans<<'\n';
   }
   return 0;
}