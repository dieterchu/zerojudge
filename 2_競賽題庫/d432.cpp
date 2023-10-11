#include <bits/stdc++.h>
using namespace std;

string in,post;
void pre(int inL, int inR, int postL,int postR){

    if(inL>inR)
        return;    
    int root=inL;
    for(int i=inL+1;i<=inR;i++){
         if(in[i]==post[postR]){
            root = i;
            break;
         }
    }
    cout<<in[root];
    pre(inL,root-1, postL,postL + (root-1-inL));
    pre(root+1,inR, postR-1-(inR-(root+1)), postR-1);
}
int main(){

    cin>>in>>post;
    pre(0,in.size()-1, 0, in.size()-1);
    return 0;
}