#include <iostream>
using namespace std;

int main(){

   int n;
   cin>>n;
   while(n--){
       int h1,m1,h2,m2,d;
       cin>>h1>>m1>>h2>>m2>>d;
       if((h2*60+m2 - h1*60-m1) >=d)
          cout<<"Yes\n";
       else
          cout<<"No\n";
   }
    return 0;
}