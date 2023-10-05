#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n){
        string s="";
        for(int i=n;i>0;i--)
            s += i+'0';
        do{
            cout<<s<<"\n";
        }while(prev_permutation(s.begin(),s.end()));
    }
    return 0;
}