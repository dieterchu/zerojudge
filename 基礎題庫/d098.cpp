#include <bits/stdc++.h>

using namespace std;

int main(){

   ios::sync_with_stdio(0);
   cin.tie(0);
   string str;
   while(getline(cin,str)){
      stringstream ss(str);
      int sum=0;
      string a;
      while(ss>>a){
         bool digit =true;
         for(int i=0;i<a.size();i++){
             if(a[i]<'0' || a[i]>'9'){
                digit = false;
                break;
             }
         }
         if(digit)
             sum += stoi(a);
      }
      cout<<sum<<'\n';
   }
   return 0;

}