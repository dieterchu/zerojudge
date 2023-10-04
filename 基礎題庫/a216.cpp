#include <bits/stdc++.h>

using namespace std;

long long int f[30010];
long long int g[30010];

int main(){

   ios::sync_with_stdio(0);
   cin.tie(0);

  f[1] = g[1] = 1;
  for(int i=2;i<30010;i++){
     f[i] = i + f[i-1];
     g[i] = f[i] + g[i-1];
  }
  int n;
  while(cin>>n)
    cout<<f[n]<<" "<<g[n]<<"\n";

   return 0;
}
