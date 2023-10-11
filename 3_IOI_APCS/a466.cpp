#include <bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cin>>n;
   while(n--){
       string s;       
       cin>>s;
       if(s.size()==5){
         cout<<3<<endl;
         continue;
       } 
       int diff=0;
       string one="one";
       for(int i=0;i<3;i++){
           if(s[i]!=one[i])
             diff++;
       }
       if(diff<=1)
          cout<<1<<endl;
        else
          cout<<2<<endl;
   }   
   return 0;
}