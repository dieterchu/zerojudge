#include <bits/stdc++.h>
using namespace std;

int main(){


   int t;
   cin>>t;
   while(t--){
      string s;
      int cnt = 0;
      stack<char> stk;
      cin>>s;
      for(int i=0,LEN=s.size();i<LEN;i++){
         if(s[i]=='(')
                stk.push('(');
         else{
            if(stk.empty()){
                cnt = 0;
                break;
            }
            stk.pop();
            cnt++;
         }
      }
      if(!stk.empty())
         cnt = 0;
      cout<<cnt<<'\n';
   }
   return 0;
}