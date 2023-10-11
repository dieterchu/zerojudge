#include <bits/stdc++.h>
using namespace std;

int N;
string s;
void dfs(int idx, int left,int right){
    if(idx >= 2*N){
        cout<<s<<"\n";
		return ;
	}
	if(left < N){
        s+="(";
		dfs(idx+1,left+1,right);
        s.pop_back();
	}
	if(right < left){
        s+=")";
		dfs(idx+1,left,right+1);
        s.pop_back();
	}
}
int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    while(cin>>N){
        s="";
    	dfs(0,0,0);
		cout<<"\n";
	}
	return 0;
}
