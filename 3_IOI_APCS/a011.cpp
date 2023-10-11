#include <bits/stdc++.h>
using namespace std;

int main(){

   string s;
   while(getline(cin, s)){
       int ans=0;
       int word = 0;
       for(int i=0,LEN=s.length();i<LEN;i++){
          if(!word && isalpha(s[i])){
              word = 1;
              ans++;
          }else if(word && !isalpha(s[i]))
              word = 0;
       }
       cout<<ans<<'\n';
   }
   return 0;
}