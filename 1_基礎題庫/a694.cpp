#include <bits/stdc++.h>

using namespace std;

int main(){


   int n,m;


   while(cin>>n>>m){
      int a[510][510]={0};
      for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
           cin>>a[i][j];
      for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
           a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1];
        }
      for(int i=0;i<m;i++){
        int x1,y1,x2,y2;
         cin>>x1>>y1>>x2>>y2;
         cout<<a[x2][y2]-a[x1-1][y2]-a[x2][y1-1]+a[x1-1][y1-1]<<endl;
      }
   }

   return 0;
}