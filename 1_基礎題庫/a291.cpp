#include <bits/stdc++.h>

using namespace std;

int main(){

   ios::sync_with_stdio(0);
   cin.tie(0);

   int ans[4],n;

   while(cin>>ans[0]>>ans[1]>>ans[2]>>ans[3]>>n){
       while(n--){
          int a[4];
          cin>>a[0]>>a[1]>>a[2]>>a[3];
          int A=0,B=0;

          int cnta[10]={0}, cntans[10]={0};
          for(int i=0;i<4;i++){
              if(a[i]==ans[i])
                A++;
              else{
                cnta[a[i]]++;
                cntans[ans[i]]++;
              }
          }
          for(int i=0;i<10;i++)
             B+=min(cnta[i],cntans[i]);
          cout<<A<<"A"<<B<<"B"<<'\n';
       }
   }

   return 0;
}