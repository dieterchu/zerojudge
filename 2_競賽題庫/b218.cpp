#include <bits/stdc++.h>
using namespace std;

#define MAXN 20001
int n;
vector<int> G[MAXN];
int sub[MAXN];
int cnt[MAXN];
bool visit[MAXN];
int ans,maxcnt = INT_MIN;
int dfs(int v){
   sub[v] = 1;
   visit[v] = true;
   for(int i=0;i<G[v].size();i++){
      if(!visit[G[v][i]]){
          sub[G[v][i]]= dfs(G[v][i]);
          sub[v] += sub[G[v][i]];
          cnt[v] += sub[G[v][i]] * (n-sub[G[v][i]]-1);
      }
   }
   cnt[v] += (sub[v]-1)*(n-sub[v]);
   if(cnt[v]>maxcnt || (cnt[v]==maxcnt && v<ans)){
      maxcnt = cnt[v];
      ans = v;
   }
   return sub[v];
}

int main(){

    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        int u,v;
        scanf("%d%d",&u,&v);
        G[u].push_back(v);
        G[v].push_back(u);
    }
    dfs(1);
    printf("%d %d\n",ans,maxcnt/2);
}