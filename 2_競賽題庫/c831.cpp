#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int x[4],y[4];
    
    for(int i=0;i<4;i++)
       cin>>x[i]>>y[i];
    for(int i=3;i>=0;i--){
       x[i] -= x[0];
       y[i] -= y[0];
    }   
    long long  dx1 = llabs(x[2]-x[3]);
    long long  dx2 = llabs(x[1]-max(x[2],x[3]))+ llabs(min(x[2],x[3]));
    long long  dy1 = llabs(y[2]-y[3]);
    long long  dy2 = llabs(y[1]-max(y[2],y[3]))+ llabs(min(y[2],y[3]));
    cout<<min(dx1,dx2) + min(dy1,dy2);
    return 0;
}