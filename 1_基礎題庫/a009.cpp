#include <iostream>

using namespace std;

int main(){
  char ch;

  while(cin>>ch){
    if(ch != '\n')
       ch  = ch+'*'-'1';
    cout<<ch;
  }
  return 0;
}
