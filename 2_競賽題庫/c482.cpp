#include <bits/stdc++.h>
using namespace std;

int a[2010][2010];

int main(){
  int N;

  ios::sync_with_stdio(0);
  cin.tie(0);
  while(cin>>N&&N){
        for(int i=0;i<N;i++)
          for(int j=0;j<N;j++)
             cin>>a[i][j];
        int q;
        cin>>q;
        for(int i=0;i<q;i++){
            int r1,c1,r2,c2;
            cin>>r1>>r2>>c1>>c2;
            r1 = min(r1,r2);
            r2 = max(r1,r2);
            c1 = min(c1,c2);
            c2 = max(c1,c2);
            map<int,int> mp;
            int Mx = -1;
            for(int r=r1;r<=r2;r++){
                for(int c=c1;c<=c2;c++){
                    mp[a[r][c]]++;
                    Mx = max(Mx, mp[a[r][c]]);
                }
            }
            int total = (r2-r1+1) * (c2-c1+1);
            if(Mx <=total / 2)
                cout<<-1<<'\n';
            else{
                for(auto x:mp){
                    if(x.second == Mx){
                         cout<<x.first<<'\n';
                         break;
                    }

                }
            }
        }
  }
  return 0;
}