#include <bits/stdc++.h>
using namespace std;

int cnt=0;
int N,q;
vector< pair<int,int> > g[5010];
bool visited[5010]={0};

void dfs(int v){

   visited[v] = true;
   cnt++;
   for(auto i:g[v]){
      if(i.second>=q && !visited[i.first])
        dfs(i.first);
   }
}
int main(){

    int v;
    cin>>N>>v>>q;
    for(int i=0;i<N-1;i++){
        int a,b,c;
        cin>>a>>b>>c;
        g[a].push_back({b,c});
        g[b].push_back({a,c});
    }
    dfs(v);
    cout<<cnt-1<<endl;
    return 0;
}