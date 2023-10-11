#include <iostream>
using namespace std;

int main(){

  int s,t;
  cin>>s;
  t = 0;
  while(s!=0){
      t = 10*t + s%10;
      s = s / 10;

  }
  cout<<t<<endl;
  return 0;
}