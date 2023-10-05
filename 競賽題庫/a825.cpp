#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    int a[15];
    
    cin>>m;
    for(int i=0;i<m;i++)
      cin>>a[i];
    if(m==1){
      cout<<a[0];
      return 0;
    }  
    sort(a,a+m);
    int x=a[m-1],y=a[m-2];
    for(int i=m-3;i>=0;i--){
        if(x < y)
          x = 10*x + a[i];
        else
          y = 10*y + a[i];        
    }
    cout<<x*y<<endl;
    return 0;
}