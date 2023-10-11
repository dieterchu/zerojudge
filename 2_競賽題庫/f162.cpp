#include <bits/stdc++.h>
using namespace std;
 
int K, n, m, tmp, ans;
 
int main(){
    cin >> K;
    cin >> n >> m;
    int a, pre[n+1][m+1] = {};
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a;
            pre[i][j] = pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+a;         
            for (int k = 0; k < i; k++){
                for (int l = 0; l < j; l++){
                    tmp = pre[i][j]-pre[i][l]-pre[k][j]+pre[k][l];                    
                    if (tmp <= K) ans = max(ans, tmp);
                }
            }
        }

    }
    cout << ans << "\n";
	return 0;
}