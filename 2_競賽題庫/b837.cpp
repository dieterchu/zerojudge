#include <bits/stdc++.h>
using namespace std;
const int maxn = 41;
int main(){

   ios::sync_with_stdio(0);
   cin.tie(0);

   int fib[maxn]={0,1};
   for(int i=2;i<maxn;i++)
      fib[i] = fib[i-1] + fib[i-2];
   int T;
   cin>>T;
   while(T--){
     int a,b;
     cin>>a>>b;
     if(a>b)
         swap(a,b);
     int idx = lower_bound(fib,fib+maxn,a) - fib;
     int cnt=0;
     for(int i=idx;i<maxn && fib[i]<=b;i++,cnt++)
        cout<<fib[i]<<'\n';
     cout<<cnt<<'\n';
     if(T)
        cout<<"------\n";
   }
   return 0;
}