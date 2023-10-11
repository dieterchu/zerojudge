#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    while(cin>>n){
         map<pair<int,int>,int> mp;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            mp[{a,b}]++;
        }
        int cnt=0;
        for(auto x:mp){
            int a = x.first.first;
            int b = x.first.second;
            if(a<b)
              cnt += min(mp[{a,b}],mp[{b,a}]);            
        }
        cout<<cnt<<"\n";
    }   
    return 0;
}