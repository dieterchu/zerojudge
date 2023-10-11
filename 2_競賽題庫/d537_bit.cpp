#include <bits/stdc++.h>
using namespace std;
map<char, pair<int,int>> ink;
vector<pair<int,int>> v;
map<char,int> c2i = {{'B',1},{'R',2},{'Y',4},{'O',6},{'G',5},{'P',3},{'D',7}};

pair<int,int> colorX(int r,int c, int x){
   
     map<char,int> timeBRY;
     for(int i=1;i<=4;i=i<<1)
         timeBRY[i] = max(abs(r-ink[i].first),abs(c-ink[i].second));
     int t1=-1,t2=10001;
     for(int i=1;i<=4;i=i<<1)
         if(x&i)
           t1 = max(t1,timeBRY[i]);
         else  
           t2=min(t2,timeBRY[i]);
     if(t1>= t2)
         return{-1,-1};
     return{t1,t2};
}

int main(){

   int n;

  while(cin>>n){
      for(int i=0;i<3;i++){
          char color;
          int x,y;
          cin>>color>>x>>y;
          ink[c2i[color]]={x,y};
      }    
      char x;
      cin>>x;
      for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            pair<int,int> t=colorX(i,j,c2i[x]);
            if(t.first!=-1){
                v.push_back({t.first,1});
                v.push_back({t.second,-1});
            }    
        }
        sort(v.begin(),v.end());
        int ans = 0;
        int cnt = 0;
        for(auto i:v){
           cnt+=i.second;
           ans = max(ans,cnt);
        }  
        cout<<ans<<"\n";
    }
    return 0;
}