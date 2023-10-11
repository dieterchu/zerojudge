#include <bits/stdc++.h>
using namespace std;
int a[10][10], ans;
int used[10][10];
int H,W;
int dir[2][2]={{0,1},{1,0}};

void bt(int r, int c, int cnt){
   if(r>H ){
      ans = max(ans,cnt);
      return ;
   }
   if(!used[r][c]){
     for(int i=0;i<2;i++){
         if(!used[r+dir[i][0]][c+dir[i][1]] && a[r][c]==a[r+dir[i][0]][c+dir[i][1]] ){
            used[r][c] = used[r+dir[i][0]][c+dir[i][1]]=1;
            if(c==W)
               bt(r+1,1,cnt+1);
            else
               bt(r,c+1,cnt+1);
            used[r][c] = used[r+dir[i][0]][c+dir[i][1]]=0;
         }
     }
   }
   if(c==W)
      bt(r+1,1,cnt);
   else
      bt(r,c+1,cnt);

}
int main(){

    cin>>H>>W;
    for(int i=1;i<=H;i++)
        for(int j=1;j<=W;j++)
           cin>>a[i][j];
    bt(1,1,0);
    cout<<ans<<'\n';
    return 0;
}