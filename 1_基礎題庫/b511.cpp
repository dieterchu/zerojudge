#include <bits/stdc++.h>
using namespace std;


int N,T;
int a[10];
int pick[10];
void dfs(int idx, int sum){
    if(idx==N){
        if(sum==T){
            cout<<'('<<pick[0];
            for(int i=1;i<N;i++)
               cout<<','<<pick[i];
            cout<<")\n";
        }
        return;
    }
    for(int i=0;sum+a[idx]*i <= T;i++){
         pick[idx] = i;
         dfs(idx+1,sum+a[idx]*i);
    }
}

int main() {

    cin>>N;
    for(int i=0;i<N;i++)
        cin>>a[i];
    cin>>T;
    dfs(0,0);
    return 0;
}