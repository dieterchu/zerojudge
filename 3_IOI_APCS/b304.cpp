#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;   
    cin>>n;
    cin.ignore();
    string s;
    map<char,char> mp={{'(',')'},{'[',']'},{'{','}'}};
    while(n--){
        getline(cin,s);
        stack<char> stk;
        bool valid = true;
        for(auto ch:s){
            if(mp.count(ch))
              stk.push(ch);
            else{
                if(!stk.empty() && mp[stk.top()]==ch)
                    stk.pop();
                else{
                    valid = false;
                    break;
                }
            }
        }
        if(valid && stk.empty())
           cout<<"Yes\n";
        else
           cout<<"No\n";
    }
    return 0;
}