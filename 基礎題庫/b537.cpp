#include <bits/stdc++.h>
using namespace std;

long long int dfs(int a, int b){

    if(a==b)
        return 1;
    if(a > b)
        return dfs(a-b,b)*2;
    else
        return  dfs(b,a)+1;
}

int main(){

   int a,b;

   while(cin>>a>>b)
    cout<<dfs(a,b)<<'\n';
   return 0;
}