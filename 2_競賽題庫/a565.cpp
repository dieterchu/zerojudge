#include <bits/stdc++.h>

using namespace std;

int main(){


   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin>>n;  
   while(n--){
      string s;

      cin>>s;
      int p=0,cnt=0;
      for(auto x:s){
        if(x=='p')
            p++;
        else if(x=='q'){
            if(p>0){
               cnt++;
               p--;
            }
        }
      }
      cout<<cnt<<"\n";
   }
   return 0;
}