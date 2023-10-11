#include <bits/stdc++.h>
using namespace std;

int K, M, N, P;
int gar[55][55];
vector<int> v[55];
int ans,total;

void dfs(int id, int n, int sum){

    ans = max(ans,sum);
    if(n<=0 || ans==total || sum+n*M <= ans)
        return;
    for(auto i:v[id]){
        int clean = min(gar[id][i],M);
        int rep = 1;
        while(clean+2*M<=gar[id][i] && n-(rep+2)>=0){
            rep+=2;
            clean += 2*M;
        }
        gar[id][i] -= clean;
        gar[i][id] -= clean;
        dfs(i,n-rep,sum+clean);
        gar[id][i] += clean;
        gar[i][id] += clean;
    }
}
int main() {


  cin>>K>>M>>N>>P;
  for(int i=0;i<P;i++){
      int a,b,c;

      cin>>a>>b>>c;
      v[a].push_back(b);
      v[b].push_back(a);
      gar[a][b] = gar[b][a] = c;
      total += c;
  }
  dfs(1,N,0);
  cout<<ans<<'\n';
  return 0;
}