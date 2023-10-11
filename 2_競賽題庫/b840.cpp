#include <bits/stdc++.h>

using namespace std;

int main(){
   int a[25][25]={0};
   int N;

   cin>>N;
   for(int i=1;i<=N;i++)
     for(int j=1;j<=N;j++)
       cin>>a[i][j];

   for(int i=1;i<=N;i++)
     for(int j=1;j<=N;j++)
        a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1];

   int ans = 0;
   for(int i=1;i<=N;i++)
     for(int j=1;j<=N;j++)
       for(int k=i;k<=N;k++)
         for(int l=j;l<=N;l++){
             ans = max(ans,a[k][l]-a[i-1][l]-a[k][j-1]+a[i-1][j-1]);
         }
    cout<<ans<<'\n';

   return 0;
}