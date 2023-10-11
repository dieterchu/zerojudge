#include <bits/stdc++.h>
using namespace std;

int a[15][15];
int N,M;
int ans = -1;
int dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}};

void dfs(int r, int c, int d,int len){

    ans = max(ans,len);
    for(int i=0;i<4;i++){
        if(i%2!=d%2){
            int x = r+dir[i][0];
            int y = c+dir[i][1];
            if(!a[x][y]){
                a[x][y] = 1;
                dfs(x,y,i,len+1);
                a[x][y] = 0;
            }
        }
    }
}
int main(){

   ios::sync_with_stdio(0);
   cin.tie(0);

   cin>>N>>M;
   for(int i=0;i<=M;i++)
      a[0][i] = a[N+1][i] = 1;
   for(int i=0;i<=N;i++)
      a[i][0] = a[i][M+1] = 1;
   a[1][1] = 1;
   dfs(1,1,1,1);
   if(N!=M)
     dfs(1,1,2,1);
   cout<<ans<<"\n";
   return 0;
}