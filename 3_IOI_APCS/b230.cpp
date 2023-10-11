#include <bits/stdc++.h>
using namespace std;

bool mask[65*65*65];
int idoneal[100];
int main(){

   for(int a=1;a<=65;a++)
     for(int b=a+1;b<=65;b++)
      for(int c=b+1;c<=65;c++){
         if(a!=b&&b!=c&&c!=a)
             mask[a*b+b*c+c*a]=1;
      }
   for(int i=1,j=1;i<=65;i++,j++){
       while(mask[j])
           j++;       
       idoneal[i]=j;
   }
   int k;
   while(cin>>k)
      cout<<idoneal[k]<<endl;
   return 0;
}