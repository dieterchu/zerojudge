#include <bits/stdc++.h>

using namespace std;

bool multi(string s, string g){
   if(s.length()%g.length()!=0)
      return false;
   for(int i=0;i<s.length();i+=g.length()){
      if(s.substr(i,g.length())!=g)
         return false;
   }
   return true;
}
int main(){
  string s,t;

  while(cin>>s>>t){
     if(s.length()>t.length())
        swap(s,t);
     bool found=false;
     string gcd;
     for(int i=s.length();i>=1;i--){
         if(s.length()%i==0 ){
             gcd = s.substr(0,i);

             if(multi(s,gcd) && multi(t,gcd)){
                found = true;
                break;
             }
         }
     }
     if(found)
         cout<<gcd<<'\n';
     else
        cout<<"= =\n";
  }
  return 0;
}