#include <iostream>
using namespace std;

int main(){
  int i,j,n,num[4];


  cin>>n;
  for(i=0;i<n;i++){
    for(j=0;j<4;j++){
      cin>>num[j];
      cout<<num[j]<<" ";
    }
    if(num[0]-num[1] == num[1]-num[2]){
      cout<<num[3]+num[1]-num[0]<<"\n";
    }else
      cout<<num[3]*(num[1]/num[0])<<"\n";

  }
  return 0;
}
