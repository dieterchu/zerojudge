#include <bits/stdc++.h>
using namespace std;
bool mycmp(int a, int b){
   return (a%10<b%10) || ((a%10==b%10)&&(a>b));
}
int main(){

  int n;

  while(cin>>n){
    int a[1010];

    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,mycmp);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<'\n';
  }
   return 0;
}