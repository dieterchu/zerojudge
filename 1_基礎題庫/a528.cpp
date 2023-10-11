#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
     if(a[0]=='-' && b[0]!='-')
        return true;
     if(a[0]!='-' && b[0]!='-')
        return a.size()<b.size() || (a.size()==b.size()&&a<b);
     if(a[0]=='-' && b[0]=='-')
        return a.size()>b.size() || (a.size()==b.size() && (a.substr(1) > b.substr(1)));
    return false;
}

int main(){
   int n;

   ios::sync_with_stdio(0);
   cin.tie(0);
   while(cin>>n){
      vector<string> a;
      for(int i=0;i<n;i++){
         string s;
         cin>>s;
         a.push_back(s);
         sort(a.begin(),a.end(),cmp);
      }
      for(auto x : a)
         cout<<x<<'\n';
   }
   return 0;
}