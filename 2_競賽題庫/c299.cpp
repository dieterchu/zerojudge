#include <iostream>
using namespace std;

int main(){
   int n,a=1001,b=-1;

   while(cin>>n){
      for(int i=0;i<n;i++){
         int t;

         cin>>t;
         a = min(a,t);
         b = max(b,t);
      }
      cout<<a<<" "<<b<<" ";
      if(b - a == n-1)
         cout<<"yes\n";
      else
         cout<<"no\n";
   }
   return 0;
}