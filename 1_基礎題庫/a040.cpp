#include <iostream>
using namespace std;


int mypower(int a, int b){

   int p = 1;
   for(int i=0;i<b;i++)
      p*=a;
   return p;
}

int powerSum(int i){

   int d= to_string(i).size();
   int sum = 0;
   while(i){
     sum += mypower(i%10,d);
     i /= 10;
   }
   return sum;
}

int main(){

    int n,m;
    while(cin>>n>>m){
        bool found = false;
        for(int i=n;i<=m;i++){
           if(i==powerSum(i)){
             cout<<i<<" ";
             found = true;
           }
        }
        if(!found )
            cout<<"none";
        cout<<"\n";
    }
    return 0;


}
