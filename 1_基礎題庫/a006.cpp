#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int a,b,c;


  while(cin>>a>>b>>c){
    int D = b*b - 4 * a * c;
    if(D < 0){
      cout<<"No real root\n";
    }else if (D == 0){
      cout<<"Two same roots x="<< -b/(2*a) <<"\n";
    }else{
      int x1 = (int)(-b + sqrt(D)) / (2*a);
      int x2 = (int)(-b - sqrt(D)) / (2*a);
      if(x1 < x2)
            swap(x1,x2);
      cout<<"Two different roots x1="<<x1<<" , x2="<<x2<<"\n";
    }
  }
  return 0;
}
