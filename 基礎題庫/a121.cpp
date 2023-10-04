#include <bits/stdc++.h>
using namespace std;

#define MAXN 10010
bool sieve[10010];
vector<int> prime;

bool isPrime(int x){
    if(x <MAXN)
        return !sieve[x];
    for(auto p:prime){
        if(p*p>x)
          break;
        if(x%p==0)
            return false;
    }
    return true;

}
int main(){

   ios::sync_with_stdio(0);
   cin.tie(0);
   sieve[0] = sieve[1] = true;
   for(int i=2;i<MAXN;i++){
       if(!sieve[i]){
           prime.push_back(i);
           for(int j=i+i;j<MAXN;j+=i)
              sieve[j] = true;
       }
   }
   int a,b;
   while(cin>>a>>b){
     int cnt=0;
     for(int i=a;i<=b;i++){
        if(isPrime(i))
            cnt++;
     }
     cout<<cnt<<'\n';
   }

   return 0;
}