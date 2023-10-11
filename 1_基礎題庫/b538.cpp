#include <iostream>
using namespace std;

int GCD(int a, int b){
    if(a%b==0)
      return b;
    return GCD(b,a%b);
}

int main(){

  int a,b,c,d;
  char ch;
  
  while(cin>>a>>b>>c>>d>>ch){     
      int x = b*d;
      int y,y1 = a*d, y2=c*b;
      if(ch=='+'){
          y = y1+y2;
      }else if(ch=='-'){
          y = y1 - y2;
      }else if(ch=='*'){
          y = a*c;
      }else{
          x = b*c;
          y = a*d;
      }      
      int gcd=GCD(y,x);
      y/=gcd;
      x/=gcd;      
      if(x<0){
          x = -x;
          y = -y;          
      }
      if(x==1)
         cout<<y<<"\n";
      else
         cout<<y<<"/"<<x<<"\n";

  }
    return 0;
}