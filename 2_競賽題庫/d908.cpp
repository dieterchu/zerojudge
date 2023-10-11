#include <bits/stdc++.h>
using namespace std;

int mp[30][30];
int ans;

void dfs(int x, int w){

   ans = max(ans,w);
   for(int i=0;i<26;i++){
      if(mp[x][i]){
         dfs(i,w+mp[x][i]);
      }
   }
}

int main(){

  char s;
  while(cin>>s){
    memset(mp,0,sizeof(mp));
    ans = 0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char a,b;
        int c;
        cin>>a>>b>>c;
        mp[a-'A'][b-'A'] = max(mp[a-'A'][b-'A'],c);
    }
    dfs(s-'A',0);
    cout<<ans<<'\n';
  }
  return 0;
}