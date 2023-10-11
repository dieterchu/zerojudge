#include <iostream>

using namespace std;

int main(){
  int n;

  while(cin>>n){
    for(int i=2; i<=n; i++){
       int cnt = 0;
       while(n%i==0){
         cnt++;
         n /= i;
       }
       if(cnt==0)
          continue;
       if(cnt == 1)
          cout<<i;
       else
          cout<<i<<"^"<<cnt;
       if(n!=1)
           cout<<" * ";
       else
           cout<<"\n";

    }
  }
  return 0;
}
