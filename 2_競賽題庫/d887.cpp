#include <iostream>
using namespace std;
 
int main(){
  long long int cnt[30]={};
  
  cnt[0]=1;
  for(int i=1;i<30;i++)
    for(int j=0;j<i;j++)
      cnt[i]+=cnt[j]*cnt[i-1-j];
  int n;
  while(cin>>n)
    cout<<cnt[n]<<endl;
  return 0;
}