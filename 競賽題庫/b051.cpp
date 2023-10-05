#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(string a, string b){
   return a+b > b+a;
}

int main(){
  string str[600];

  int N;

  while(cin>>N && N){
    for(int i=0;i<N;i++)
        cin>>str[i];
    sort(str,str+N,cmp);
    for(int i=0;i<N;i++)
        cout<<str[i];
    cout<<endl;
  }
  return 0;
}