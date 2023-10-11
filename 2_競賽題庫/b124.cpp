#include <bits/stdc++.h>
using namespace std;

double p[25][25];
bool visit[25];
vector<double> ans;
int n,s,t;

void dfs(int v, double pb){
    if(v==t){
        ans.push_back(pb);
        return ;
    }
    for(int i=0;i<n;i++){
        if(!visit[i] && p[v][i]> 0.0000001){
            visit[i] = true;
            dfs(i,pb*p[v][i]);
            visit[i] = false;
        }        
    }
}
int main(){ 

   ios::sync_with_stdio(0);
   cin.tie(0);

   while(cin>>n){
       for(int i=0;i<n;i++)
         for(int j=0;j<n;j++)
            cin>>p[i][j];
       ans.clear();
       memset(visit,0,sizeof(visit));
       cin>>s>>t;
       s--,t--;
       visit[s] = true;
       dfs(s,1.0);
       double pno=1.0;
       for(auto x:ans)
          pno *= (1-x);
       cout<<fixed<<setprecision(5)<<1-pno<<"\n";       
   }
   return 0; 
}