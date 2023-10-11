#include <iostream>

using namespace std;

int main(){
  int m,n;

  while(cin>>n>>m){
    if(n==m)
      cout<<n<<"\n";
    else
      cout<<m+1<<"\n";
  }
  return 0;
}
