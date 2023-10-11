#include <bits/stdc++.h>
using namespace std;
int n, m;
int nxt[1000005];

int main() {

	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n >> m;

	for(int i=1;i<n;i++)
        nxt[i] = i+1;
	nxt[n] = -1;
	for(int i=0;i<m;i++){
        int k;
        cin>>k;
        if(nxt[k] < 0)
            cout<<"0u0 ...... ?\n";
        else{
            cout<<nxt[k]<<'\n';
            int tmp = nxt[k];
            nxt[k] = nxt[nxt[k]];
            nxt[tmp]=-1;

        }
	}
	return 0;
}