#include<iostream>
using namespace std ;

int main(){
   int a,b;
   
     while(cin>>a>>b){
        while( b > 0 ){
		   int t = a%b;
		   a = b;
		   b = t;
        }                
        cout<<a<<"\n";
                     
     }
     return 0;

}