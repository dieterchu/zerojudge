#include <bits/stdc++.h>
using namespace std;


string s;
void per(int idx, string t){
   if(idx==s.size()){
      cout<<t<<'\n';
      return ;
   }
   for(int i=0;i<=t.size();i++)
      per(idx+1,t.substr(0,i)+s[idx]+t.substr(i));
}
int main(){

   while(cin>>s){
       per(0, "");
       cout<<'\n';
   }
   return 0;
}