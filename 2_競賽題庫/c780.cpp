#include <bits/stdc++.h>

using namespace std;
int mp[10][10];
int N,M;
int dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
int ans = 0;

void jump(int r, int c, int cnt){

    ans = max(ans,cnt);
    for(int i=0;i<4;i++){
       int step = 2;
       int x = r;
       int y = c;
       while(step>0){
            x += dir[i][0];
            y += dir[i][1];
            if(x<0||x>=N||y<0||y>=M)
                break;
            step -= mp[x][y];
       }
       if(step==0){
           mp[x][y] = 0;
           jump(x,y,cnt+1);
           mp[x][y] = 1;
       }
    }
}

int main(){

   cin>>N>>M;
   for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
           mp[i][j] = 1;
   mp[0][0] = 0;
   jump(0,0,0);
   cout<<ans<<"\n";
    return 0;
}