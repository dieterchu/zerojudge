#include <bits/stdc++.h>

using namespace std;

int a[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
int main(){

   string s;

   while(cin>>s){
      int sum2 = 0;
      for(int j=0,k=8;j<8;j++,k--)
          sum2 += (s[j]-'0')*k;

      for(int i=0;i<26;i++){
         int sum = a[i]/10+(a[i]%10)*9 + sum2;

         if((10- (sum%10)==s[8]-'0') ||( sum%10==0 && s[8]=='0'))
            cout<<(char)('A'+i);
      }

   }
   return 0;
}