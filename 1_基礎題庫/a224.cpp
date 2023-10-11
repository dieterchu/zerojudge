#include <bits/stdc++.h>
using namespace std;
int main(){

  char str[1010];
  while(cin>>str){
      int cnt[26]={0};
      for(int i=0,LEN=strlen(str);i<LEN;i++){
          if(str[i]>='A'&&str[i]<='Z')
              str[i] = 'a' + str[i] - 'A';
          if(str[i]>='a'&&str[i]<='z')
              cnt[str[i]-'a']++;
      }
      int odd = 0;
      for(int i=0;i<26;i++){
         if(cnt[i]%2)
            odd++;
      }
      if(odd<=1)
         cout<<"yes !\n";
      else
         cout<<"no...\n";
  }
  return 0;
}
