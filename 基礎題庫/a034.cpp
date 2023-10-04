#include <bits/stdc++.h>
using namespace std;

int main(){

  stack<int> stk;
  int n;
  while(cin>>n){
    while(n>1){
      stk.push(n%2);
      n = n / 2;
    }
    stk.push(n);
    while(!stk.empty()){
        cout<<stk.top();
        stk.pop();
    }
    cout<<"\n";
  }
  return 0;
}
