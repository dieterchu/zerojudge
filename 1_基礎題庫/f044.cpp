#include <iostream>

using namespace std;

int main()
{
    int N,T;
    
    cin>>N>>T;   
    T=T/N;
    N=1;
    int t = 0, day=0;    
    while(t!=T){
        t = 2*t+1;
        day++;
    }
    cout<<day;
    return 0;
}