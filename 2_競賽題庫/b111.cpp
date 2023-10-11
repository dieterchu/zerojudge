#include <bits/stdc++.h>
using namespace std;
priority_queue<pair<double, string>> pq;

int main(){
   
   int n; 
   while(cin>>n){
       while(!pq.empty())
          pq.pop();
       map<char,double> mpF;
       map<char,int> mpLen;
       while(n--){
         double f;
         string s;
         cin>>s>>f;
         mpF[s[0]] = f;
         pq.push({-f,s});
       }             
       while(pq.size()>1){
           auto a=pq.top();
           pq.pop();
           auto b = pq.top();
           pq.pop();
           pq.push({a.first+b.first,a.second+b.second});
           string str = a.second+b.second;
           for(auto x:str)
             mpLen[x]++;
       }
       string s=pq.top().second;
       double ans = 0;
       for(auto x:s)
         ans += mpF[x]*mpLen[x];
       cout<<fixed<<setprecision(2)<<ans<<"\n";
   }
   return 0;
}