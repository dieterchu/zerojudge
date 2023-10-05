#include <iostream>

using namespace std;
int a[510]={1};
int main(){
    
    for(int i=1;i<510;i++)
      a[i] = a[i-1]+i;
      
    int n;
    while(cin>>n)
       cout<<a[n-1]<<endl;
    return 0;
}