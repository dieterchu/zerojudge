#include <bits/stdc++.h>
using namespace std;

int a[100010];
int x;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int n,k;
  cin>>n>>k;
  for(int i=0;i<n;i++)
      cin>>a[i];
  for(int i=0;i<k;i++){
      cin>>x;
      int pos = lower_bound(a,a+n,x) - a;
      if(pos==n || a[pos]!= x)
        cout<<0;
      else
        cout<<pos+1;
      cout<<'\n';
  }
  return 0;
}