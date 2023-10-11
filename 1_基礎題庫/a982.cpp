#include <bits/stdc++.h>

using namespace std;
int dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}};

char mp[110][110];
int main()
{
    int N;
    cin>>N;
    memset(mp,'#',sizeof(mp));
    for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++)
          cin>>mp[i][j];          
    queue<pair<pair<int,int>,int>> q;      
    q.push({{2,2},1});
    mp[2][2] = '#';
    while(!q.empty()){
        if(q.front().first.first==N-1 && q.front().first.second==N-1){
          cout<<q.front().second<<'\n';
          break;
        }
		for(int i=0;i<4;i++){
               int r = q.front().first.first+dir[i][0];
               int c = q.front().first.second+dir[i][1];               
                if(mp[r][c]!='#'){
                   mp[r][c]='#';
                   q.push({{r,c},q.front().second+1});
                }
        }
        q.pop();       
    }
    if(q.empty())
       cout<<"No solution!"<<'\n';
    return 0;
}