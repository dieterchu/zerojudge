#include <bits/stdc++.h>

using namespace std;
map<char, pair<int,int>> ink;
vector<pair<int,int>> v;
map<char,string> inC,exC;
string BRY = "BRY";

pair<int,int> colorX(int r,int c, char x){
     
     map<char,int> timeBRY;
    
     for(auto ch:BRY)
         timeBRY[ch] = max(abs(r-ink[ch].first),abs(c-ink[ch].second));
     if(x=='D')
        return {max(max(timeBRY['B'],timeBRY['R']),timeBRY['Y']),10001};
     int t1=-1,t2=10001;
     for(auto c1:inC[x])
         t1 = max(t1,timeBRY[c1]);
     for(auto c2:exC[x])
          t2=min(t2,timeBRY[c2]);
         

     if(t1>= t2)
         return{-1,-1};

     return{t1,t2};
}

int main(){

   int n;

  inC['R']="R"; exC['R']="YB";
  inC['Y']='Y'; exC['Y']="RB";
  inC['B']="B"; exC['B']="YR";
  inC['O']="RY"; exC['O']="B";
  inC['G']="BY"; exC['G']="R";
  inC['P']="BR"; exC['P']="Y";
  while(cin>>n){
      for(int i=0;i<3;i++){
          char color;
          int x,y;
          cin>>color>>x>>y;
          ink[color]={x,y};
      }    
      char x;
      cin>>x;
      for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            pair<int,int> t=colorX(i,j,x);
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