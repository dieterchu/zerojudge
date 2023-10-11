#include <bits/stdc++.h>
using namespace std;

int main(){

   ios::sync_with_stdio(0);
   cin.tie(0);

   map<string,char> mos;
   string s=".- -... -.-. -.. .  ..-.  --.  ....  ..  .---  -.-  .-..  --  -.  ---  .--.  --.-  .-.  ...  - ..-  ...-  .--  -..- -.-- --..";
   stringstream ss(s);
   for(char i='A';i<='Z';i++){
      string m;
      ss>>m;
      mos[m] = i;
   }
   int n;
   cin>>n;
   cin.ignore();
   for(int i=0;i<n;i++){
      string line;
      getline(cin,line);
      stringstream st(line);
      string s;
      while(st>>s)
        cout<<mos[s];
      cout<<'\n';

   }

   return 0;
}