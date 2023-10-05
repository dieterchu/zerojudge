#include <bits/stdc++.h>

using namespace std;


int main(){

   int n;

   while(cin>>n &&n ){
        int t[50][2]={0};
        int p[50];
        for(int i=0;i<n;i++)
            cin>>p[i];
        t[0][0] = p[0];
        t[0][1] = 2*p[0];
        for(int i=1;i<n;i++){
            t[i][0] = max(t[i-1][0]+p[i],t[i-1][1]);
            t[i][1] = t[i-1][0] + 2*p[i];
        }
        cout<<max(t[n-1][0],t[n-1][1])<<'\n';
   }
   return 0;
}