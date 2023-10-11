#include <bits/stdc++.h>
using namespace std;

int main(){

  string s;
  while(cin>>s){
    int sum=0;
    for(int i=0;i<9;i++)
       sum += s[i]-'0';
    cout<<45-sum<<'\n';
  }
  return 0;
}