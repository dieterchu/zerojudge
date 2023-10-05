#include <bits/stdc++.h>
using namespace std;
int main() {
   int T;
   
   cin>>T;
   while(T--){
       int N,M;
       int a[200];
       cin>>N>>M;
       for(int i=0;i<N*M;i++)
         cin>>a[i];
       int i,j;     
       for(i=0,j=N*M-1;i<j;i++,j--){
           if(a[i]!=a[j])
              break;
       }
       if(i<j)
         cout<<"keep defending\n";
       else
         cout<<"go forward\n";
   }
     
}