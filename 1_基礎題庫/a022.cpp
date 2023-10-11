#include <bits/stdc++.h>
using namespace std;

string s;
bool isPalindrome(int a,int b){
    return a>b || (s[a]==s[b]&&isPalindrome(a+1,b-1));
}
int main(){

  cin>>s;
  if(isPalindrome(0,s.size()-1))
    cout<<"yes";
  else
    cout<<"no";
  return 0;
}