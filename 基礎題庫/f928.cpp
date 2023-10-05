#include <bits/stdc++.h>
using namespace std;

int N;
int a[1010];

void fire(int t){
   if(t<0||t>=N || a[t]==0)
     return;

   int bak = a[t];
   a[t]=0;
   if(bak==2){
      fire(t-1);
      fire(t+1);
   }
   else if(bak>=3){
      fire(t-bak);
      fire(t-2*bak);
      fire(t+bak);
      fire(t+2*bak);
   }


}

int main(){

  while(cin>>N){
     for(int i=0;i<N;i++)
       cin>>a[i];
     int T;
     cin>>T;
     fire(T);
     for(int i=0;i<N;i++)
       cout<<a[i]<<" ";
     cout<<'\n';
  }
  return 0;
}
