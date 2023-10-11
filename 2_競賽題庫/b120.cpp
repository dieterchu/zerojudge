#include <bits/stdc++.h>
using namespace std;
#define ll long long int

map<ll,ll> mf,mh;  //  no need to clear mf and mh

ll g(ll z){

    if(z<=2)
      return z*z-1;
    return 2;   
}
ll h(ll y){
   
    if(y<2)
      return -1;
    if(mh.count(y))
       return mh[y];
    mh[y] = 2 + h(y-1) - h(y-2); 
    return  mh[y];
     
}
ll f(ll x){
    
    if(mf.count(x))
       return mf[x];
    int hx = h(x);
    if(x>h(x)){
       mf[x] = f(x-1) - hx; 
       return mf[x];
    }else if(x < hx){
       ll gx = g(x);
       mf[x] = f(gx) - gx; 
       return mf[x];
    }   
    return 1;    
}
int main(){
  
   ll x;
   
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   while(cin>>x)
       cout<<f(x)<<"\n";
   return 0;
}