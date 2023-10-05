#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n){
        vector<int> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];

        int ans = (v[0]>0)?v[0]:0;
        for(int i=1;i<n;i++){
            v[i] = max(v[i]+v[i-1],v[i]);
            ans = max(ans,v[i]);
        }
        cout<<ans<<'\n';
	}
	return 0;
}