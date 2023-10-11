#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   int a[110];

   cin>>n;
   for(int i=0;i<n;i++)
    cin>>a[i];
   sort(a,a+n);
   int cnt=1;
   for(int i=1;i<n;i++)
      if(a[i]!=a[i-1])
        cnt++;
   cout<<cnt<<'\n';
   cout<<a[0]<<" ";
   for(int i=1;i<n;i++)
      if(a[i]!=a[i-1])
         cout<<a[i]<<" ";
   return 0;
}