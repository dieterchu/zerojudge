#include <bits/stdc++.h>
using namespace std;


int GCD(int a,int b){
   if(b==0)
      return a;
   return GCD(b,a%b);
}

int main(){

   int n;
   cin>>n;
   cin.ignore();
   string s;
   while(getline(cin,s)){
      stringstream ss(s);
      int a;
      vector<int> v;
      while(ss>>a)
        v.push_back(a);
      int LEN=v.size();
      int ans = 1;
      for(int i=0;i<LEN;i++){
        for(int j=0;j<LEN;j++){
            if(i!=j)
                ans = max(ans,GCD(v[i],v[j]));
        }
      }
      cout<<ans<<endl;
   }
  return 0;
}