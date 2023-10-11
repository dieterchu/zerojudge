#include <bits/stdc++.h>
using namespace std;


int main() {

    int a,b;
    map<int,int> mp;

    while(scanf("%d:%d",&a,&b)&&a&&b){
        mp[a] = b;
    }
    long long int ans=0;
    while(scanf("%d:%d",&a,&b)&&a&&b){
        ans += mp[a]*b;
    }
    printf("%lld\n",ans);
    return 0;
}