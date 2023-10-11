#include <bits/stdc++.h>
using namespace std;

pair<int,char> row[15];

int M,N;
int cnt=0;
bool safeQ(int r, int i){

    for(int j=0;j<r;j++){
        if(row[j].first==i || abs(r-j)==abs(row[j].first-i))
              return false;
    }
    return true;
}

bool safeR(int r, int i){

    for(int j=0;j<r;j++){
        if (row[j].second=='Q' && (row[j].first==i || abs(r-j)==abs(row[j].first-i)))
              return false;
        if (row[j].second=='R' && (row[j].first==i ))
              return false;
    }
    return true;
}

void dfs(int r, int nq, int nr){
    if(r==M+N){
        cnt++;
        return ;
    }
    for(int i=0;i<M+N;i++){
        if(nq<M && safeQ(r,i)){
            row[r] = {i,'Q'};
            dfs(r+1,nq+1,nr);
        }
        if(nr<N && safeR(r,i)){
            row[r] = {i,'R'};
            dfs(r+1,nq,nr+1);
        }
    }
}

int main() {

    cin>>M>>N;
    dfs(0,0,0);
    cout<<cnt<<'\n';
    return 0;
}