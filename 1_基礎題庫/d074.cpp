#include <iostream>

using namespace std;

int main()
{
   int n;
   
   int ans = 0;
   cin>>n;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       ans = max(ans,x);
       
   }
   cout<<ans;
    return 0;
}