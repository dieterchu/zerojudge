#include <bits/stdc++.h>
using namespace std;

int fib[45]={0,1};
int main(){

    for(int i=2;i<45;i++)
       fib[i] = fib[i-2]+fib[i-1];   
    int N;
    cin>>N;
    while(N--){
        int n;
        cin>>n;
        cout<<n<<" = ";
        bool first = true;
        for(int i=40;i>1;i--){
            if(fib[i]<=n){
                cout<<1;
                n-=fib[i];
                first = false;
            }else if(!first)
               cout<<0;
        }
        cout<<" (fib)\n";
    }
    return 0;
}