#include <bits/stdc++.h>

using namespace std;
int a[210][210];

int main(){
  

   ios::sync_with_stdio(0);
   cin.tie(0);

   int M,N;

   while(cin>>M>>N){
       memset(a,0,sizeof(a));
       for(int i=1;i<=M;i++)
        for(int j=1;j<=N;j++){
           cin>>a[i][j];
           if(a[i][j])
              a[i][j] += a[i][j-1];
        }  
        int mx = -1;
        for(int i=1;i<=M;i++)
          for(int j=1;j<=N;j++){
              int w=INT_MAX;
              for(int h=0;i-h>0 && a[i-h][j];h++){
                   w = min(w,a[i-h][j]);
                   mx = max(mx,(h+1)*w);
              }
          }
        cout<<mx<<"\n";
   }
 
}