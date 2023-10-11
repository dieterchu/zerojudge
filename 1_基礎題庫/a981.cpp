#include <bits/stdc++.h>

using namespace std;
int n,target;
int a[35];
int pick[35];
int total;
bool found = false;
void dfs(int idx, int pidx,int sum, int left){
    if(sum==target){
        for(int i=0;i<pidx;i++)
           cout<<pick[i]<<" ";
        cout<<'\n';
        found = true;
        return;
    }
    if(sum>target || idx>=n || sum+left<target)
      return;
    pick[pidx] = a[idx];
    dfs(idx+1,pidx+1,sum+a[idx],left-a[idx]);
    dfs(idx+1,pidx,sum,left);

}
int main(){
    
   cin>>n>>target;
   for(int i=0;i<n;i++){
       cin>>a[i];
       total+=a[i];
   }       
   sort(a,a+n);
   dfs(0,0,0,total);
   if(!found)
      cout<<-1<<'\n';
    return 0;
}