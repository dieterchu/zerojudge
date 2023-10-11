#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    return (!b)? a: gcd(b,a%b);   
}
  
int main()
{
    int n;
    
    while(cin>>n){
        int a,b;
        cin>>a>>b;
        int ans = gcd(a,b);
        for(int i=2;i<n;i++){
            cin>>a;
            ans = gcd(ans,a);
        }
        cout<<ans<<"\n";
    }
    return 0;
}