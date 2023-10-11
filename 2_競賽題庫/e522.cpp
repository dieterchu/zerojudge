#include <bits/stdc++.h>
using namespace std;

string bin(int x){

   string s="";
   for(int i=0;i<3;i++){
      s+= (char)('0'+(x%2));
      x/=2;
   }
   reverse(s.begin(),s.end());
   return s;
}

int main(){
   int n;
   
   cin>>n;
   cin.ignore();
   while(n--){
     string s;
     getline(cin,s);
     s+= (char)('0'+1-(s[s.size()-1]-'0'));
     int cnt=0;
     char b=s[0];
     bool valid = true;
     double l = 0;
     string coding="";
     for(int i=0;i<s.size();i++){
          if(s[i]!='0' && s[i]!='1'){
                valid = false;
                break;
          }
          if(s[i]==b&&cnt<7)
            cnt++;
          else{
            coding+=b + bin(cnt)+" ";
            l+=4;
            b=s[i];
            cnt=1;
          }
     }
     if(valid)
        cout<<coding<<fixed<<setprecision(0)<< 100*(l/(s.size()-1))<<"%"<<endl;
     else
        cout<<-1<<endl;
   }
   return 0;
}