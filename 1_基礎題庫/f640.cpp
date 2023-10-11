#include <bits/stdc++.h>
using namespace std;

int eval(){
    string s;

    cin>>s;
    if(s=="f"){
        return 2* eval() - 3;
    }else if(s=="g"){
        return 2*eval()+eval()-7;
    }else if (s=="h")
        return 3*eval()-2*eval()+eval();
    else if((s[0]>='0' && s[0]<='9') || (s[0]=='-'))
        return stoi(s);
}

int main(){

    cout<<eval();
    return 0;
}