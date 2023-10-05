#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while(cin>>n && n){
        string cls[5];
        map<string,int> M;
        for(int i=0;i<n;i++){
            for(int j = 0;j<5;j++)
                cin>>cls[j];
            sort(cls,cls+5);
            string s;
            for(int j=0;j<5;j++)
                s+=cls[j];
            M[s]++;
        }
        int ans=0,Max=0;
        for(map<string,int>::iterator it=M.begin();it!=M.end();it++){
            if((it->second)>Max)
                Max=it->second, ans=it->second;
            else if((it->second)==Max)
                ans+=Max;
        }
        cout<<ans<<"\n";
    }
}