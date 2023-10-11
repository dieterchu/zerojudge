#include <bits/stdc++.h>
using namespace std;
#define MAXN 7000
bool sieve[MAXN]={1,1};
vector<int> avg;
vector<int> prime;

int main(){
    int k;   

    for(int i=2;i<MAXN;i++){
        if(!sieve[i]){
           prime.push_back(i);
           for(int j=i+i;j<MAXN;j+=i){
              sieve[j] = true;
           }      
        }   
    }
    for(int i=1;i<prime.size()-1;i++){
         for(int j=0;j<prime.size();j++){
             int c = 2*prime[i] - prime[j];
             if(c <=0 ||c >=MAXN)
                break;
             if(!sieve[c]&&c!=prime[j]){                  
               avg.push_back(prime[i]);
               break;
             }             
         }
    }
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        cout<<avg[n-1]<<"\n";        
    }
    return 0;
}