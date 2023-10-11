#include <bits/stdc++.h>
using namespace std;
int main(){

   int a,b,N;

   while(cin>>a>>b>>N){
     cout<<a/b<<".";
     a = (a%b)*10;
     for(int i=0;i<N;i++){
        cout<< a/b;
        a = (a%b)*10;
     }
     cout<<'\n';
   }

  return 0;
}