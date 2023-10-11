#include <bits/stdc++.h>
using namespace std;

int a[1030];
int N;

int findMax(int s,int t,int big){
    if(s+1==t)
        return a[s];
    int mid = (s+t)/2;
    if(big)
        return max(findMax(s,mid,1-big),findMax(mid,t,1-big));
    return min(findMax(s,mid,1-big),findMax(mid,t,1-big));


}
int main(){


  cin>>N;
  for(int i=0;i<N;i++)
    cin>>a[i];
  cout<<findMax(0,N,1);

}