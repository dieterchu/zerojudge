#include <bits/stdc++.h>

using namespace std;

int main(){

  int a[100010];
  int n,m;

  while(cin>>n>>m){
      a[0] = 0;
      for(int i=1;i<=n;i++){
          cin>>a[i];
          a[i] += a[i-1];
      }
      for(int i=0;i<m;i++){
          int L,R;
          cin>>L>>R;
          cout<<a[R] - a[L-1]<<'\n';
      }
  }
  return 0;
}