#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<pair<int ,int>> v;
    
    cin>>n;
    for(int i=0;i<n;i++){
       int a,b;
       cin>>a>>b;
       v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    for(auto x:v)
      cout<<x.first<<" "<<x.second<<'\n';
    return 0;
}