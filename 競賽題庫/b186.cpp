#include <iostream>

using namespace std;

int main()
{
  long long a,b,c;
  
  while(cin>>a>>b>>c){
      
      b+= min(a/10,c/2);
      cout<<a<<" 個餅乾，"<<b<<" 盒巧克力，"<<c<<" 個蛋糕。\n";
      
  }
    return 0;
}