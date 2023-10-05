#include <bits/stdc++.h>
using namespace std;

int dir[8][2]={{-3,-1},{-3,1},{3,-1},{3,1},{-1,3},{1,3},{-1,-3},{1,-3}};
int dir1[4][2]={{-1,0},{1,0},{0,1},{0,-1}};
int main(){

  int n;
  while(cin>>n){
    int block[110][110]={0};
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        block[x][y] = 1;
    }
    int sx,sy,tx,ty;
    cin>>sx>>sy>>tx>>ty;
    queue<pair<pair<int,int>,int>> q;
    q.push({{sx,sy},0});
    block[sx][sy] = 0;
    pair<int,int> t= {tx,ty};
    int ans = 0;
    while(!q.empty()){
        pair<pair<int,int>,int> f = q.front();
        q.pop();
        if(f.first==t){
            ans = f.second;
            break;
        }
        for(int i=0;i<8;i++){
            int r=f.first.first + dir[i][0];
            int c=f.first.second+ dir[i][1];
            int r1 = f.first.first + dir1[i/2][0];
            int c1 = f.first.second + dir1[i/2][1];
            if(r>=0&&r<100  && c>=0&&c<100 &&!block[r][c]&&!block[r1][c1]){
                q.push({{r,c},f.second+1});
                block[r][c]=1;
            }
        }
    }
    if(ans)
        cout<<ans<<'\n';
    else
        cout<<"impossible\n";
  }
  return 0;
}