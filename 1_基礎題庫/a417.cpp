#include <bits/stdc++.h>
using namespace std;

int clk[2][4][2]={{{0,1},{1,0},{0,-1},{-1,0}},{{1,0},{0,1},{-1,0},{0,-1}}};

int N,M;

bool inbound(int x){
  return x>=0 && x<=N-1;
}
int main(){

  int T;
  scanf("%d",&T);
  while(T--){
     scanf("%d%d",&N,&M);
     int p;
     int row,col;
     int a[101][101]={0};

     M--;
     p=row = col = 0;
     for(int i=1;i<=N*N;i++){
         a[row][col] = i;
         int r,c;
         r = row + clk[M][p][0];
         c = col + clk[M][p][1];
         if(inbound(r)&&inbound(c) && a[r][c]==0){
            row = r;
            col = c;
         }else{
            p = (p+1)%4;
            row += clk[M][p][0];
            col += clk[M][p][1];
         }
     }

     for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)
             printf("%5d",a[i][j]);
        printf("\n");
     }

  }

  return 0;
}