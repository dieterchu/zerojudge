#include <iostream>
using namespace std;

#define MOD 10007
int pwer(int a,int b){
    
    if(b==0)
      return 1;
    if(b==1)
      return a%MOD;
    int t = pwer(a, b/2);
    if(b%2==0)
      return (t * t)%MOD;
    return ((t*t)%MOD *a)%MOD;    
}

int main(){
    
    
    int a,b;
    cin>>a>>b;
    cout<<pwer(a,b)<<endl;
    return 0;
}