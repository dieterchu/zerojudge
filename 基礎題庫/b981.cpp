#include <bits/stdc++.h>
using namespace std;

string strtime;
int main(){

    stringstream ss;
    while(cin>>strtime){
        ss.str("");
        ss.clear();
        bool num=true;
        for(int i=0;i<strtime.size();i++){
            if(((isdigit(strtime[i]) || strtime[i]=='.') && (!num)) ||
               ((!isdigit(strtime[i]) && strtime[i]!='.') && (num))){
                    ss<<" ";
                    num = !num;
            }
            ss<<strtime[i];
        }
       double n;
       string unit;
       int ans=0;
       while(ss>>n>>unit){
          if(unit=="hour" || unit=="h")
             ans+=60*60*1000*n;
          else if(unit=="min"||unit=="m")
             ans+=60*1000*n;
          else if(unit=="s")
             ans+= n*1000;
          else if(unit=="ms")
             ans+= n;
       }
       cout<<ans<<'\n';
    }
   return 0;
}