#include <bits/stdc++.h>
using namespace std;


int main(){

  int T;
  cin>>T;
  while(T--){
      int n;
      cin>>n;
      map<int,int> mp;
      while(n--){
          int l;
          cin>>l;
          mp[l]++;
      }
      int ans=0;
      for(int i=1;i<101;i++)
       for(int j=i+1;j<101;j++)
         for(int k=j+1;k<101;k++){
             if(i*i+j*j==k*k)
               ans = ans + mp[i]*mp[j]*mp[k];
         }
      cout<<ans<<endl;
  }
    return 0;
}