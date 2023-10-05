#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int i=0,star=1,line=n-1;i<n;i++,star+=2,line--){
        for(int j=0;j<line;j++)
             cout<<"_";
        for(int j=0;j<star;j++)
             cout<<"*";
        for(int j=0;j<line;j++)
             cout<<"_";
        cout<<endl;
    }
    return 0;
}