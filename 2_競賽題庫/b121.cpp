#include <bits/stdc++.h>
using namespace std;
string s;
map<char,int> mp;
map<char,int> win;
set<string> st;

char checkWin(){
    
    for(int i=0;i<=6;i+=3)
      if(s[i]==s[i+1]&&s[i+1]==s[i+2]&&s[i]!='-')
         return s[i];
    for(int i=0;i<=2;i++)
      if(s[i]==s[i+3]&&s[i+3]==s[i+6]&&s[i]!='-')
        return s[i];
    if(s[0]==s[4]&&s[4]==s[8]&&s[0]!='-')
        return s[0];
    if(s[2]==s[4] && s[4]==s[6] && s[2]!='-')
        return s[2];
    return '-';
}
void dfs(int todo){
	
    char ch= checkWin();
    if(ch=='O'||ch=='X'){
       if(st.count(s))
          return ;
        st.insert(s);
        win[ch]++;
        return;
    }
    if(todo==0){
      if(st.count(s))
          return;
        win['-']++;
        st.insert(s);
        return;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='-'){
           char now = mp['O']==mp['X']?'O':'X';    
           s[i]=now;
           mp[now]++;
           dfs(todo-1);
           mp[now]--;
           s[i]='-';
        }
    }
}
int main(){
    
    while(cin>>s){
        mp.clear();
        st.clear();
        win.clear();
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        dfs(mp['-']);
        cout<<st.size()<<" "<<win['O']<<" "<<win['X']<<" "<<win['-']<<"\n";
    }
    return 0;
}