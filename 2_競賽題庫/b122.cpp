#include <bits/stdc++.h>
using namespace std;
int a[110][110],acc[110][110];
int m,n;

int move(int r,int c){
    
    int t=0;
    for(int i=1;i<=m;i++)
      for(int j=1;j<=n;j++){
          t += a[i][j] *(abs(r-i)+abs(c-j));          
      }
      return t;
}

int main(){
  

   ios::sync_with_stdio(0);
   cin.tie(0);

   while(cin>>m>>n){
       for(int i=1;i<=m;i++)
         for(int j=1;j<=n;j++){
            cin>>a[i][j];
            acc[i][j] = a[i][j]+acc[i-1][j]+acc[i][j-1]-acc[i-1][j-1];
         }        
         int start[110];
         start[1] = move(1,1);
         for(int i=2;i<=m;i++)
           start[i] = start[i-1]+acc[i-1][n]-(acc[m][n] -acc[i-1][n]);
         int mi,mj,mt=INT_MAX,t=INT_MAX;
         for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(j==1)
                  t = start[i];
                else
                  t= min(t,t+acc[m][j-1]-(acc[m][n]-acc[m][j-1]));                
                if(t<mt){
                   mt = t;
                   mi = i;
                   mj = j;
                }
            } 
        }
        cout<<mi<<" "<<mj<<"\n";
   }
   return 0;
}