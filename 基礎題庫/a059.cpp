#include <iostream>

using namespace std;

int main(){

   int sq[100];

   for(int i=0;i<100;i++)
      sq[i] = i*i;
   int Case;
   cin>>Case;
   for(int i=1;i<=Case;i++){
     int a,b;
     cin>>a>>b;
     if(a > b)
        swap(a,b);
     int sum = 0;
     for(int j=0;j<100;j++){
        if(sq[j] >= a && sq[j] <=b)
          sum += sq[j];
     }
     cout<<"Case "<<i<<": "<<sum<<"\n";

   }
    return 0;
}
