#include <bits/stdc++.h>
using namespace std;
int main() {
   int N;
   int a[10010];
   
   cin>>N;
   for(int i=0;i<N;i++)
     cin>>a[i];
   int ans = 0;
   for(int i=0;i<N-1;i++)
     for(int j=0;j<N-i-1;j++){
         if(a[j]>a[j+1]){
             swap(a[j],a[j+1]);
             ans++;
         }
     }
    cout<<ans<<'\n';
     
}