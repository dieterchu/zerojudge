#include <bits/stdc++.h>
using namespace std;

int h[1000010];
struct node{
     int h;
     int idx;
     node(int a, int b){
         h = a;
         idx = b;
     }
     bool operator<(const node& a) const{
        return h > a.h;
     }
};

int main(){

  int n, B,C;


  while(scanf("%d%d%d",&n,&B,&C)!=EOF){
     priority_queue<node, vector<node> > pq;
     for(int i=0;i<n;i++){
       scanf("%d",&h[i]);
       pq.push(node(h[i],i));
     }
     long long ans = 0;
     while(!pq.empty()){
        node x = pq.top();
        pq.pop();
        if(x.idx != 0){
            if(h[x.idx-1] - h[x.idx] > C){
                int diff = h[x.idx-1] - h[x.idx] - C;
                int del;
                if(diff%B==0)
                     del = diff / B;
                else
                     del = diff / B +1;
                h[x.idx-1] -= B * del;
                pq.push(node(h[x.idx-1],x.idx-1));
                ans += del;
            }
        }
        if(x.idx != n-1){
            if(h[x.idx+1] - h[x.idx] > C){
                int diff = h[x.idx+1] - h[x.idx] - C;
                int del;
                if(diff%B==0)
                     del = diff / B;
                else
                     del = diff / B +1;
                h[x.idx+1] -= B * del;
                pq.push(node(h[x.idx+1],x.idx+1));
                ans+=del;
            }
        }
     }
     printf("%lld\n",ans);
  }
  return 0;
}