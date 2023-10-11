#include <bits/stdc++.h>
using namespace std;
int acc[1<<8][1<<8];

void coding (int r, int c, int n){
    
    int cnt1 = acc[r+n-1][c+n-1]-acc[r+n-1][c-1]-acc[r-1][c+n-1]+acc[r-1][c-1];
    if(cnt1==0)
      cout<<"w ";
    else if(cnt1==n*n)
      cout<<"b ";
    else{
        cout<<"g ";
        coding(r,c+n/2,n/2);
        coding(r,c,n/2);
        coding(r+n/2,c,n/2);
        coding(r+n/2,c+n/2,n/2);       
    }    
}

int main(){
   
   int n;
   while(cin>>n){
      
       memset(acc,0,sizeof(acc));
       for(int i=1;i<=n;i++)
         for(int j=1;j<=n;j++){
             char ch;
             cin>>ch;
             acc[i][j] = ch-'0';
             acc[i][j] += acc[i-1][j]+acc[i][j-1]-acc[i-1][j-1];
         }
         coding(1,1,n);
         cout<<"\n";
   }
   return 0;
}